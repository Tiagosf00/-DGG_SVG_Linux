#pragma once

#include "../headers.h"

void DGG_ICH_Precompute_Multithread(const std::string& input_obj_name, double accuracy_control_parameter, double const_for_theta, int thread_num);

void SVG_ICH_Precompute_Multithread(const std::string& input_obj_name, int fixed_K, int thread_num);
