#pragma once
#ifndef __APPLE__
#  include "HalconCpp.h"
#  include "HDevThread.h"
#  if defined(__linux__) && !defined(NO_EXPORT_APP_MAIN)
#    include <X11/Xlib.h>
#  endif
#else
#  ifndef HC_LARGE_IMAGES
#    include <HALCONCpp/HalconCpp.h>
#    include <HALCONCpp/HDevThread.h>
#  else
#    include <HALCONCppxl/HalconCpp.h>
#    include <HALCONCppxl/HDevThread.h>
#  endif
#  include <stdio.h>
#  include <HALCON/HpThread.h>
#  include <CoreFoundation/CFRunLoop.h>
#endif
#include<string>
#include <Tuple>
using namespace HalconCpp;
class Matching
{
public:
	Matching(std::string template_path,
		float match_thresh,
		int match_num,
		int match_levels);
	~Matching() {};
private:
	HTuple model_id;
	
public:
	/*������*/
	void GetMinRect();
	void SplitImage();

	void GetShapeLocation();//��ȡûһ��ģ���λ��
	void GetScores();
	
private:
	void LoadShapeTemplate(std::string template_path);
	void CreateShapeTemplate(std::string template_path);
	void CreateShapeTemplate(int num_level, int angle_start, int angle_end, float contrast, float min_contrast); //angle 360 ~0
	std::tuple<HTuple, HTuple, HTuple, HTuple> FindShape(HObject ho_image, HTuple angle_start, HTuple angle_end, HTuple minScore, HTuple match_num, HTuple greediness);


};

class TileImage
{
	
};

class HalconShower
{
public:
	HalconShower() {};
	~HalconShower() {};
};
class HalconTools
{
public:
	HalconTools() {};
	~HalconTools() {};
};

