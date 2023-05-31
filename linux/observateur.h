//  Copyright (c) 2023 Antoine Tran Tan
//

#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

class observateur
{
public:
    virtual void actualiser(float temperature, float humidite, float pression) = 0;
};

class affichage_conditions : public observateur
{
public:
    void actualiser(float temperature, float humidite, float pression) override;
};

class affichage_previsions : public observateur
{
public:
    affichage_previsions();
    void actualiser(float temperature, float humidite, float pression) override;

private:
    float previous_pression;
};

class affichage_stats : public observateur
{
public:
    affichage_stats();
    void actualiser(float temperature, float humidite, float pression) override;

private:
    float minTemp, maxTemp, sumTemp;
    int num_readings;
};

#endif
