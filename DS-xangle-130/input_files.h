#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.44_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.48_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.49_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.52_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.54_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.55_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.56_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.57_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.58_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.59_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.60_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.61_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.62_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version1/run_303658.9_re_reco.root"
	};
}
