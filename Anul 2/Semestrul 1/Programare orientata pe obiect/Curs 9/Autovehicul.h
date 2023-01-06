//
// Created by tony7 on 06/01/2023.
//
#pragma once

class Autovehicul

        {
        protected:
    char* marca;
    int capacitate;
    double putere;
    double masa;

        public:
            Autovehicul();
            Autovehicul(char* marca, int capacitate, double putere, double masa);
            ~Autovehicul();
            Autovehicul(const Autovehicul& ob);

            void setMarca(char* val);
            void setCapacitate(int val);
            void setPutere(double val);
            void setMasa(double val);

            char* getMarca();
            int getCapacitate();
            double getPutere();
            double getMasa();

            void afisare();
            virtual double calculImpozit ()=0;
            virtual double calculRovinieta()=0;
        };