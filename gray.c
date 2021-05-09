// Converting to grayscale

#include "Image.h"
#include "utils.h"

int main(void) {
    Image img;

    // Load the image 
    Image_load(&img, "img.jpg");
    ON_ERROR_EXIT(img.data == NULL, "Error in loading the image\n image.jpg not found");

    // Convert the image to gray
    Image img_gray;
    Image_to_gray(&img, &img_gray);

    // Save the image
    Image_save(&img_gray, "img_gray.jpg");

    // Release memory
    Image_free(&img);
    Image_free(&img_gray);
}
