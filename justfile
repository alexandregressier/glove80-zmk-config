#!/usr/bin/env just --justfile

default:
    @just --choose

bootstrap:
    #!/usr/bin/env bash
    set -euxo pipefail
    python3 -m venv .venv/
    source .venv/bin/activate
    pip install west
    west init -l config/
    west update
    west zephyr-export
    pip install -r zephyr/scripts/requirements-base.txt

update:
    .venv/bin/west update

build: build-left build-right

build-left:
	.venv/bin/west build \
	    --pristine \
	    --build-dir=build/glove80_lh \
	    --board=glove80_lh \
	    ../zmk/app \
	    -- \
	    -DZMK_CONFIG="{{justfile_directory()}}/config/"

build-right:
	.venv/bin/west build \
	    --pristine \
	    --build-dir=build/glove80_rh \
	    --board=glove80_rh \
	    ../zmk/app \
	    -- \
	    -DZMK_CONFIG="{{justfile_directory()}}/config/"

clean:
	rm -rf build/

format:
    dtsfmt config/glove80.keymap
