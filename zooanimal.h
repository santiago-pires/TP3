#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H


class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;

      //ZooAnimal#2
      ZooAnimal *mother;

    public:
      ZooAnimal();
      void Create(char *,int,int,int);
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);

      //ZooAnimal#2
      int reptWeightDate();
      void changeWeight (int pounds);
      inline void changeWeightDate (int today);
      int reptWeight ();
      //void reptWeight (scale which);

      void isMotherOf (ZooAnimal&);


   };

#endif // ZOOANIMAL_H
