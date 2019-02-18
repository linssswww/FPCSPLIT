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
using namespace HalconCpp;
class Matching
{
public:
	Matching(std::string template_path, 
		float match_thresh,
		int match_num,
		int match_levels);
	~Matching();

public:
	/*功能性*/
	void GetMinRect();
	void SplitImage();

	void GetShapeLocation();//获取没一个模板的位置
	void GetScores();
	
private:
	void LoadShapeTemplate();
	void CreateShapeTemplate();
	void FindShape();
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

