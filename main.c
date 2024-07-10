#include <stdio.h>
#include "car.c"
#include "catan.c"
#include "tvmgen_default.h"

int main(void){
    uint8_t output[2];

    struct tvmgen_default_inputs inputs = {
            .serving_default_input_2_0 = (void*)&CAR_IMAGE,
    };
    struct tvmgen_default_outputs outputs = {
            .StatefulPartitionedCall_0 = (void*)&output,
    };

    printf("Evaluating VWW model using microTVM:\n");

    inputs.serving_default_input_2_0 = (void*)&CAR_IMAGE;
    tvmgen_default_run(&inputs, &outputs);
    printf("Car Result: %d,  %d\n", output[0], output[1]);

    inputs.serving_default_input_2_0 = (void*)&CATAN_IMAGE;
    tvmgen_default_run(&inputs, &outputs);
    printf("Random Result: %d,  %d\n", output[0], output[1]);

    return 0;
}