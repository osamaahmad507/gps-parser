# gps-parser

This library provides functions to parse GPS data from a string to individual data members in a struct. It supports latitude, longitude, and altitude attributes.

## Usage

1. Include the `gps_parser.h` header file in your project:

```c
#include "gps_parser.h"
```

2. Define a gps_data_t structure to hold the parsed GPS data:

```c
gps_data_t gps_data;
```

3. Call the parse_gps_data() function with the GPS data string as the input parameter:

```c
parse_gps_data(gps_string, &gps_data);
```

Here, gps_string is the GPS data string to be parsed, and &gps_data is a pointer to the gps_data_t structure where the parsed data will be stored.

4.Access the individual attributes of the parsed GPS data using the gps_data structure:

```c
printf("Latitude: %f\n", gps_data.latitude);
printf("Longitude: %f\n", gps_data.longitude);
```

Here, gps_data.latitude and gps_data.longitude are the individual latitude and longitude attributes of the parsed GPS data, respectively.

