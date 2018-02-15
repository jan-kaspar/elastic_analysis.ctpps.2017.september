#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version3/run_303665.9_re_reco.root"
	};
}
