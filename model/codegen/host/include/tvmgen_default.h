#ifndef TVMGEN_DEFAULT_H_
#define TVMGEN_DEFAULT_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor serving_default_input_2_0 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_SERVING_DEFAULT_INPUT_2_0_SIZE 12288
/*!
 * \brief Output tensor StatefulPartitionedCall_0 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_STATEFULPARTITIONEDCALL_0_SIZE 2
/*!
 * \brief Input tensor pointers for TVM module "default" 
 */
struct tvmgen_default_inputs {
  void* serving_default_input_2_0;
};

/*!
 * \brief Output tensor pointers for TVM module "default" 
 */
struct tvmgen_default_outputs {
  void* StatefulPartitionedCall_0;
};

/*!
 * \brief entrypoint function for TVM module "default"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default_run(
  struct tvmgen_default_inputs* inputs,
  struct tvmgen_default_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "default" 
 */
#define TVMGEN_DEFAULT_WORKSPACE_SIZE 118848

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT_H_
