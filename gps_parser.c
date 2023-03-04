#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gps_parser.h"

void parse_gps_data(const char* gps_string, gps_data_t* gps_data) {
    char* token = strtok((char*)gps_string, ",");
    int token_index = 0;

    while (token != NULL && token_index < 4) {
        switch (token_index) {
            case 0: // latitude
                gps_data->lat = atof(token);
                break;
            case 1: // longitude
                gps_data->lon = atof(token);
                break;
            case 2: // altitude
                gps_data->alt = atof(token);
                break;
            default:
                break;
        }

        token = strtok(NULL, ",");
        token_index++;
    }
}

float get_indv_attr(const gps_data_t* gps_data, const char* attr_name) {
    if (strcmp(attr_name, "lat") == 0) {
        return gps_data->lat;
    } else if (strcmp(attr_name, "lon") == 0) {
        return gps_data->lon;
    } else if (strcmp(attr_name, "alt") == 0) {
        return gps_data->alt;
    } else {
        return 0.0f;
    }
}
