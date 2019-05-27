#include "tennis_game_2.h"
#include <string.h>
#include <stdlib.h>

tennis_game_2_t create_tennis_game_2(const char *player1_name, const char *player2_name)
{
    tennis_game_2_t result;

    strcpy(result.player1_name, player1_name);
    strcpy(result.player2_name, player2_name);
    result.player_one_score_as_string = "";
    result.player_two_score_as_string = "";
    result.player1_score = 0;
    result.player2_score = 0;

    return result;
}

void won_point_2(tennis_game_2_t *tennis_game, const char *player_name)
{
    if (strcmp("player1", player_name) == 0) {
        tennis_game->player1_score++;
    } else {
        tennis_game->player2_score++;
    }
}

const char *get_score_2(tennis_game_2_t *tennis_game)
{
    char *score = calloc(20, sizeof(char));

    if (tennis_game->player1_score == tennis_game->player2_score && tennis_game->player1_score < 4) {
        if (tennis_game->player1_score == 0)
            strcpy(score, "Love");
        if (tennis_game->player1_score == 1)
            strcpy(score, "Fifteen");
        if (tennis_game->player1_score == 2)
            strcpy(score, "Thirty");
        if (tennis_game->player1_score == 3)
            strcpy(score, "Forty");

        strcat(score, "-All");
        return score;
    }
    if (tennis_game->player1_score == tennis_game->player2_score && tennis_game->player1_score > 3) {
        strcpy(score, "Deuce");
        return score;
    }
/*
    if (tennis_game->player1_score > 0 && tennis_game->player2_score == 0) {
        if (tennis_game->player1_score == 1)
            tennis_game->player_one_score_as_string = "Fifteen";
        if (tennis_game->player1_score == 2)
            tennis_game->player_one_score_as_string = "Thirty";
        if (tennis_game->player1_score == 3)
            tennis_game->player_one_score_as_string = "Forty";

        tennis_game->player_two_score_as_string = "Love";
        strcpy(score, tennis_game->player_one_score_as_string);
        strcat(score, "-");
        strcat(score, tennis_game->player_two_score_as_string);
    }

    if (tennis_game->player2_score > 0 && tennis_game->player1_score == 0) {
        if (tennis_game->player2_score == 1)
            tennis_game->player_two_score_as_string = "Fifteen";
        if (tennis_game->player2_score == 2)
            tennis_game->player_two_score_as_string = "Thirty";
        if (tennis_game->player2_score == 3)
            tennis_game->player_two_score_as_string = "Forty";

        tennis_game->player_one_score_as_string = "Love";
        strcpy(score, tennis_game->player_one_score_as_string);
        strcat(score, "-");
        strcat(score, tennis_game->player_two_score_as_string);
    }

    if ((tennis_game->player1_score - tennis_game->player2_score) != 0 && tennis_game->player1_score < 4 &&
        tennis_game->player2_score < 4) {
        switch (tennis_game->player1_score) {
            case 0 :
                strcpy(score, "Love");
            case 1 :
                strcpy(score, "Fifteen");
            case 2 :
                strcpy(score, "Thirty");
            case 3 :
                strcpy(score, "Forty");
        }
        strcat(score, "-");
        switch (tennis_game->player2_score) {
            case 0 :
                strcat(score, "Love");
            case 1 :
                strcat(score, "Fifteen");
            case 2 :
                strcat(score, "Thirty");
            case 3 :
                strcat(score, "Forty");
        }
    }

    if (tennis_game->player1_score == 1)
        tennis_game->player_one_score_as_string = "Fifteen";
    if (tennis_game->player1_score == 2)
        tennis_game->player_one_score_as_string = "Thirty";
    if (tennis_game->player1_score == 3)
        tennis_game->player_one_score_as_string = "Forty";
    if (tennis_game->player2_score == 1)
        tennis_game->player_two_score_as_string = "Fifteen";
    if (tennis_game->player2_score == 2)
        tennis_game->player_two_score_as_string = "Thirty";
    if (tennis_game->player2_score == 3)
        tennis_game->player_two_score_as_string = "Forty";

    strcpy(score, tennis_game->player_one_score_as_string);
    strcat(score, "-");
    strcat(score, tennis_game->player_two_score_as_string);
    return score;
}
if (tennis_game->player2_score > tennis_game->player1_score && tennis_game->player2_score < 4) {
    if (tennis_game->player1_score == 1)
        tennis_game->player_one_score_as_string = "Fifteen";
    if (tennis_game->player1_score == 2)
        tennis_game->player_one_score_as_string = "Thirty";
    if (tennis_game->player1_score == 3)
        tennis_game->player_one_score_as_string = "Forty";
    if (tennis_game->player2_score == 1)
        tennis_game->player_two_score_as_string = "Fifteen";
    if (tennis_game->player2_score == 2)
        tennis_game->player_two_score_as_string = "Thirty";
    if (tennis_game->player2_score == 3)
        tennis_game->player_two_score_as_string = "Forty";

    strcpy(score, tennis_game->player_one_score_as_string);
    strcat(score, "-");
    strcat(score, tennis_game->player_two_score_as_string);
    return score;
}

    if (tennis_game->player1_score > tennis_game->player2_score && tennis_game->player2_score >= 3) {
        strcpy(score, "Advantage player1");
    }

    if (tennis_game->player2_score > tennis_game->player1_score && tennis_game->player1_score >= 3) {
        strcpy(score, "Advantage player2");
    }

    if (tennis_game->player1_score >= 4 && tennis_game->player2_score >= 0 &&
        (tennis_game->player1_score - tennis_game->player2_score) >= 2) {
        strcpy(score, "Win for player1");
    }

    if (tennis_game->player2_score >= 4 && tennis_game->player1_score >= 0 &&
        (tennis_game->player2_score - tennis_game->player1_score) >= 2) {
        strcpy(score, "Win for player2");
    }
*/
    switch (tennis_game->player1_score) {
        case 0 :
            strcpy(score, "Love");
            break;
        case 1 :
            strcpy(score, "Fifteen");
            break;
        case 2 :
            strcpy(score, "Thirty");
            break;
        case 3 :
            strcpy(score, "Forty");
            break;
        default:
            if (tennis_game->player1_score - tennis_game->player2_score == 1 &&
                tennis_game->player1_score + tennis_game->player2_score >= 4) {
                strcpy(score, "Advantage player1");
            } else if (tennis_game->player1_score - tennis_game->player2_score == -1 &&
                       tennis_game->player1_score >= 4) {
                strcpy(score, "Advantage player2");
            } else if (tennis_game->player1_score + tennis_game->player2_score >= 4 &&
                       tennis_game->player1_score > tennis_game->player2_score) {
                strcpy(score, "Win for player1");
            } else if (tennis_game->player1_score + tennis_game->player2_score >= 4 &&
                       tennis_game->player1_score < tennis_game->player2_score) {
                strcpy(score, "Win for player2");
            }
    }
    if (tennis_game->player1_score < 4) {
        strcat(score, "-");
    }
    switch (tennis_game->player2_score) {
        case 0 :
            if (tennis_game->player1_score < 4) {
                strcat(score, "Love");
            }
            break;
        case 1 :
            if (tennis_game->player1_score < 4) {
                strcat(score, "Fifteen");
            }
            break;
        case 2 :
            if (tennis_game->player1_score < 4) {
                strcat(score, "Thirty");
            }
            break;
        case 3 :
            if (tennis_game->player1_score < 4) {
                strcat(score, "Forty");
                break;
            }
        default:
            if (tennis_game->player1_score - tennis_game->player2_score == 1 &&
                tennis_game->player1_score + tennis_game->player2_score >= 4) {
                strcpy(score, "Advantage player1");
            } else if (tennis_game->player1_score - tennis_game->player2_score == -1 &&
                       tennis_game->player1_score + tennis_game->player2_score >= 4) {
                strcpy(score, "Advantage player2");
            } else if (tennis_game->player1_score + tennis_game->player2_score >= 4 &&
                       tennis_game->player1_score > tennis_game->player2_score) {
                strcpy(score, "Win for player1");
            } else if (tennis_game->player1_score + tennis_game->player2_score >= 4 &&
                       tennis_game->player1_score < tennis_game->player2_score) {
                strcpy(score, "Win for player2");
            }
    }

    return score;
}