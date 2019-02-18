#include "HalconTools.h"

Matching::Matching(std::string template_path, float match_thresh, int match_num, int match_levels)
{
	CreateShapeTemplate(template_path);
}
void Matching::SplitImage()
{

}
/*直接从文件获取*/
void Matching::LoadShapeTemplate(std::string template_path)
{
	ReadShapeModel(template_path.c_str(), &model_id);
}
/*创建*/
void Matching::CreateShapeTemplate(std::string template_path)
{
	//E:/pcb/template/pcb_template.shm
	ReadShapeModel(template_path.c_str(), &model_id);
}

void Matching::CreateShapeTemplate(int num_level, int angle_start, int angle_end, float contrast, float min_contrast)
{

}

std::tuple<HTuple, HTuple, HTuple, HTuple> Matching::FindShape(HObject ho_image, HTuple angle_start, HTuple angle_end, HTuple minScore, HTuple match_num, HTuple greediness)
{
	HTuple hv_ModelRow, hv_ModelColumn, hv_ModelScore, hv_ModelAngle;
	FindShapeModel(ho_image, model_id, HTuple(angle_start).TupleRad(), HTuple(angle_end).TupleRad(),
		minScore, match_num, 0.5, (HTuple("none").Append("max_deformation 11")), (HTuple(8).Append(1)),
		greediness, &hv_ModelRow, &hv_ModelColumn, &hv_ModelAngle, &hv_ModelScore);

	std::tuple<HTuple, HTuple, HTuple, HTuple> result(hv_ModelRow, hv_ModelColumn, hv_ModelAngle, hv_ModelScore);

	return result;
}




/**/