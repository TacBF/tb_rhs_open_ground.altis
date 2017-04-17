class TacBF
{
        class Supply
        {
                // Generates cargo IDs (More effecient broadcasting for these items + their ammo)
                staticWeapons[] = {"RHS_M2StaticMG_WD", "RHS_M2StaticMG_MiniTripod_D", "RHS_M252_D", "RHS_TOW_TriPod_D", "rhs_Igla_AA_pod_msv", "rhs_Kornet_9M133_2_msv", "rhsgref_ins_DSHKM", "rhsgref_ins_DSHKM_Mini_TriPod", "rhs_KORD_high_MSV", "rhs_KORD_MSV",  "rhs_2b14_82mm_msv", "rhs_SPG9M_MSV", "rhs_Metis_9k115_2_msv"};
                class CargoCollections
                {
                        class statics_west {
                                transportClear = 1;
                                cargo[] = {{"RHS_M2StaticMG_WD", 3, 9}, {"RHS_M2StaticMG_MiniTripod_D", 3, 9}, {"RHS_M252_D", 0, 0}, {"RHS_TOW_TriPod_D", 1, 4}, {"TB_Box_West_Mines_F", 4, 0}, {"RHS_M252_D", 1, 4}};
                        };
                        class statics_east {
                                transportClear = 1;
                                cargo[] = {{"rhs_KORD_MSV", 4, 12}, {"rhs_KORD_high_MSV", 4, 12}, {"rhs_SPG9M_MSV", 2, 6}, {"rhs_Kornet_9M133_2_msv", 1, 4}, {"TB_Box_East_Mines_F", 4, 0}, {"rhs_2b14_82mm_msv", 1, 4}};
                        };
                        class statics_res {
                                transportClear = 1;
                                cargo[] = {{"rhsgref_ins_DSHKM_Mini_TriPod", 6, 12}, {"rhs_SPG9M_MSV", 2, 4}, {"RHS_ZU23_MSV", 0, 6}, {"TB_Box_East_Mines_F", 4, 0}, {"rhs_2b14_82mm_msv", 1, 4}};
                        };
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_D", 2, 4}, {"RHS_M252_D", 0, 0}};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"rhsgref_ins_DSHKM", 2, 4}, {"rhs_2b14_82mm_msv", 0, 0}};
			};
                };
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				mass = 1750; 
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				mass = 1750; 
			};
		};
 
    };
};