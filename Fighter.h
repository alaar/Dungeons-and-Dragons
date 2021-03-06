//! @file
//! @brief Header file for the Character class
//!
#pragma once
#include <string>
#include <map>
#include "Subject.h"
#include "ItemContainer.h"
#include "Character.h"
#include "Logger.h"

const int MAX_ITEMS_EQUIPPED = 7;
using namespace std;


//! Class that implements a character
class Fighter : public Character {
 public:

  //constructors
  Fighter();
  Fighter(int, int, int, int, int, int);

  //logical game functions
  void setCharacterType(string type);
  bool validateNewCharacter();
  void hit(int);
  int generateStats();
  void hpChange();
  int abilityModifier(int);
  //virtual int attackBonus();//class to be inherited
  void setAttackBonus();
  void playerInfo(); //displaying character info
  void printBackPackItems();
  void addToBackpack(Item*);
  void levelUp();
  //saving and loading character
  void setLevel(int);
  void setPositionX(int);
  void setPositionY(int);
  void setStrength(int);
  void setDexterity(int);
  void setConstitution(int);
  void setIntelligence(int);
  void setWisdom(int);
  void setCharisma(int);
  void setArmor();
  void setHitPoints(int);
  //void setStrategy(StrategyN*);
  void setAbilityScores(int, int);

  //game accessor methods
  int getHitPoints();
  int getLevel();
  int getPositionX();
  int getPositionY();

  //character accessor methods
  virtual int getStrength();
  virtual int getDexterity();
  virtual int getConstitution();
  virtual int getIntelligence();
  virtual int getWisdom();
  virtual int getCharisma();
  //StrategyN* getStrategy();
  int armorModifier();
  int getAttacksPerRound();
  string getCharacterType();
  int* getAbilityScores();
  int getAbilityScore(int);
  int* getAttackBonus();
  int getDamageBonus();
  ItemContainer getBackPack();

  //decorator
  Item* unEquip(string);
  bool isEquiped(string);
  void printEquippedItems();
  Item* retrieveItem(string s);
  //combat
  void combat(Character*);

 protected:
  int currentHitPoints;
  int level = 1;
  int abilityScores[6];
  //int atkBonus;
  int attacksPerRound;
  int experience, gold;
  int* bonusAttack = new int (1);
  int armor;
  int positionX;
  int positionY;
 private:
  string characterType;
  ItemContainer backpack;

};
