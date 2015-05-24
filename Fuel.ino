Stepper fuel = Stepper(180,FUEL1,FUEL2,FUEL3,FUEL4);

int FuelStepPosition = 630;
int FuelStepCount;

void fuelInit()
{
  fuel.setSpeed(150);
  fuel.step(630);
}

void fuelRun()
{
  if(digitalRead(FUELSWITCH1) == LOW)
  {
    FuelStepCount = ((VData.LiquidFuelTotS/VData.LiquidFuelS)*630) - FuelStepPosition;
    fuel.step(FuelStepCount);
    FuelStepPosition = FuelStepPosition + FuelStepCount;
    digitalWrite(FUELTEST,LOW);
  }
  else if(digitalRead(FUELSWITCH2) == LOW)
  {
    FuelStepCount = ((VData.SolidFuelTot/VData.SolidFuel)*630) - FuelStepPosition;
    fuel.step(FuelStepCount);
    FuelStepPosition = FuelStepPosition + FuelStepCount;
    digitalWrite(FUELTEST,HIGH);
  }
  else if (digitalRead(FUELSWITCH3) == LOW)
  {
    FuelStepCount = ((VData.XenonGasTot/VData.XenonGas)*630) - FuelStepPosition;
    fuel.step(FuelStepCount);
    FuelStepPosition = FuelStepPosition + FuelStepCount;
    digitalWrite(FUELTEST,LOW);
  }
}
