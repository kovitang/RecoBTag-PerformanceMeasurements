#ifndef SUSYINFOBRANCHES_H
#define SUSYINFOBRANCHES_H

#include <TTree.h>

class SUSYInfoBranches {

  public :

  float metpt;
  float metphi; 
  float meteta;

  //------------------------------------------------------------------------------------------------------------------

  void RegisterPatMETTree(TTree *tree) { 
     tree->Branch("metpt", &metpt, "metpt/F");
     tree->Branch("metphi", &metphi, "metphi/F");
     tree->Branch("meteta", &meteta, "meteta/F");
  }

  //------------------------------------------------------------------------------------------------------------------

  void ReadPatMETTree(TTree *tree) {
    tree->SetBranchAddress("metpt" , &metpt);
    tree->SetBranchAddress("metphi" , &metphi);
    tree->SetBranchAddress("meteta" , &meteta);
  }
};

#endif
