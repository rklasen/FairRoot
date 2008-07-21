/* Generated by Together */

#ifndef CBMDOUBLEHIT_H
#define CBMDOUBLEHIT_H


#include "TObject.h"
#include "TVector3.h"

class CbmDoubleHit : public TObject {
protected:
  Int_t  fRefIndex; 
  Int_t fDetectorID; 
  TVector3 fPosition_in;  
  TVector3 fPositionError_in;  
  TVector3 fPosition_out;  
  TVector3 fPositionError_out;  

public:    

    CbmDoubleHit();
    virtual ~CbmDoubleHit();    
    
   // methods
    
    virtual void Print(const Option_t* opt = 0) const =0;

    // set methods
    virtual void SetDetectorID(Int_t chamb)=0;
    virtual void SetPos_in      (TVector3 xyz)=0;
    virtual void SetDPos_in      (TVector3 xyz)=0;
    virtual void SetPos_out      (TVector3 xyz)=0;
    virtual void SetDPos_out      (TVector3 xyz)=0;
    virtual void SetRefIndex      (Int_t index)=0;
      
    // get methods
    virtual Int_t GetDetectorID()=0;
    virtual Int_t GetRefIndex()=0; 
      
    virtual TVector3 GetPos_in()=0;
    virtual TVector3 GetDPos_in()=0;
    virtual TVector3 GetPos_out()=0;
    virtual TVector3 GetDPos_out()=0;

    virtual Double_t x_in() =0;
    virtual Double_t y_in() =0;
    virtual Double_t z_in() =0;
    virtual Double_t dx_in()=0;
    virtual Double_t dy_in()=0;
    virtual Double_t dz_in()=0;

    virtual Double_t x_out() =0;
    virtual Double_t y_out() =0;
    virtual Double_t z_out() =0;
    virtual Double_t dx_out()=0;
    virtual Double_t dy_out()=0;
    virtual Double_t dz_out()=0;
    
    ClassDef(CbmDoubleHit,1) //CBMDoubleHit
};
#endif //CBMDOUBLEHIT_H




