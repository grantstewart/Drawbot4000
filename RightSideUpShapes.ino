void RightSideUpLineShapes(){
     
  int zizzo = int(random(2000)); //choose random 0 1 2 3 
  int zizzo2 = int(random(20)); //choose random 0 1 2 3 
  int numLines = int(random(13));
  
for(int i=0;i<numLines;i++){
    RM.step(zizzo, BACKWARD, INTERLEAVE); 
    R+=zizzo;
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
    RM.step(zizzo,FORWARD, INTERLEAVE);
    R-=zizzo;
    LM.step(zizzo2,FORWARD,INTERLEAVE);
    L+=zizzo2;
}


}
