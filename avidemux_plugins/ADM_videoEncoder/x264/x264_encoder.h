// automatically generated by admSerialization.py do not edit
#include "string"
#pragma once
typedef struct {
bool useAdvancedConfiguration;
struct  {
	COMPRES_PARAMS params;
	uint32_t threads;
	std::string preset;
	std::string tuning;
	std::string profile;
	bool fast_decode;
	bool zero_latency;
	bool fast_first_pass;
	bool blueray_compatibility;
	bool fake_interlaced;
}general;
int32_t level;
struct  {
	uint32_t sar_height;
	uint32_t sar_width;
}vui;
uint32_t MaxRefFrames;
uint32_t MinIdr;
uint32_t MaxIdr;
uint32_t i_scenecut_threshold;
bool intra_refresh;
uint32_t MaxBFrame;
uint32_t i_bframe_adaptive;
uint32_t i_bframe_bias;
uint32_t i_bframe_pyramid;
bool b_deblocking_filter;
int32_t i_deblocking_filter_alphac0;
int32_t i_deblocking_filter_beta;
bool cabac;
bool interlaced;
bool constrained_intra;
bool tff;
bool fake_interlaced;
struct  {
	bool b_8x8;
	bool b_i4x4;
	bool b_i8x8;
	bool b_p8x8;
	bool b_p16x16;
	bool b_b16x16;
	uint32_t weighted_pred;
	bool weighted_bipred;
	uint32_t direct_mv_pred;
	uint32_t chroma_offset;
	uint32_t me_method;
	uint32_t me_range;
	int32_t mv_range;
	int32_t mv_range_thread;
	uint32_t subpel_refine;
	bool chroma_me;
	bool mixed_references;
	uint32_t trellis;
	float psy_rd;
	float psy_trellis;
	bool fast_pskip;
	bool dct_decimate;
	uint32_t noise_reduction;
	bool psy;
	uint32_t intra_luma;
	uint32_t inter_luma;
}analyze;
struct  {
	uint32_t rc_method;
	uint32_t qp_constant;
	uint32_t qp_min;
	uint32_t qp_max;
	uint32_t qp_step;
	uint32_t bitrate;
	float rate_tolerance;
	uint32_t vbv_max_bitrate;
	uint32_t vbv_buffer_size;
	uint32_t vbv_buffer_init;
	float ip_factor;
	float pb_factor;
	uint32_t aq_mode;
	float aq_strength;
	bool mb_tree;
	uint32_t lookahead;
}ratecontrol;
}x264_encoder;
