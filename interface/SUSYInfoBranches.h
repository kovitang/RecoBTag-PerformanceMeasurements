#ifndef SUSYINFOBRANCHES_H
#define SUSYINFOBRANCHES_H

#include <TTree.h>

class SUSYInfoBranches {

  public :

  float metpt;
  float metphi; 
  float meteta;
  float HLT_PFMET100_PFMHT100_IDTight;
  float HLT_PFMET110_PFMHT110_IDTight;
  float HLT_PFMET120_PFMHT120_IDTight;
 
  //------------------------------------------------------------------------------------------------------------------

  void RegisterPatMETTree(TTree *tree) { 
     tree->Branch("HLT_PFMET100_PFMHT100_IDTight", &HLT_PFMET100_PFMHT100_IDTight, "HLT_PFMET100_PFMHT100_IDTight/F");
     tree->Branch("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, "HLT_PFMET110_PFMHT110_IDTight/F");
     tree->Branch("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, "HLT_PFMET120_PFMHT120_IDTight/F");
     tree->Branch("metpt", &metpt, "metpt/F");
     tree->Branch("metphi", &metphi, "metphi/F");
     tree->Branch("meteta", &meteta, "meteta/F");
  }

  //------------------------------------------------------------------------------------------------------------------

  void ReadPatMETTree(TTree *tree) {
    tree->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight" , &HLT_PFMET100_PFMHT100_IDTight);
    tree->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight" , &HLT_PFMET110_PFMHT110_IDTight);
    tree->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight" , &HLT_PFMET120_PFMHT120_IDTight);
    tree->SetBranchAddress("metpt" , &metpt);
    tree->SetBranchAddress("metphi" , &metphi);
    tree->SetBranchAddress("meteta" , &meteta);
  }
};

#endif
