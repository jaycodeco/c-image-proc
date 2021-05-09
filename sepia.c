// Converting to sepia

#include "Image.h"
#include "utils.h"

int main(void) {
    Image img;

    // Loading the image
    Image_load(&img, "img.jpg");
    ON_ERROR_EXIT(img.data == NULL, "Error in loading the image\n image.jpg not found");

    // Convert the image to sepia
    Image img_sepia;
    Image_to_sepia(&img, &img_sepia);

    // Save the image
    Image_save(&img_sepia, "img_sepia.jpg");

    // Release memory
    Image_free(&img);
    Image_free(&img_sepia);
}
