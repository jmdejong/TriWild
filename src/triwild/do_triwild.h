// This file is part of TriWild, a software for generating linear/curved triangle meshes.
//
// Copyright (C) 2019 Yixin Hu <yixin.hu@nyu.edu>
// This Source Code Form is subject to the terms of the Mozilla Public License
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at http://mozilla.org/MPL/2.0/.
//
//
// Created by Yixin Hu on 2019-06-11.
//

#ifndef TRIWILD_DO_TRIWILD_H
#define TRIWILD_DO_TRIWILD_H

#include "meshio.hpp"

#include <igl/Timer.h>
#include <igl/writeSTL.h>
#include "optimization.h"
#include "feature.h"
#include "triangulation.h"

using json = nlohmann::json;

namespace triwild {
    void do_triwild(const Eigen::MatrixXd &V_in, const Eigen::MatrixXi &E_in, const json& feature_info,
                    Eigen::MatrixXd &V_out, Eigen::MatrixXi &F_out, Eigen::MatrixXd& nodes, std::vector<std::vector<int>>& F_nodes,
                    double stop_quality, int max_its, int stage,
                    double epsilon, double feature_epsilon,
                    double target_edge_len, double edge_length_r,
                    double flat_feature_angle,
                    bool cut_outside,
                    const std::string &hole_file,
                    bool mute_log);
}


#endif //TRIWILD_DO_TRIWILD_H
