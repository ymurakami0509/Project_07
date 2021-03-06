#ifndef _MAIN_H_
#define _MAIN_H_


#include "ReadSTL.hpp"
#include "PreprocessingSTL.hpp"
#include "PointSearch.hpp"
#include "ReadPointCloud.hpp"
#include "VoxelGrid.hpp"
#include "SurfaceNormals.hpp"
#include "NormalDirection.hpp"
#include "BasicCalculation.hpp"
#include "LeastSquaresMethods.hpp"
#include "CalPCA.hpp"
#include "InterpolationSTL.hpp"
#include "RemoveOutliers.hpp"
#include "RANSAC.hpp"
#include "PPF.hpp"
#include "KeypointNormals.hpp"
#include "FeaturePointExtraction36.hpp"
#include "FeaturePointExtractionHarris.hpp"
#include "Detectors.hpp"
#include "FeatureDescription.hpp"
#include "CorrespondenceGrouping.hpp"
#include "DataMatching.hpp"

#include "PCLViewer.hpp"

#include <random>
#include <queue>
#include <chrono>
#include <pcl/io/pcd_io.h>
#include <pcl/common/io.h>
#include <pcl/point_types.h>
//#include <pcl/features/normal_3d.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/keypoints/harris_3d.h>
//#include <pcl/visualization/pcl_visualizer.h>

#include <pcl/features/integral_image_normal.h>

#include "Output.h"

#include "ForFixPoint.hpp"
#include "CalSphereVolume.hpp"

#include "Simulation20171030.hpp"
#include "Simulation20171113.hpp"
#include "Simulation20171127.hpp"

#include "MakeModelPPF.hpp"
#include "MakeMeasurementPPF.hpp"
#include "JacobiAnother.hpp"
#include "JacobiAnother2.hpp"
#include "Projection.hpp"
#include "MakeAccuracyFile.hpp"

#include "Simulation20180207.hpp"

#endif // _MAIN_H_
