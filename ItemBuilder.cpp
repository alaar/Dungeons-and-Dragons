#include "ItemBuilder.h"


ItemBuilder::ItemBuilder() {
}


ItemBuilder::~ItemBuilder() {

}

void RandomBuilder::buildType() {
  // Random seed
  random_device rd;
  // Initialize Mersenne Twister pseudo-random number generator
  mt19937 gen(rd());
  // Generate pseudo-random numbers
  // uniformly distributed in range (0, 6)
  uniform_int_distribution<> rand(0, 6);
  int i = rand(gen);
  switch (i) {
  case 0:
    item->setType("helmet");
    break;
  case 1:
    item->setType("armor");
    break;
  case 2:
    item->setType("shield");
    break;
  case 3:
    item->setType("ring");
    break;
  case 4:
    item->setType("belt");
    break;
  case 5:
    item->setType("boots");
    break;
  case 6:
    item->setType("weapon");
    break;
  }
}

void HelmetBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForHelmet();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void ArmorBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForArmor();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void ShieldBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForShield();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void RingBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForRing();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void BeltBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForBelt();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void BootBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForBoots();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void WeaponBuilder::buildEnhancement() {
  EnhancementBuilder* eb = new RandomEnhancementBuilderForWeapon();
  eb->buildType();
  eb->buildBonus();
  item->setInfluences(*eb->getEnhancement());
}

void RandomBuilder::buildEnhancement() {
  string item_type = item->getType();

  if (item_type.compare("helmet") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForHelmet();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("armor") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForArmor();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("shield") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForShield();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("ring") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForRing();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("belt") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForBelt();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("boots") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForBoots();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  } else if (item_type.compare("weapon") == 0) {
    EnhancementBuilder* eb = new RandomEnhancementBuilderForWeapon();
    eb->buildType();
    eb->buildBonus();
    item->setInfluences(*eb->getEnhancement());
  }
}
