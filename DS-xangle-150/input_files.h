#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2017/alignment_run_September/version4/run_303652.9_re_reco.root"
	};
}
