/*
 * Copyright (c) 2015 New Designs Unlimited, LLC
 * Opensource Automated License Plate Recognition [http://www.openalpr.com]
 *
 * This file is part of OpenAlpr.
 *
 * OpenAlpr is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License
 * version 3 as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPENALPR_EDGEFINDER_H
#define	OPENALPR_EDGEFINDER_H

#include "opencv2/imgproc/imgproc.hpp"
#include "pipeline_data.h"
#include "transformation.h"
#include "platelines.h"
#include "platecorners.h"

namespace alpr
{
  
  class EdgeFinder {
  public:
    EdgeFinder(PipelineData* pipeline_data);
    virtual ~EdgeFinder();

    std::vector<cv::Point2f> findEdgeCorners();

    float confidence;

  private:
    PipelineData* pipeline_data;

  };

}
#endif	/* OPENALPR_EDGEFINDER_H */

