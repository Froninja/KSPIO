Stepper radarAltimeter = Stepper(180,RALT1,RALT2,RALT3,RALT4);

int RAltStepPosition = 0;
int RAltStepCount;

void radarAltInit()
{
  radarAltimeter.setSpeed(150);
  radarAltimeter.step(-630);
}

void radarAlt()
{
  RAltStepCount = (VData.RAlt*0.63) - RAltStepPosition;
  if(VData.RAlt < 1000)
  {
     radarAltimeter.step(RAltStepCount);
  }
  RAltStepPosition = RAltStepPosition + RAltStepCount;  
}
