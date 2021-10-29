#include <string>
enum Materiel
{
    CARTON,
    BOUTEILLE,
    PLASTIQUE,
    METAL,
    BOIS,
    NOURRITURE,
    VEGETAL,
    PAPIER,
    STYROFOAM,
    INCONNU

};

inline std::string GetNameOfMaterial(int n)
{
    switch (n)
    {
    case CARTON:

        return "Carton";

    case BOUTEILLE:

        return "Bouteille";

    case PLASTIQUE:
        return "Plastique";

    case METAL:
        return "Metal";
    
    case BOIS:
        return "Bois";
    
    case VEGETAL:
        return "Vegetal";
    
    case STYROFOAM:
        return "Styromousse";
    
    default:

        return "Inconnu!";
    }
}