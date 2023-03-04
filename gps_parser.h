#ifndef __GPS_PARSER_H__
#define __GPS_PARSER_H__

typedef struct {
    float lat;
    float lon;
    float alt;
} gps_data_t;

void parse_gps_data(const char* gps_string, gps_data_t* gps_data);
float get_indv_attr(const gps_data_t* gps_data, const char* attr_name);

#endif /* __GPS_PARSER_H__ */
