const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_INGRAIN, MOVE_GRASS_WHISTLE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_AQUA_JET, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_POISON_JAB, MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_U_TURN},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_MOONBLAST, MOVE_HEAL_PULSE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_FLAIL, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_FEEBAS,
        .moves = {MOVE_FLAIL, MOVE_TICKLE, MOVE_DRAGON_BREATH, MOVE_CAPTIVATE},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_METAPOD,
        .moves = {MOVE_HARDEN, MOVE_BUG_BITE, MOVE_TACKLE, MOVE_STRING_SHOT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_HARDEN, MOVE_BUG_BITE, MOVE_POISON_STING, MOVE_STRING_SHOT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_SILCOON,
        .moves = {MOVE_HARDEN, MOVE_POISON_STING, MOVE_BUG_BITE, MOVE_STRING_SHOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_CASCOON,
        .moves = {MOVE_HARDEN, MOVE_POISON_STING, MOVE_BUG_BITE, MOVE_STRING_SHOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_IGGLYBUFF,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_WOOPER,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_HAZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_TYROGUE,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_BULK_UP, MOVE_FACADE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BUDEW] = {
        .species = SPECIES_BUDEW,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SPIKES, MOVE_TOXIC, MOVE_WORRY_SEED},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHINGLING] = {
        .species = SPECIES_CHINGLING,
        .moves = {MOVE_ECHOED_VOICE, MOVE_ASTONISH, MOVE_WISH, MOVE_HYPNOSIS},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BONSLY] = {
        .species = SPECIES_BONSLY,
        .moves = {MOVE_ROCK_TOMB, MOVE_FEINT_ATTACK, MOVE_SANDSTORM, MOVE_ROCK_POLISH},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MANTYKE] = {
        .species = SPECIES_MANTYKE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_CONFUSE_RAY, MOVE_AQUA_RING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MUNCHLAX] = {
        .species = SPECIES_MUNCHLAX,
        .moves = {MOVE_TACKLE, MOVE_LICK, MOVE_METRONOME, MOVE_RECYCLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_HAPPINY] = {
        .species = SPECIES_HAPPINY,
        .moves = {MOVE_DRAINING_KISS, MOVE_CHARM, MOVE_COPYCAT, MOVE_SWEET_KISS},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MIME_JR] = {
        .species = SPECIES_MIME_JR,
        .moves = {MOVE_PSYBEAM, MOVE_MIMIC, MOVE_ENCORE, MOVE_TRICK},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_RATTATA_ALOLA] = {
        .species = SPECIES_RATTATA_ALOLA,
        .moves = {MOVE_PURSUIT, MOVE_CUT, MOVE_TAUNT, MOVE_ME_FIRST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSHREW_ALOLA] = {
        .species = SPECIES_SANDSHREW_ALOLA,
        .moves = {MOVE_ICE_BALL, MOVE_GYRO_BALL, MOVE_ROLLOUT, MOVE_HAIL},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DIGLETT_ALOLA] = {
        .species = SPECIES_DIGLETT_ALOLA,
        .moves = {MOVE_BULLDOZE, MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEOWTH_ALOLA] = {
        .species = SPECIES_MEOWTH_ALOLA,
        .moves = {MOVE_ECHOED_VOICE, MOVE_ASSURANCE, MOVE_ASSIST, MOVE_SNATCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GEODUDE_ALOLA] = {
        .species = SPECIES_GEODUDE_ALOLA,
        .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_SCREECH, MOVE_CHARGE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GRIMER_ALOLA] = {
        .species = SPECIES_GRIMER_ALOLA,
        .moves = {MOVE_ACID_SPRAY, MOVE_SNARL, MOVE_GASTRO_ACID, MOVE_TOXIC},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PONYTA_GALAR] = {
        .species = SPECIES_PONYTA_GALAR,
        .moves = {MOVE_PSYBEAM, MOVE_FAIRY_WIND, MOVE_MIMIC, MOVE_HEAL_PULSE},
        .heldItem = ITEM_FAIRY_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SLOWPOKE_GALAR] = {
        .species = SPECIES_SLOWPOKE_GALAR,
        .moves = {MOVE_CONFUSION, MOVE_WATER_PULSE, MOVE_YAWN, MOVE_PSYCH_UP},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GROWLITHE_HISUI] = {
        .species = SPECIES_GROWLITHE_HISUI,
        .moves = {MOVE_FIRE_FANG, MOVE_ROCK_TOMB, MOVE_SNARL, MOVE_SWAGGER},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VOLTORB_HISUI] = {
        .species = SPECIES_VOLTORB_HISUI,
        .moves = {MOVE_SPARK, MOVE_NATURE_POWER, MOVE_SONIC_BOOM, MOVE_ROLLOUT},
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_SENTRET,
        .moves = {MOVE_QUICK_ATTACK, MOVE_BATON_PASS, MOVE_DEFENSE_CURL, MOVE_AMNESIA},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFFA,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SEEDOT,
        .moves = {MOVE_LEAFAGE, MOVE_BIDE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LOTAD,
        .moves = {MOVE_RAIN_DANCE, MOVE_BUBBLE_BEAM, MOVE_TEETER_DANCE, MOVE_MEGA_DRAIN},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_BITE, MOVE_COVET, MOVE_ROAR, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SILVER_WIND, MOVE_GRUDGE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_BULLET_PUNCH, MOVE_FORCE_PALM, MOVE_SMELLING_SALTS, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_WHISMUR,
        .moves = {MOVE_UPROAR, MOVE_FAKE_TEARS, MOVE_STOMP, MOVE_SCREECH},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_WORK_UP, MOVE_TRICK},
        .heldItem = ITEM_STICKY_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_POISON_FANG, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEPI,
        .moves = {MOVE_RETURN, MOVE_ENCORE, MOVE_WISH, MOVE_CHARM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_SPINARAK,
        .moves = {MOVE_PIN_MISSILE, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_TOXIC_THREAD},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MARILL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_HOPPIP,
        .moves = {MOVE_MEGA_DRAIN, MOVE_BOUNCE, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_INCINERATE, MOVE_ANCIENT_POWER, MOVE_YAWN, MOVE_CLEAR_SMOG},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_SWINUB,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDURE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_ICE_SHARD, MOVE_MACH_PUNCH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_WING_ATTACK, MOVE_FEATHER_DANCE, MOVE_MIRROR_MOVE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATTATA,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_WYNAUT,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SKITTY,
        .moves = {MOVE_SING, MOVE_WAKE_UP_SLAP, MOVE_CHARM, MOVE_COPYCAT},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_PURSUIT, MOVE_MIRROR_MOVE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_HOOTHOOT,
        .moves = {MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_ECHOED_VOICE, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_BULLDOZE, MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDYBA,
        .moves = {MOVE_SILVER_WIND, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_PSYBEAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_NINCADA,
        .moves = {MOVE_BIDE, MOVE_DIG, MOVE_TOXIC, MOVE_METAL_CLAW},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_SURSKIT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_MUD_SHOT, MOVE_STICKY_WEB},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_DISARMING_VOICE, MOVE_GYRO_BALL, MOVE_PLAY_NICE},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TAILLOW,
        .moves = {MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_WHIRLWIND, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_WINGULL,
        .moves = {MOVE_WATER_PULSE, MOVE_AIR_CUTTER, MOVE_QUICK_ATTACK, MOVE_MIST},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_HORN_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_FLATTER, MOVE_HELPING_HAND},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_KIRLIA,
        .moves = {MOVE_CONFUSION, MOVE_WILL_O_WISP, MOVE_DRAINING_KISS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FAIRY_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_MAREEP,
        .moves = {MOVE_SHOCK_WAVE, MOVE_TAKE_DOWN, MOVE_THUNDER_WAVE, MOVE_COTTON_SPORE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_FORCE_PALM, MOVE_FAKE_OUT, MOVE_CONFUSION, MOVE_PSYCH_UP},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_SLAKOTH,
        .moves = {MOVE_YAWN, MOVE_CHIP_AWAY, MOVE_ENCORE, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_SPORE, MOVE_FURY_CUTTER, MOVE_SLASH, MOVE_GRASSY_TERRAIN},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EKANS] = {
        .species = SPECIES_EKANS,
        .moves = {MOVE_POISON_STING, MOVE_PURSUIT, MOVE_GLARE, MOVE_COIL},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_METAL_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_BARBOACH,
        .moves = {MOVE_MUD_BOMB, MOVE_WHIRLPOOL, MOVE_SPARK, MOVE_AMNESIA},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_SCREECH, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_PINECO,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_TAKE_DOWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_BULLDOZE, MOVE_BITE, MOVE_SANDSTORM, MOVE_FURY_CUTTER},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_SPHEAL,
        .moves = {MOVE_ICE_BALL, MOVE_BRINE, MOVE_HAIL, MOVE_CURSE},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AGILITY, MOVE_AURORA_BEAM, MOVE_TWISTER},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_SHUPPET,
        .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_SNEAK, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_NIGHT_SHADE, MOVE_CURSE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_FLAME_BURST, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_RAZOR_FANG,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_HEX},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_ELECTRO_BALL, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_DRAINING_KISS},
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_BULLDOZE, MOVE_ROLLOUT, MOVE_SANDSTORM, MOVE_GYRO_BALL},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYPNOSIS, MOVE_MUD_SHOT, MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_BULLDOZE, MOVE_SMACK_DOWN, MOVE_ROCK_POLISH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_DRAGON_TAIL, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_HAZE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_SNUBBULL,
        .moves = {MOVE_BITE, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_REMORAID,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_LARVITAR,
        .moves = {MOVE_CHIP_AWAY, MOVE_ROCK_SLIDE, MOVE_PAYBACK, MOVE_CURSE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_BALTOY,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_MUD_SLAP, MOVE_COSMIC_POWER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_SNORUNT,
        .moves = {MOVE_ICY_WIND, MOVE_BITE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_BAGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_FIRE_FANG, MOVE_BITE, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_BELDUM,
        .moves = {MOVE_TAKE_DOWN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_GULPIN,
        .moves = {MOVE_SLUDGE, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ACID_ARMOR},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SIGNAL_BEAM, MOVE_STUN_SPORE, MOVE_POISON_FANG},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_MANKEY,
        .moves = {MOVE_KARATE_CHOP, MOVE_ACROBATICS, MOVE_FURY_SWIPES, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOW_SWEEP, MOVE_DUAL_CHOP, MOVE_SEISMIC_TOSS, MOVE_BULK_UP},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_CLAMP, MOVE_ICE_SHARD, MOVE_SUPERSONIC, MOVE_WITHDRAW},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_CONFUSION, MOVE_POWDER_SNOW, MOVE_SWEET_KISS, MOVE_FAKE_TEARS},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_NUMEL,
        .moves = {MOVE_FLAME_BURST, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_WILL_O_WISP},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_BITE, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_AQUA_JET, MOVE_DOUBLE_HIT, MOVE_TAUNT, MOVE_BUBBLE_BEAM},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_FIRE_FANG, MOVE_METAL_CLAW, MOVE_FLAME_BURST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_CYNDAQUIL,
        .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_WORK_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_MIMIC, MOVE_CHARGE_BEAM, MOVE_ENCORE, MOVE_PSYCHIC_TERRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODUO,
        .moves = {MOVE_DOUBLE_HIT, MOVE_PLUCK, MOVE_FEINT_ATTACK, MOVE_ACUPRESSURE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_HYPNOSIS, MOVE_HEX, MOVE_CLEAR_SMOG, MOVE_CURSE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_SWABLU,
        .moves = {MOVE_ECHOED_VOICE, MOVE_DISARMING_VOICE, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_TREECKO,
        .moves = {MOVE_LEAFAGE, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_LEECH_SEED},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_TORCHIC,
        .moves = {MOVE_FLAME_BURST, MOVE_QUICK_ATTACK, MOVE_PECK, MOVE_MIRROR_MOVE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_MUDKIP,
        .moves = {MOVE_WHIRLPOOL, MOVE_MUD_BOMB, MOVE_BIDE, MOVE_ROCK_THROW},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_GYRO_BALL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_TOTODILE,
        .moves = {MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE, MOVE_FLAIL},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_CUT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_CHIKORITA,
        .moves = {MOVE_SECRET_POWER, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_ACID, MOVE_TOXIC, MOVE_MEGA_DRAIN, MOVE_MOONLIGHT},
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_CONFUSION, MOVE_WATER_PULSE, MOVE_DISABLE, MOVE_AMNESIA},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_LOW_KICK, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATER_PULSE, MOVE_HORN_ATTACK, MOVE_AGILITY, MOVE_PECK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_OMINOUS_WIND, MOVE_CONFUSE_RAY, MOVE_WISH},
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_DRAINING_KISS, MOVE_ENCORE, MOVE_SING},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_MAGNET_BOMB, MOVE_METAL_SOUND, MOVE_MAGNET_RISE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SEEL,
        .moves = {MOVE_AURORA_BEAM, MOVE_AQUA_JET, MOVE_SMART_STRIKE, MOVE_AQUA_RING},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_MUD_BOMB, MOVE_ACID_ARMOR, MOVE_DISABLE},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KRABBY,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_METAL_CLAW, MOVE_ROCK_SMASH, MOVE_TICKLE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_CONFUSION, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_EEVEE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_FLAIL, MOVE_BATON_PASS},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_CONFUSION, MOVE_WAKE_UP_SLAP, MOVE_TRICK_ROOM, MOVE_HYPNOSIS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_ELECTRO_BALL, MOVE_EERIE_IMPULSE, MOVE_ROLLOUT, MOVE_CHARGE},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_CHINCHOU,
        .moves = {MOVE_SPARK, MOVE_BUBBLE_BEAM, MOVE_CHARGE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_TEDDIURSA,
        .moves = {MOVE_COVET, MOVE_FLING, MOVE_FEINT_ATTACK, MOVE_YAWN},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_PRESENT, MOVE_FROST_BREATH, MOVE_AURORA_VEIL, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_SNARL, MOVE_FIRE_FANG, MOVE_ROAR, MOVE_FIRE_SPIN},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_PHANPY,
        .moves = {MOVE_ROLLOUT, MOVE_COUNTER, MOVE_BULLDOZE, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_SPOINK,
        .moves = {MOVE_PSYBEAM, MOVE_GRASS_KNOT, MOVE_MAGIC_COAT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_ARON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_ROAR, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_HEAL_PULSE, MOVE_HEART_STAMP, MOVE_WATERFALL, MOVE_RAIN_DANCE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_TOXIC_SPIKES, MOVE_ACID_SPRAY, MOVE_WRAP},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACNEA,
        .moves = {MOVE_NEEDLE_ARM, MOVE_PIN_MISSILE, MOVE_COTTON_SPORE, MOVE_SPIKES},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_TOXIC, MOVE_TORMENT, MOVE_INFESTATION},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARYU,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PSYBEAM, MOVE_COSMIC_POWER, MOVE_REFLECT_TYPE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_SKIPLOOM,
        .moves = {MOVE_MEGA_DRAIN, MOVE_BOUNCE, MOVE_U_TURN, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_NUZLEAF,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_RAZOR_LEAF, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_VIBRAVA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_SCREECH, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_STEALTH_ROCK, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_BRINE, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_ICY_WIND},
        .heldItem = ITEM_DEEP_SEA_SCALE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_UTILITY_UMBRELLA,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_IRON_TAIL},
        .heldItem = ITEM_UTILITY_UMBRELLA,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_AERIAL_ACE, MOVE_AGILITY},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_BRINE, MOVE_ANCIENT_POWER, MOVE_MUD_SHOT, MOVE_TICKLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_AQUA_JET, MOVE_ROCK_SMASH, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_LILEEP,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ANORITH,
        .moves = {MOVE_AQUA_JET, MOVE_SMACK_DOWN, MOVE_FURY_CUTTER, MOVE_ROCK_SMASH},
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_AIPOM,
        .moves = {MOVE_FURY_SWIPES, MOVE_IRON_TAIL, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELEKID,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_ROLLING_KICK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_LOUDRED,
        .moves = {MOVE_ECHOED_VOICE, MOVE_EXTRASENSORY, MOVE_ICY_WIND, MOVE_HOWL},
        .heldItem = ITEM_METRONOME,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE, MOVE_ASSIST, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_STARF_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_POISON_FANG, MOVE_BITE, MOVE_BODY_SLAM, MOVE_FLATTER},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_POISON_JAB, MOVE_SMART_STRIKE, MOVE_DOUBLE_KICK, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_FLAAFFY,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGBY,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ROCK_SMASH, MOVE_IRON_TAIL, MOVE_SUBSTITUTE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_POWER_GEM, MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_ANCIENT_POWER, MOVE_BRINE, MOVE_MIRROR_COAT, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MUD_SHOT, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SAND_TOMB, MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_SILVER_WIND, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_CELL_BATTERY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_LUNGE, MOVE_ELECTROWEB, MOVE_SUCKER_PUNCH, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_YANMA,
        .moves = {MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_SCREECH, MOVE_U_TURN},
        .heldItem = ITEM_ROCK_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_BODY_SLAM, MOVE_ATTRACT, MOVE_COPYCAT, MOVE_FAKE_OUT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_POLLEN_PUFF, MOVE_AIR_SLASH, MOVE_STUN_SPORE, MOVE_ROOST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BEEDRILL_1] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_ACROBATICS, MOVE_POISON_JAB, MOVE_AGILITY},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEAUTIFLY_1] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_ELECTROWEB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUSTOX_1] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_INFESTATION, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_SMART_STRIKE, MOVE_MEGAHORN},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_LAVA_PLUME, MOVE_PSYCHIC, MOVE_BELCH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMBIPOM_1] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_FAKE_OUT, MOVE_FURY_SWIPES, MOVE_FLING, MOVE_THIEF},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_WATERFALL, MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK, MOVE_YAWN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_HYPER_FANG, MOVE_SUCKER_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ME_FIRST},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_1] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_AURORA_VEIL, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_1] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_ROCK_SMASH},
        .heldItem = ITEM_STEEL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_ALOLA_1] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_SNARL, MOVE_HYPER_VOICE, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRAVELER_ALOLA_1] = {
        .species = SPECIES_GRAVELER_ALOLA,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_MAGNET_RISE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RAPIDASH_GALAR_1] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_SMART_STRIKE, MOVE_HYPNOSIS},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_THRASH, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB, MOVE_COUNTER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_TOPSY_TURVY, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAWILE_1] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLAMETHROWER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_BULLET_SEED, MOVE_POISON_JAB, MOVE_LEECH_LIFE, MOVE_GASTRO_ACID},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_BULLDOZE, MOVE_ROCK_BLAST, MOVE_SELF_DESTRUCT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_DISCHARGE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_CHARGE_BEAM, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WATERFALL, MOVE_HEAVY_SLAM, MOVE_AVALANCHE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC_SPIKES, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_LUNGE, MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_U_TURN},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_TAILWIND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_REFLECT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_AIR_CUTTER, MOVE_SUNNY_DAY},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_AQUA_TAIL, MOVE_ICE_PUNCH, MOVE_ROCK_TOMB, MOVE_MIRROR_COAT},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_LEECH_LIFE, MOVE_BULLET_SEED, MOVE_CROSS_POISON, MOVE_SPORE},
        .heldItem = ITEM_ADRENALINE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_REVENGE, MOVE_DUAL_CHOP, MOVE_PAYBACK, MOVE_BULK_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_BULLET_SEED, MOVE_BODY_PRESS, MOVE_REFLECT, MOVE_LEECH_SEED},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_LAVA_PLUME, MOVE_EXTRASENSORY, MOVE_DISCHARGE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_DRAINING_KISS, MOVE_FUTURE_SIGHT, MOVE_WISH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_DISCHARGE, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT, MOVE_BATON_PASS},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWITCHEROO, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_LEAF_STORM},
        .heldItem = ITEM_GRASS_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAME_CHARGE, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAME_CHARGE, MOVE_BOUNCE, MOVE_LOW_KICK, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_COUNTER},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_PAYBACK, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_LIQUIDATION, MOVE_AVALANCHE, MOVE_ENCORE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_SUCKER_PUNCH, MOVE_QUICK_ATTACK, MOVE_IRON_TAIL},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_BUG_BUZZ, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_STUN_SPORE},
        .heldItem = ITEM_WATER_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_BODY_SLAM, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_ROOST},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_BREAKING_SWIPE, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_DRAGON_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_PLAY_ROUGH, MOVE_TAUNT},
        .heldItem = ITEM_DARK_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_THROAT_CHOP, MOVE_SEED_BOMB, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_ICE_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK, MOVE_MAGNET_RISE},
        .heldItem = ITEM_KASIB_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_HYPER_VOICE, MOVE_DRAINING_KISS, MOVE_FLAMETHROWER, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_FAIRY_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER, MOVE_HEAL_PULSE},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_SKY_UPPERCUT, MOVE_U_TURN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_POISON_JAB, MOVE_AQUA_TAIL, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_THROAT_CHOP, MOVE_ICE_SHARD, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_SHOCK_WAVE, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_U_TURN, MOVE_REVERSAL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_BODY_PRESS},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_LEAF_STORM, MOVE_WRING_OUT, MOVE_SHOCK_WAVE, MOVE_SPIKES},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_SUCKER_PUNCH, MOVE_AQUA_TAIL, MOVE_COIL},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_SCALD, MOVE_SIGNAL_BEAM, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH, MOVE_MAGIC_COAT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_RETURN, MOVE_SHADOW_CLAW, MOVE_ENCORE, MOVE_COUNTER},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYSHOCK, MOVE_FROST_BREATH, MOVE_MOONBLAST, MOVE_ROCK_POLISH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_FLAME_CHARGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_REFLECT},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYSHOCK, MOVE_ROOST, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_HEAL_PULSE, MOVE_SKILL_SWAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_WORRY_SEED, MOVE_TOXIC, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_POISON_FANG, MOVE_U_TURN, MOVE_CONFUSE_RAY, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THRASH, MOVE_U_TURN},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_JUMP_KICK, MOVE_BLAZE_KICK, MOVE_THROAT_CHOP, MOVE_BULK_UP},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH, MOVE_STONE_EDGE, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYSHOCK, MOVE_CHARGE_BEAM, MOVE_ENERGY_BALL, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_POWER_UP_PUNCH, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_KNOCK_OFF, MOVE_TRICK, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_X_SCISSOR, MOVE_ACROBATICS, MOVE_PROTECT, MOVE_BATON_PASS},
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_FANG, MOVE_AQUA_TAIL, MOVE_PSYCHIC_FANGS, MOVE_SCREECH},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_WILL_O_WISP, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_JUMP_KICK, MOVE_MEGAHORN, MOVE_HYPNOSIS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_COUNTER, MOVE_PAIN_SPLIT, MOVE_TOXIC},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_TAUNT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_UPROAR, MOVE_ROOST},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYSHOCK, MOVE_TEETER_DANCE, MOVE_FOCUS_BLAST, MOVE_MAGIC_COAT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_CURSE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_SUPERPOWER, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SPIKES},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_WATERFALL, MOVE_BULLET_SEED, MOVE_PAYBACK, MOVE_ROCK_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ROCK_TOMB, MOVE_SWAGGER},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_AQUA_RING, MOVE_BATON_PASS},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_AQUA_TAIL, MOVE_BODY_PRESS, MOVE_HEAD_SMASH, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_REST, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_AQUA_JET, MOVE_ROCK_SLIDE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WATER_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_WATERFALL, MOVE_SUPERPOWER, MOVE_THROAT_CHOP, MOVE_ICE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_U_TURN, MOVE_AERIAL_ACE, MOVE_ROCK_SMASH, MOVE_STEEL_WING},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_STORM_THROW, MOVE_X_SCISSOR, MOVE_KNOCK_OFF, MOVE_BULK_UP},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_LIQUIDATION, MOVE_ROCK_BLAST, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_RETURN, MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BEEDRILL_2] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_U_TURN, MOVE_DRILL_RUN, MOVE_FELL_STINGER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEAUTIFLY_2] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_AIR_SLASH, MOVE_TAILWIND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSTOX_2] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_TRICK, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HAMMER_ARM, MOVE_COUNTER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_HAMMER_ARM, MOVE_REFLECT, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AMBIPOM_2] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_FURY_SWIPES, MOVE_DUAL_CHOP, MOVE_ROCK_SMASH, MOVE_U_TURN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_FUTURE_SIGHT, MOVE_HYPNOSIS},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RATICATE_ALOLA_2] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SUPER_FANG, MOVE_THROAT_CHOP, MOVE_U_TURN, MOVE_TOPSY_TURVY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_2] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_BRICK_BREAK, MOVE_HAIL},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_2] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SANDSTORM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PERSIAN_ALOLA_2] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_SWIFT, MOVE_DARK_PULSE, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GRAVELER_ALOLA_2] = {
        .species = SPECIES_GRAVELER_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_VOLT_SWITCH, MOVE_SELF_DESTRUCT},
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RAPIDASH_GALAR_2] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PSYCHO_CUT, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_CRUNCH, MOVE_HAMMER_ARM, MOVE_AVALANCHE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_FOUL_PLAY, MOVE_CONFUSE_RAY, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAWILE_2] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_AQUA_TAIL, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_ME_FIRST},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HAMMER_ARM, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_SNORE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_TOXIC},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_BUG_BITE, MOVE_THUNDER_PUNCH, MOVE_ACROBATICS, MOVE_ROOST},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_ENCORE, MOVE_CONFUSE_RAY, MOVE_INFESTATION, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SPIKES, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FIRE_FANG, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_X_SCISSOR, MOVE_BULLET_SEED, MOVE_BRICK_BREAK, MOVE_SPORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_HEX, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_WRING_OUT, MOVE_LIGHT_SCREEN, MOVE_LEECH_SEED},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAME_CHARGE, MOVE_IRON_TAIL, MOVE_WILD_CHARGE, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MAGICAL_LEAF, MOVE_NASTY_PLOT, MOVE_BATON_PASS},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_TORMENT, MOVE_ICY_WIND},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_ENTRAINMENT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_DISCHARGE, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_WISH},
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_ROCK_SMASH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_MIRROR_MOVE, MOVE_BATON_PASS},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_OVERHEAT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_EXPLOSION},
        .heldItem = ITEM_ROCK_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BALL, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_HAIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_BODY_SLAM, MOVE_THROAT_CHOP, MOVE_U_TURN},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_CLAW, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_RETURN, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_STEALTH_ROCK, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SING, MOVE_DREAM_EATER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_REFLECT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_AQUA_JET, MOVE_POISON_JAB, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_LOW_KICK},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SURF, MOVE_GUNK_SHOT, MOVE_HURRICANE, MOVE_TAILWIND},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_INGRAIN, MOVE_LEECH_SEED},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GLARE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_DARK_PULSE, MOVE_THUNDERBOLT, MOVE_POWER_GEM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_SLASH, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LUMINOUS_MOSS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_LEECH_LIFE, MOVE_SANDSTORM},
        .heldItem = ITEM_ADRENALINE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_CHARGE_BEAM, MOVE_ATTRACT, MOVE_TOXIC, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_SMART_STRIKE, MOVE_THROAT_CHOP},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_SPEAR, MOVE_STEALTH_ROCK, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_LEECH_LIFE, MOVE_STEEL_WING, MOVE_TAILWIND},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_STOMPING_TANTRUM, MOVE_STONE_EDGE, MOVE_BULK_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_BATON_PASS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AVALANCHE, MOVE_COUNTER, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_SUCKER_PUNCH, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_GHOST_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_LEECH_LIFE, MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_RETURN, MOVE_SEED_BOMB, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE, MOVE_ROCK_SLIDE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_AIR_SLASH},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_MAGNET_RISE, MOVE_REFLECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_AIR_SLASH, MOVE_CONFUSE_RAY, MOVE_AQUA_RING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_FLAME_CHARGE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_BELCH, MOVE_ICE_BEAM, MOVE_GASTRO_ACID, MOVE_YAWN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH, MOVE_AVALANCHE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_STEEL_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_SNORE, MOVE_REST, MOVE_TOXIC},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_BODY_PRESS, MOVE_SOLAR_BEAM},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_TEETER_DANCE, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_DAZZLING_GLEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_SURF, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_ICE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_COIL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_DRAINING_KISS, MOVE_SURF, MOVE_PSYCHIC, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_FLAIL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_SUPERPOWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_WATERFALL, MOVE_HYPNOSIS, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_ACROBATICS, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_ENCORE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_ROCK_POLISH},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },//OPEN LEVEL MONS BEGIN
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROTOTILLER, MOVE_SLASH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GALLADE_1] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_BRICK_BREAK, MOVE_PSYCHO_CUT, MOVE_THROAT_CHOP, MOVE_WILL_O_WISP},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PROBOPASS_1] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_PAIN_SPLIT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_REFLECT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROSERADE_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_INGRAIN, MOVE_LEECH_SEED},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUSKNOIR_1] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_LEECH_LIFE, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PAYBACK, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FROSLASS_1] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LICKILICKY_1] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_RETURN, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_SCREECH},
        .heldItem = ITEM_NORMAL_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TANGROWTH_1] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_ENERGY_BALL, MOVE_WRING_OUT, MOVE_FOCUS_BLAST, MOVE_STUN_SPORE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_YANMEGA_1] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_DEFOG},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_SYNTHESIS, MOVE_SPIKES, MOVE_ROAR},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_BRINE, MOVE_WISH, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SYLVEON_1] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_DRAINING_KISS, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_GRASS_KNOT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PORYGONZ_1] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_PSYSHOCK, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_1] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROOST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISMAGIUS_1] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_PROTECT, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GLISCOR_1] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_U_TURN},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_1] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HAIL},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEAVILE_1] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_PUNISHMENT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_DARK_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_ALOLA_1] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_FREEZE_DRY, MOVE_DAZZLING_GLEAM, MOVE_CONFUSE_RAY, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICE_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOLEM_ALOLA_1] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_RETURN, MOVE_SUPERPOWER, MOVE_HEAVY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MUK_ALOLA_1] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_POISON_FANG, MOVE_ACID_ARMOR, MOVE_FOUL_PLAY, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_1] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_DRACO_METEOR, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_ALOLA_1] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLOWBRO_GALAR_1] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_PSYCHIC, MOVE_YAWN, MOVE_SKILL_SWAP},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_1] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_PSYSHOCK, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_1] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_HEAT_WAVE, MOVE_PAIN_SPLIT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_OUTRAGE, MOVE_STONE_EDGE, MOVE_WILD_CHARGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTRODE_HISUI_1] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_ENERGY_BALL, MOVE_DISCHARGE, MOVE_MIRROR_COAT, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_LOW_KICK, MOVE_POISON_JAB, MOVE_TOPSY_TURVY},
        .heldItem = ITEM_PROTECTIVE_PADS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_FLY, MOVE_DRILL_RUN, MOVE_MIRROR_MOVE, MOVE_ROOST},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BULK_UP},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_CALM_MIND, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_FORCE_PALM, MOVE_BULLET_SEED, MOVE_THUNDER_PUNCH, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC_SPIKES, MOVE_SEED_BOMB, MOVE_SPIKES},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_AIR_SLASH, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_STEEL_WING, MOVE_BRAVE_BIRD, MOVE_NIGHT_SLASH, MOVE_TAILWIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_DOUBLE_EDGE, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, MOVE_ROCK_SLIDE, MOVE_ENDEAVOR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_COSMIC_POWER, MOVE_SING, MOVE_REFLECT, MOVE_DRAINING_KISS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BULLET_PUNCH, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_DISCHARGE, MOVE_GRASS_KNOT, MOVE_LIGHT_SCREEN, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL, MOVE_PERISH_SONG},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_WILD_CHARGE, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_POLLEN_PUFF, MOVE_MOONLIGHT, MOVE_TEETER_DANCE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_WRING_OUT, MOVE_SPIKES},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_DISCHARGE, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_SUPERSONIC, MOVE_SURF},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_BLADE, MOVE_THROAT_CHOP, MOVE_SPIKES, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_FREEZE_DRY, MOVE_DARK_PULSE, MOVE_REFLECT, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_LEECH_SEED, MOVE_SCALD},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_HYPNOSIS, MOVE_FOCUS_PUNCH},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER, MOVE_HEAVY_SLAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_REFLECT, MOVE_CALM_MIND},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_DARK_PULSE, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_OUTRAGE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_SMART_STRIKE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_AMNESIA, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FACADE, MOVE_BODY_PRESS, MOVE_COUNTER, MOVE_MILK_DRINK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_MOONBLAST, MOVE_HEAT_WAVE, MOVE_ICE_BEAM},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_POISON_JAB, MOVE_SUPERPOWER, MOVE_AQUA_TAIL, MOVE_COUNTER},
        .heldItem = ITEM_SNOWBALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_ACID_ARMOR},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_IRON_HEAD, MOVE_AERIAL_ACE, MOVE_ROOST, MOVE_ROCK_SMASH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSALUNA_1] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HEADLONG_RUSH, MOVE_PLAY_ROUGH, MOVE_AVALANCHE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLEAVOR_1] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BUG_BITE, MOVE_PURSUIT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WYRDEER_1] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_JUMP_KICK, MOVE_BODY_SLAM, MOVE_ME_FIRST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_1] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_BURN_UP, MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_ATTRACT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE, MOVE_STONE_EDGE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_EXPLOSION},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_BRINE, MOVE_ICE_BEAM, MOVE_SUBSTITUTE, MOVE_NOBLE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LUMINOUS_MOSS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SLEEP_TALK, MOVE_INFESTATION, MOVE_WRAP, MOVE_REST},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SURF, MOVE_WRING_OUT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FIRE_FANG, MOVE_AERIAL_ACE, MOVE_AQUA_TAIL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_CHARGE_BEAM, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_DRAINING_KISS, MOVE_PSYSHOCK},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_ENERGY_BALL, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_SURF},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_DRAGON_CLAW, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_EARTH_POWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_LIGHT_SCREEN, MOVE_SIGNAL_BEAM, MOVE_YAWN},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_IRON_TAIL, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEAF_STORM, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_TOXIC},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_PSYCH_UP, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TORMENT, MOVE_TAUNT, MOVE_FOUL_PLAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATERFALL, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_BRICK_BREAK, MOVE_PROTECT, MOVE_BATON_PASS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HAIL, MOVE_LIQUIDATION, MOVE_EARTHQUAKE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THROAT_CHOP, MOVE_DRAIN_PUNCH, MOVE_LEECH_SEED},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_LAVA_PLUME, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_DISCHARGE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_ICE_BEAM, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_ACROBATICS, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_REST, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_TAUNT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_FRUSTRATION, MOVE_CRUNCH, MOVE_YAWN, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SCALD, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_HEAL_PULSE, MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_HYPNOSIS},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAME_CHARGE, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_METEOR_MASH, MOVE_STEALTH_ROCK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_NIGHT_SLASH, MOVE_HAMMER_ARM, MOVE_SLACK_OFF},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BULLDOZE, MOVE_HELPING_HAND},
        .heldItem = ITEM_WATER_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GALLADE_2] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PROBOPASS_2] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_CHARGE_BEAM, MOVE_FLASH_CANNON, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ROSERADE_2] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_SPIKES},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSKNOIR_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_HEX, MOVE_BRICK_BREAK, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FROSLASS_2] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_PUNCH, MOVE_WAKE_UP_SLAP, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LICKILICKY_2] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_MUDDY_WATER, MOVE_FLAMETHROWER, MOVE_SWAGGER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TANGROWTH_2] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_PRESS, MOVE_LEECH_SEED, MOVE_TOXIC},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ELECTIVIRE_2] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_YANMEGA_2] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_ENCORE, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PORYGONZ_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_2] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MISMAGIUS_2] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_HEX, MOVE_POWER_GEM, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLISCOR_2] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_SKY_UPPERCUT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUPERPOWER},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WEAVILE_2] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICE_PUNCH, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_HAIL},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_DISCHARGE, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_ELECTRIC_TERRAIN},
        .heldItem = ITEM_ELECTRIC_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_ALOLA_2] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLEM_ALOLA_2] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_ROCK_POLISH},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MUK_ALOLA_2] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_THROAT_CHOP, MOVE_FIRE_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_2] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_WOOD_HAMMER, MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_ALOLA_2] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLOWBRO_GALAR_2] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_SLACK_OFF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_GALAR_2] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_EERIE_SPELL, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_MAGIC_COAT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WEEZING_GALAR_2] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_EXPLOSION},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_OVERHEAT, MOVE_AGILITY},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTRODE_HISUI_2] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_CHARGE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_ROLLING_KICK, MOVE_AERIAL_ACE, MOVE_STONE_EDGE, MOVE_COUNTER},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_SKY_ATTACK, MOVE_DRILL_RUN, MOVE_RETURN, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_PAYBACK, MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BATON_PASS, MOVE_NASTY_PLOT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC},
        .heldItem = ITEM_GANLON_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_DRAIN_PUNCH, MOVE_SPORE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM, MOVE_POWER_TRICK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_ROOST, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_FOUL_PLAY, MOVE_CONFUSE_RAY, MOVE_TAILWIND},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_TRICK, MOVE_SOFT_BOILED},
        .heldItem = ITEM_IRON_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_REFLECT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_ZOOM_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_AVALANCHE, MOVE_AQUA_TAIL, MOVE_ENCORE, MOVE_MEGAHORN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SIGNAL_BEAM, MOVE_SNARL},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_LEECH_SEED, MOVE_STRENGTH_SAP, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_MAGNET_RISE, MOVE_SIGNAL_BEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_ICY_WIND},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_SYNTHESIS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_FOCUS_BLAST, MOVE_DREAM_EATER, MOVE_PSYSHOCK},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_HAMMER_ARM, MOVE_SUBSTITUTE, MOVE_STONE_EDGE, MOVE_GYRO_BALL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_AQUA_TAIL, MOVE_HAMMER_ARM},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_WILD_CHARGE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYSHOCK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_PLAY_ROUGH, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_TAILWIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_EARTH_POWER, MOVE_FLATTER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SEED_BOMB, MOVE_SPIKES},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_WATERFALL, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LUMINOUS_MOSS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_PAYBACK, MOVE_THUNDER_PUNCH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_POWER_GEM, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_BUG_BITE, MOVE_BATON_PASS},
        .heldItem = ITEM_ADRENALINE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_BULK_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSALUNA_2] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KLEAVOR_2] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WYRDEER_2] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_2] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_LAVA_PLUME, MOVE_DISCHARGE, MOVE_HEX, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_THUNDER_FANG},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_CHARGE_BEAM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_REST, MOVE_CURSE, MOVE_WATERFALL},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_EXTRASENSORY, MOVE_CALM_MIND, MOVE_SOLAR_BEAM},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_HEAD_SMASH, MOVE_EXPLOSION},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_WATERFALL},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_PSYCHIC_FANGS, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_MAGIC_COAT, MOVE_RECOVER},
        .heldItem = ITEM_GHOST_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_WOOD_HAMMER, MOVE_CURSE, MOVE_WORRY_SEED, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SCALD, MOVE_CONFUSE_RAY, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTH_POWER, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_ACID_ARMOR, MOVE_AQUA_RING, MOVE_BATON_PASS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_DISCHARGE, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_OVERHEAT, MOVE_STORED_POWER, MOVE_SHADOW_BALL, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEECH_SEED, MOVE_BODY_PRESS, MOVE_MAGIC_COAT, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_PAYBACK, MOVE_MEAN_LOOK, MOVE_MOONLIGHT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FLASH_CANNON, MOVE_SHELL_SMASH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_WATERFALL, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_AQUA_JET},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_HEAD_SMASH, MOVE_METAL_BURST, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_HIGH_JUMP_KICK, MOVE_BLAZE_KICK, MOVE_OVERHEAT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_AVALANCHE, MOVE_CURSE, MOVE_AQUA_TAIL},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_LEAF_STORM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_DISCHARGE, MOVE_FOCUS_BLAST, MOVE_OVERHEAT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SOAK},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_POISON_FANG, MOVE_LEECH_LIFE, MOVE_CONFUSE_RAY, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_AVALANCHE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_IRON_HEAD},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FIRE_FANG, MOVE_STEEL_WING, MOVE_ROOST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_PUNISHMENT, MOVE_YAWN, MOVE_SWAGGER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_GROUND_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_3] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUPERPOWER, MOVE_AQUA_TAIL, MOVE_ROCK_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GALLADE_3] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PROBOPASS_3] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_MAGIC_COAT, MOVE_STEALTH_ROCK, MOVE_PAIN_SPLIT, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MAGNEZONE_3] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_CHARGE_BEAM, MOVE_FLASH_CANNON, MOVE_SIGNAL_BEAM, MOVE_MAGNET_RISE},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROSERADE_3] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_SOLAR_BEAM, MOVE_EXTRASENSORY, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DUSKNOIR_3] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_AVALANCHE, MOVE_IRON_HEAD},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROSLASS_3] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_AURORA_VEIL, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LICKILICKY_3] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_BRICK_BREAK, MOVE_GYRO_BALL, MOVE_ME_FIRST, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TANGROWTH_3] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_POWER_WHIP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ELECTIVIRE_3] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMORTAR_3] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_CROSS_CHOP, MOVE_SUNNY_DAY},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_YANMEGA_3] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_3] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_TOPSY_TURVY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLACEON_3] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_BRINE, MOVE_HURRICANE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SYLVEON_3] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_TOGEKISS_3] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYSHOCK, MOVE_ANCIENT_POWER, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PORYGONZ_3] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HONCHKROW_3] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_STEEL_WING, MOVE_BRAVE_BIRD, MOVE_SUPERPOWER},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISMAGIUS_3] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_DAZZLING_GLEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLISCOR_3] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_KNOCK_OFF, MOVE_ROOST},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEAVILE_3] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_THROAT_CHOP, MOVE_FLING, MOVE_TAUNT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_ALOLA_3] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_3] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_BLIZZARD, MOVE_DRAINING_KISS, MOVE_DARK_PULSE, MOVE_AURORA_VEIL},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_ALOLA_3] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXPLOSION},
        .heldItem = ITEM_LUMINOUS_MOSS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MUK_ALOLA_3] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_PAYBACK, MOVE_STONE_EDGE, MOVE_EXPLOSION},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_3] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_LEECH_SEED, MOVE_REFLECT},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAROWAK_ALOLA_3] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_GALAR_3] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_POISON_JAB, MOVE_ZEN_HEADBUTT, MOVE_IRON_TAIL, MOVE_CURSE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWKING_GALAR_3] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_EERIE_SPELL, MOVE_VENOSHOCK, MOVE_SLACK_OFF, MOVE_TOXIC},
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WEEZING_GALAR_3] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_FLAMETHROWER, MOVE_TAUNT, MOVE_GASTRO_ACID},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_HISUI_3] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_CRUNCH},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTRODE_HISUI_3] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_CHARGE_BEAM, MOVE_ENERGY_BALL, MOVE_LIGHT_SCREEN, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_STEEL_WING, MOVE_ROOST},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_TAUNT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_JUMP_KICK, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYSHOCK, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_SIGNAL_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_ROCK_TOMB, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_SPORE},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_AQUA_TAIL, MOVE_AVALANCHE},
        .heldItem = ITEM_RINDO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_TRICK_ROOM},
        .heldItem = ITEM_UTILITY_UMBRELLA,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_STEEL_WING, MOVE_CURSE, MOVE_REST, MOVE_BRAVE_BIRD},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_3] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_STONE_EDGE, MOVE_FACADE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRAINING_KISS, MOVE_SURF},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_BRINE, MOVE_SIGNAL_BEAM, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_CHARGE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_LEAF_BLADE, MOVE_LEECH_LIFE, MOVE_POISON_JAB},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_MAGIC_COAT, MOVE_FOUL_PLAY},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_WORK_UP},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HEAT_WAVE, MOVE_SYNTHESIS},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_BLIZZARD, MOVE_DARK_PULSE, MOVE_SIGNAL_BEAM, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SNOWBALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_TRICK, MOVE_ENERGY_BALL, MOVE_PSYCHIC, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_GUNK_SHOT, MOVE_TOXIC_SPIKES, MOVE_DARK_PULSE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDER_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_IRON_HEAD},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SLACK_OFF},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_SWAGGER},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_SING, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_SKY_ATTACK},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_WRING_OUT, MOVE_ENERGY_BALL, MOVE_BRINE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_BUG_BITE, MOVE_AQUA_JET, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_MEGAHORN, MOVE_SMART_STRIKE, MOVE_FLARE_BLITZ},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ROCK_SMASH, MOVE_PURSUIT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSALUNA_3] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_SUPERPOWER, MOVE_THUNDER_PUNCH, MOVE_SEED_BOMB},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KLEAVOR_3] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_EDGE, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BUG_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WYRDEER_3] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_PSYCHIC_GEM,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_3] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_DISCHARGE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_OVERHEAT, MOVE_FOUL_PLAY, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_PASSHO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_ABSORB_BULB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_BLIZZARD, MOVE_HEAVY_SLAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_PSYSHOCK, MOVE_ATTRACT},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SUBSTITUTE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_POWER_TRICK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_HEAD_SMASH, MOVE_BODY_PRESS},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_THUNDER_FANG, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_CHARGE_BEAM, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CHARGE_BEAM, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_PSYSHOCK, MOVE_STUN_SPORE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_DRACO_METEOR, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_TICKLE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAME_CHARGE, MOVE_SUPERPOWER, MOVE_DIG, MOVE_WISH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_PETAL_BLIZZARD, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_WISH, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_SNATCH, MOVE_BATON_PASS},
        .heldItem = ITEM_APICOT_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_BLIZZARD, MOVE_DARK_PULSE},
        .heldItem = ITEM_BLUNDER_POLICY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_AQUA_TAIL, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_THUNDER_PUNCH, MOVE_AVALANCHE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_STONE_EDGE, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_YAWN},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_BULLET_SEED, MOVE_THUNDER_PUNCH, MOVE_X_SCISSOR, MOVE_ACROBATICS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_HEAT_WAVE, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_ROOST},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_BURN_UP, MOVE_HYPER_BEAM, MOVE_ENDURE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_CONFUSE_RAY, MOVE_ICE_SHARD},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_CROSS_POISON, MOVE_ZEN_HEADBUTT, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_COUNTER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_STONE_EDGE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_OUTRAGE, MOVE_WATERFALL, MOVE_DOUBLE_EDGE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_CHARGE_BEAM, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_SOFT_BOILED},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_MIRROR_COAT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_THUNDER_FANG, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_ROCK_SLIDE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AZUMARILL_4] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_AQUA_JET, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GALLADE_4] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PROBOPASS_4] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_BODY_PRESS, MOVE_SANDSTORM},
        .heldItem = ITEM_SMOOTH_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MAGNEZONE_4] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROSERADE_4] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSKNOIR_4] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_PHANTOM_FORCE, MOVE_BRICK_BREAK, MOVE_PAIN_SPLIT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_RHYPERIOR_4] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROSLASS_4] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LICKILICKY_4] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_ICE_PUNCH, MOVE_HAMMER_ARM, MOVE_ZEN_HEADBUTT, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TANGROWTH_4] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WRING_OUT, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ELECTIVIRE_4] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_WILD_CHARGE, MOVE_BRICK_BREAK, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAGMORTAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_LAVA_PLUME, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_YANMEGA_4] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_DETECT},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LEAFEON_4] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SOLAR_BLADE, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLACEON_4] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_AURORA_VEIL, MOVE_HAIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SYLVEON_4] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TOGEKISS_4] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PORYGONZ_4] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_DISCHARGE, MOVE_RECOVER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HONCHKROW_4] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_ROOST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MISMAGIUS_4] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLISCOR_4] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAMOSWINE_4] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_SHARD},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEAVILE_4] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICE_PUNCH, MOVE_NIGHT_SLASH, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FIGHTING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_RAICHU_ALOLA_4] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SURF},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NINETALES_ALOLA_4] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_FREEZE_DRY, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_HYPNOSIS},
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOLEM_ALOLA_4] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_ALOLA_4] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_CURSE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_4] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_TAIL, MOVE_SPIKES, MOVE_EXPLOSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MAROWAK_ALOLA_4] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_LOW_KICK, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SLOWBRO_GALAR_4] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_SURF, MOVE_FLAMETHROWER, MOVE_TRICK_ROOM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_GALAR_4] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_EERIE_SPELL, MOVE_GRASS_KNOT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WEEZING_GALAR_4] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ATTRACT, MOVE_OVERHEAT, MOVE_MISTY_EXPLOSION},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_HISUI_4] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_PLAY_ROUGH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTRODE_HISUI_4] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_ELECTRO_BALL, MOVE_GIGA_DRAIN, MOVE_REFLECT, MOVE_FOUL_PLAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TAILWIND, MOVE_STEEL_WING, MOVE_U_TURN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_LIGHT_SCREEN, MOVE_TEETER_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_BULK_UP, MOVE_ROCK_TOMB},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_HEAVY_SLAM, MOVE_PAIN_SPLIT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FIRE_PUNCH, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONTOP_4] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_KNOCK_OFF, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FAIRY_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRAINING_KISS, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SURF, MOVE_FROST_BREATH, MOVE_SIGNAL_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_THUNDER_WAVE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_DAZZLING_GLEAM, MOVE_SLEEP_POWDER, MOVE_SPIKES},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_RED_CARD,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_SURF, MOVE_ICE_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXPLOSION, MOVE_LEAF_STORM, MOVE_TAILWIND, MOVE_FAKE_OUT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_IRON_HEAD},
        .heldItem = ITEM_BABIRI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK_ROOM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_DESTINY_BOND, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_FIRE_PUNCH, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_FRUSTRATION, MOVE_SWAGGER, MOVE_ZEN_HEADBUTT, MOVE_STONE_EDGE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYSHOCK, MOVE_SCALD, MOVE_GRASS_KNOT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_WATER_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_NASTY_PLOT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_ICE_PUNCH, MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_MILK_DRINK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_COTTON_GUARD, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_IRON_TAIL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAME_CHARGE, MOVE_THROAT_CHOP, MOVE_WILD_CHARGE, MOVE_LOW_KICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_POISON_JAB, MOVE_SCREECH, MOVE_FIRE_PUNCH, MOVE_EXPLOSION},
        .heldItem = ITEM_POISON_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_DISCHARGE, MOVE_DRAGON_PULSE, MOVE_POWER_GEM, MOVE_TAIL_GLOW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_ACROBATICS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSALUNA_4] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KLEAVOR_4] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WYRDEER_4] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_HYPNOSIS, MOVE_CALM_MIND},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_4] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_ERUPTION, MOVE_SHADOW_BALL, MOVE_DISCHARGE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_DARK_PULSE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_SEED_BOMB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SNOWBALL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_SKILL_SWAP, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_AVALANCHE},
        .heldItem = ITEM_WACAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_BULLET_PUNCH, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_SANDSTORM, MOVE_INFESTATION, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_HEAD_SMASH, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_HEX},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_FANG},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_THUNDER_WAVE, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_ADRENALINE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLEEP_POWDER, MOVE_PSYSHOCK, MOVE_EXPLOSION},
        .heldItem = ITEM_GRASS_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SKILL_SWAP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_YACHE_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_REFLECT, MOVE_TOXIC, MOVE_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_REST},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_TOPSY_TURVY},
        .heldItem = ITEM_ELECTRIC_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAME_CHARGE, MOVE_OVERHEAT, MOVE_SUPERPOWER, MOVE_BATON_PASS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_LEECH_SEED, MOVE_SPIKES},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_MORNING_SUN, MOVE_SKILL_SWAP},
        .heldItem = ITEM_KASIB_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_MOONLIGHT, MOVE_FOUL_PLAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_WATERFALL, MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_BODY_PRESS},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SUPERPOWER, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_WATERFALL, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_OVERHEAT, MOVE_FOCUS_BLAST, MOVE_AIR_SLASH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_ATTRACT},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_HEAVY_SLAM, MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_RAZOR_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_SOFT_BOILED},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_SNARL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FIRE_FANG, MOVE_STONE_EDGE, MOVE_AQUA_TAIL, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_FROST_BREATH, MOVE_WATER_PULSE, MOVE_AURORA_VEIL, MOVE_HAIL},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_1] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_PSYSHOCK, MOVE_HURRICANE, MOVE_SHADOW_BALL, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_CHARGE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_GALAR_1] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_THROAT_CHOP},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_HURRICANE, MOVE_ANCIENT_POWER, MOVE_ROOST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_GALAR_1] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARTICUNO_GALAR_2] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_HURRICANE, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_THUNDER_WAVE, MOVE_HURRICANE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ZAPDOS_GALAR_2] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRILL_PECK, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_SKY_ATTACK, MOVE_U_TURN, MOVE_FLAME_CHARGE},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MOLTRES_GALAR_2] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_ANCIENT_POWER, MOVE_HYPER_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SIGNAL_BEAM, MOVE_SCALD},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_ROCK_SMASH, MOVE_STONE_EDGE, MOVE_OVERHEAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_TOXIC, MOVE_SNARL, MOVE_ICY_WIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDERBOLT, MOVE_HAIL, MOVE_BLIZZARD, MOVE_AURORA_VEIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_RECOVER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_SIGNAL_BEAM, MOVE_HURRICANE},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_3] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_AIR_SLASH, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_GALAR_3] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_HURRICANE, MOVE_REFLECT, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_GALAR_3] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXTRASENSORY, MOVE_SIGNAL_BEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_TAILWIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_DRACO_METEOR},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_AURORA_VEIL, MOVE_REST, MOVE_HAIL},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARTICUNO_GALAR_4] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_PSYSHOCK, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_TAILWIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DISCHARGE, MOVE_HEAT_WAVE, MOVE_HURRICANE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZAPDOS_GALAR_4] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_COUNTER},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_AIR_SLASH, MOVE_FIRE_SPIN, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_BINDING_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_GALAR_4] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_ROOST, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SNARL, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_BULLDOZE, MOVE_IRON_HEAD, MOVE_FLAME_CHARGE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_PULSE, MOVE_RECOVER, MOVE_REFLECT},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ROLE_PLAY},
        .heldItem = ITEM_PAYAPA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_STONE_EDGE, MOVE_ICE_PUNCH, MOVE_THROAT_CHOP},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_COUNTER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DRAINING_KISS},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP, MOVE_SKILL_SWAP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_EJECT_BUTTON,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_PSYSHOCK, MOVE_REFLECT_TYPE},
        .heldItem = ITEM_WATER_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_MEGAHORN, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_HAIL, MOVE_BLIZZARD},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_AVALANCHE, MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_PERISH_SONG, MOVE_REFLECT, MOVE_SING, MOVE_BODY_SLAM},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_YAWN, MOVE_SEED_BOMB},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_THUNDER_PUNCH, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRACO_METEOR},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_ROOST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_METEOR_MASH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_PSYCHIC, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_SCARY_FACE, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_HAMMER_ARM, MOVE_EARTHQUAKE, MOVE_SWAGGER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_FIRE_PUNCH, MOVE_STEALTH_ROCK, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_FLASH_CANNON},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_FLASH_CANNON, MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_TOXIC, MOVE_SWAGGER, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_SURF, MOVE_CHARGE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_TAILWIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SURF, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LUSTER_PURGE, MOVE_DRAGON_PULSE, MOVE_ENERGY_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_DRACO_METEOR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_DRACO_METEOR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH, MOVE_AQUA_TAIL, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_ROOST},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE, MOVE_SURF, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_AQUA_TAIL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_ICE_BEAM},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTH_POWER, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_WISE_GLASSES,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DARK_PULSE, MOVE_SURF, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_ROCK_POLISH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_IRON_HEAD, MOVE_AQUA_TAIL},
        .heldItem = ITEM_CHOPLE_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_FOUL_PLAY, MOVE_AVALANCHE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_AGILITY, MOVE_WATER_PULSE},
        .heldItem = ITEM_OCCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_ROCK_GEM,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_GALAR_5] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_PSYSHOCK, MOVE_AIR_SLASH, MOVE_HYPNOSIS, MOVE_DREAM_EATER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_6] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_HURRICANE, MOVE_SIGNAL_BEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DISCHARGE, MOVE_SIGNAL_BEAM, MOVE_ROOST, MOVE_HEAT_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_REFLECT, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ZAPDOS_GALAR_5] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_SUPERPOWER, MOVE_ACROBATICS, MOVE_U_TURN, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ZAPDOS_GALAR_6] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_KNOCK_OFF, MOVE_STEEL_WING},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_AIR_SLASH},
        .heldItem = ITEM_CHARTI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_BURN_UP, MOVE_HURRICANE, MOVE_FLAME_CHARGE, MOVE_STEEL_WING},
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_GALAR_5] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_TAUNT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MOLTRES_GALAR_6] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXTRASENSORY, MOVE_VOLT_SWITCH, MOVE_REFLECT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_ELECTROWEB, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SAFETY_GOGGLES,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_OVERHEAT, MOVE_BULLDOZE},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_WILL_O_WISP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST, MOVE_MIRROR_COAT},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    }
};
