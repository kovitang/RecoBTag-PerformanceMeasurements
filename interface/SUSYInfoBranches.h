#ifndef SUSYINFOBRANCHES_H
#define SUSYINFOBRANCHES_H

#include <TTree.h>

class SUSYInfoBranches {

  public :

  float metpt;
  float metphi; 
  float meteta;
  float HLT_PFMET90_PFMHT90_IDTight;

  //------------------------------------------------------------------------------------------------------------------

  void RegisterPatMETTree(TTree *tree) { 
     tree->Branch("HLT_PFMET90_PFMHT90_IDTight", &HLT_PFMET90_PFMHT90_IDTight, "HLT_PFMET90_PFMHT90_IDTight/F");
     tree->Branch("metpt", &metpt, "metpt/F");
     tree->Branch("metphi", &metphi, "metphi/F");
     tree->Branch("meteta", &meteta, "meteta/F");
  }

  //------------------------------------------------------------------------------------------------------------------

  void ReadPatMETTree(TTree *tree) {
    tree->SetBranchAddress("HLT_PFMET90_PFMHT90_IDTight" , &HLT_PFMET90_PFMHT90_IDTight);
    tree->SetBranchAddress("metpt" , &metpt);
    tree->SetBranchAddress("metphi" , &metphi);
    tree->SetBranchAddress("meteta" , &meteta);
  }
};

#endif
