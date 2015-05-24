LiquidCrystal ApoPeri(APV1,APV2,APV3,APV4,APV5,APV6,APV7);

float oldAp = 0;
float oldPe = 0;
//float oldVs = 0;
//float oldHs = 0;

void APVInit()
{
  ApoPeri.begin(20,4);  
  ApoPeri.setCursor(0,0);
  ApoPeri.print("A");
  ApoPeri.setCursor(0,1);
  ApoPeri.print("P");   
  ApoPeri.setCursor(0,2);
  ApoPeri.print("VS");
  ApoPeri.setCursor(0,3);
  ApoPeri.print("HS");
}

void APVRun()
{
  if(abs(VData.AP - oldAp) > 5)
  {
    ApoPeri.setCursor(2,0);
    ApoPeri.print(VData.AP);
    ApoPeri.setCursor(String(VData.AP).length()+2,0);
    ApoPeri.print("M");
    oldAp = VData.AP;
  }

  if(abs(VData.PE - oldPe) > 5)
  {
    ApoPeri.setCursor(2,1);
    ApoPeri.print(VData.PE);
    ApoPeri.setCursor(19,1);
    ApoPeri.print("M");
    oldPe = VData.PE;
  }
  
  //if(abs(VData.VVI - oldVs) > 5)
  //{
    ApoPeri.setCursor(3,2);
    ApoPeri.print(VData.VVI);
    ApoPeri.setCursor(17,2);
    ApoPeri.print("M/S");
    //oldVs = VData.VVI;
  //}

  /*if(abs(VData.Vsurf - oldHs) > 5)
  {
    ApoPeri.setCursor(3,3);
    ApoPeri.print(VData.Vsurf);
    ApoPeri.setCursor(17,3);
    ApoPeri.print("M/S");
    oldHs = VData.Vsurf;
  }*/
}  
