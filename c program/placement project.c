#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <opencv2/opencv.hpp>
#include <tesseract/baseapi.h>

using namespace cv;

struct Plant {
    const char* species_name;
    const char* genetic_name;
    const char* family_name;
    const char* properties;
    const char* uses;
};

struct Plant plant_data[] = {
    {
        "Sunflower",
        "Helianthus annuus",
        "Asteraceae",
        "Sunflowers are tall, annual plants with large, bright yellow flowers.",
        "Sunflower seeds are commonly used as a snack, and sunflower oil is extracted from the seeds for cooking and cosmetic purposes."
    },
    {
        "Rose",
        "Rosa",
        "Rosaceae",
        "Roses are woody perennial flowering plants with thorny stems and a wide range of flower colors.",
        "Roses are popular garden flowers and are used for cut flowers, perfumes, and rose oil extraction."
    },
    {
        "Tulip",
        "Tulipa",
        "Liliaceae",
        "Tulips are spring-blooming perennial herbaceous bulbiferous geophytes.",
        "Tulips are popular garden flowers and are also used for cut flowers and ornamental displays."
    },
    {
        "Lavender",
        "Lavandula",
        "Lamiaceae",
        "Lavenders are flowering plants in the mint family, with aromatic foliage and vibrant purple flowers.",
        "Lavender is used in perfumes, soaps, and various beauty and household products. It is also popular for its calming properties."
    },
};

int num_plants = sizeof(plant_data) / sizeof(struct Plant);

const char* process_image(const char* image_path) {
    cv::Mat image = cv::imread(image_path, cv::IMREAD_GRAYSCALE);
    cv::Ptr<cv::text::OCRTesseract> ocr = cv::text::OCRTesseract::create();

    std::string plant_name;
    ocr->run(image, plant_name);

    return strdup(plant_name.c_str());
}

struct Plant* get_plant_details(const char* plant_name) {
    for (int i = 0; i < num_plants; ++i) {
        if (strcmp(plant_name, plant_data[i].species_name) == 0) {
            return &plant_data[i];
        }
    }

    return NULL;
}

int main() {
    const char* image_path = "path_to_image.jpg";
    const char* plant_name = process_image(image_path);

    struct Plant* plant_details = get_plant_details(plant_name);

    if (plant_details != NULL) {
        printf("Plant Details:\n");
        printf("Species Name: %s\n", plant_name);
        printf("Genetic Name: %s\n", plant_details->genetic_name);
        printf("Family Name: %s\n", plant_details->family_name);
        printf("Properties: %s\n", plant_details->properties);
        printf("Uses: %s\n", plant_details->uses);
    } else {
        printf("Plant details not found.\n");
    }

    return 0;
}
