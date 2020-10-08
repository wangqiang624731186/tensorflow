/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "third_party/eigen3/unsupported/Eigen/CXX11/Tensor"
#include "tensorflow/core/kernels/mlir_generated/unranked_op_gpu_base.h"

namespace tensorflow {

REGISTER_AND_GENERATE_KERNEL(Abs, DT_HALF, abs_f16, Eigen::half);
REGISTER_AND_GENERATE_KERNEL(Abs, DT_FLOAT, abs_f32, float);
REGISTER_AND_GENERATE_KERNEL(Abs, DT_DOUBLE, abs_f64, double);
REGISTER_AND_GENERATE_KERNEL(Abs, DT_INT32, abs_i32, int32);
REGISTER_AND_GENERATE_KERNEL(Abs, DT_INT64, abs_i64, int64);

}  // namespace tensorflow