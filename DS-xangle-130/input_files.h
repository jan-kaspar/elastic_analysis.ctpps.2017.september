#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.100_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.101_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.102_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.103_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.104_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.105_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.106_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.107_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.108_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.109_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.110_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.111_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.112_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.113_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.114_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.115_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.116_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.117_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.118_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.119_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.120_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.121_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.122_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.123_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.124_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.125_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.126_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.127_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.128_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.129_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.130_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.131_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.132_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.133_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.134_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.135_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.44_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.48_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.49_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.52_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.54_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.55_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.56_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.57_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.58_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.59_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.60_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.61_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.62_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.63_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.64_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.65_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.66_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.67_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.68_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.69_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.70_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.71_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.72_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.73_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.74_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.75_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.76_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.77_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.78_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.79_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.80_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.81_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.82_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.83_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.84_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.85_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.86_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.87_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.88_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.89_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.90_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.91_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.92_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.93_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.94_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.95_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.96_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.97_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.98_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.99_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303658.9_re_reco.root"
	};
}
