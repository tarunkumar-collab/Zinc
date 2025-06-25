typedef struct secrets{
    char *encrypted_message;
    char *keystream;
    char *hash;
    char *ssl_Certificate;
    char *tls_certificate;
    char *random_number;
};

typedef struct device_information{
    char *device_name;
    char *ipv4_address;
    char *ipv6_address;
    char *ipv8_address;
    char *mac_address;
    char *threads;
    char *time;
    char *timezone;
    char *processor;//Processor name.
    char *processor_frequency;
};

typedef struct display_region{
    __uint128_t length; // Length of the display tensor
    __uint128_t width; // Width of the display tensor.
    __uint128_t height; // Height of the display tensor.
    __uint128_t initial_colour_mix; //Initial colour mix of the liquid.
    __uint128_t brightness; // Brightness of one region of the tensor.
    __uint128_t hue; // Hue of one region of the tensor.
    __uint128_t saturation; // Saturation of one region of the tensor.
};