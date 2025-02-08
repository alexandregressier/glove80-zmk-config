#define C1R2_L 15
#define C1R3_L 27
#define C1R4_L 39
#define C1R5_L 51
#define C2R1_L 4
#define C2R2_L 14
#define C2R3_L 26
#define C2R4_L 38
#define C2R5_L 50
#define C2R6_L 68
#define C3R1_L 3
#define C3R2_L 13
#define C3R3_L 25
#define C3R4_L 37
#define C3R5_L 49
#define C3R6_L 67
#define C4R1_L 2
#define C4R2_L 12
#define C4R3_L 24
#define C4R4_L 36
#define C4R5_L 48
#define C4R6_L 66
#define C5R1_L 1
#define C5R2_L 11
#define C5R3_L 23
#define C5R4_L 35
#define C5R5_L 47
#define C5R6_L 65
#define C6R1_L 0
#define C6R2_L 10
#define C6R3_L 22
#define C6R4_L 34
#define C6R5_L 46
#define C6R6_L 64

#define T1_L 52
#define T2_L 53
#define T3_L 54
#define T4_L 69
#define T5_L 70
#define T6_L 71

#define C1R2_R 16
#define C1R3_R 28
#define C1R4_R 40
#define C1R5_R 58
#define C2R1_R 5
#define C2R2_R 17
#define C2R3_R 29
#define C2R4_R 41
#define C2R5_R 59
#define C2R6_R 75
#define C3R1_R 6
#define C3R2_R 18
#define C3R3_R 30
#define C3R4_R 42
#define C3R5_R 60
#define C3R6_R 76
#define C4R1_R 7
#define C4R2_R 19
#define C4R3_R 31
#define C4R4_R 43
#define C4R5_R 61
#define C4R6_R 77
#define C5R1_R 8
#define C5R2_R 20
#define C5R3_R 32
#define C5R4_R 44
#define C5R5_R 62
#define C5R6_R 78
#define C6R1_R 9
#define C6R2_R 21
#define C6R3_R 33
#define C6R4_R 45
#define C6R5_R 63
#define C6R6_R 79

#define T1_R 57
#define T2_R 56
#define T3_R 55
#define T4_R 74
#define T5_R 73
#define T6_R 72


#define KEYS_L C6R1_L C5R1_L C4R1_L C3R1_L C2R1_L        \
               C6R2_L C5R2_L C4R2_L C3R2_L C2R2_L C1R2_L \
               C6R3_L C5R3_L C4R3_L C3R3_L C2R3_L C1R3_L \
               C6R4_L C5R4_L C4R4_L C3R4_L C2R4_L C1R4_L \
               C6R5_L C5R5_L C4R5_L C3R5_L C2R5_L C1R5_L \
               C6R6_L C5R6_L C4R6_L C3R6_L C2R6_L

#define THUMB_L T1_L T2_L T3_L \
                T4_L T5_L T6_L

#define KEYS_R          C2R1_R C3R1_R C4R1_R C5R1_R C6R1_R \
                 C1R2_R C2R2_R C3R2_R C4R2_R C5R2_R C6R2_R \
                 C1R3_R C2R3_R C3R3_R C4R3_R C5R3_R C6R3_R \
                 C1R4_R C2R4_R C3R4_R C4R4_R C5R4_R C6R4_R \
                 C1R5_R C2R5_R C3R5_R C4R5_R C5R5_R C6R5_R \
                        C2R6_R C3R6_R C4R6_R C5R6_R C6R6_R

#define THUMB_R T3_R T2_R T1_R \
                T6_R T5_R T4_R


#define THUMBS THUMB_L THUMB_R
