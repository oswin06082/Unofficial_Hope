/*
---------------------------------------------------------------------------------------
This source file is part of SWG:ANH (Star Wars Galaxies - A New Hope - Server Emulator)

For more information, visit http://www.swganh.com

Copyright (c) 2006 - 2014 The SWG:ANH Team
---------------------------------------------------------------------------------------
Use of this source code is governed by the GPL v3 license that can be found
in the COPYING file or at http://www.gnu.org/licenses/gpl-3.0.html

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
---------------------------------------------------------------------------------------
*/
#ifndef SRC_ZONESERVER_MOODTYPES_H_
#define SRC_ZONESERVER_MOODTYPES_H_

/**
 * This Enum is used by spatial chat to indicate the mood of the speaker. This
 * generally results in changes in the resultant speach and also in the character's
 * mannerisms.
 */

enum MoodType :
uint16_t {
    kMoodNone = 0,
    kMoodAbsentminded,
    kMoodAmazed,
    kMoodAmuzed,
    kMoodAngry,
    kMoodApproving,
    kMoodBitter,
    kMoodBloodthirsty,
    kMoodBrave,
    kMoodCallous,
    kMoodCareful,
    kMoodCareless,
    kMoodCasual,
    kMoodClinical,
    kMoodCocky,
    kMoodCold,
    kMoodCompassionate,
    kMoodCondescending,
    kMoodConfident,
    kMoodConfused,
    kMoodContent,
    kMoodCourtly,
    kMoodCoy,
    kMoodCrude,
    kMoodCruel,
    kMoodCurious,
    kMoodCynical,
    kMoodDefensive,
    kMoodDepressed,
    kMoodDevious,
    kMoodDimwitted,
    kMoodDisappoints,
    kMoodDiscreet,
    kMoodDisgruntled,
    kMoodDisgusted,
    kMoodDismayed,
    kMoodDisoriented,
    kMoodDistracted,
    kMoodDoubtful,
    kMoodDramatic,
    kMoodDreamy,
    kMoodDrunk,
    kMoodEarnest,
    kMoodEsctatic,
    kMoodEmbarrassed,
    kMoodEmphatic,
    kMoodEncouraging,
    kMoodEnthusiastic,
    kMoodEvil,
    kMoodExasperated,
    kMoodExuberant,
    kMoodFanatical,
    kMoodForgive,
    kMoodFrustrated,
    kMoodGuilty,
    kMoodHappy,
    kMoodHonest,
    kMoodHopeful,
    kMoodHopeless,
    kMoodHumble,
    kMoodHysterical,
    kMoodImploring,
    kMoodIndifferent,
    kMoodIndignant,
    kMoodInterested,
    kMoodJealous,
    kMoodJoyful,
    kMoodLofty,
    kMoodLoud,
    kMoodLoving,
    kMoodLustful,
    kMoodMean,
    kMoodMischevious,
    kMoodNervous,
    kMoodNeutral,
    kMoodOffended,
    kMoodOptimistic,
    kMoodPedantic,
    kMoodPessimistic,
    kMoodPetulant,
    kMoodPhilosophical,
    kMoodPitying,
    kMoodPlayful,
    kMoodPolite,
    kMoodPompous,
    kMoodProud,
    kMoodProvocative,
    kMoodPuzzled,
    kMoodRegretful,
    kMoodRelieved,
    kMoodReluctant,
    kMoodResigned,
    kMoodRespectful,
    kMoodRomantic,
    kMoodRude,
    kMoodSad,
    kMoodSarcastic,
    kMoodScared,
    kMoodScolding,
    kMoodScornful,
    kMoodSerious,
    kMoodShameless,
    kMoodShocked,
    kMoodShy,
    kMoodSincere,
    kMoodSleepy,
    kMoodSly,
    kMoodSmug,
    kMoodSnobby,
    kMoodSorry,
    kMoodSpiteful,
    kMoodStubborn,
    kMoodSullen,
    kMoodSuspicious,
    kMoodTaunting,
    kMoodTerrified,
    kMoodThankful,
    kMoodThoughtful,
    kMoodTolerant,
    kMoodUncertain,
    kMoodUnhappy,
    kMoodUnwilling,
    kMoodWarm,
    kMoodWhiny,
    kMoodWicked,
    kMoodWistful,
    kMoodWorried,
    kMoodTired,
    kMoodExhausted,
    kMoodFriendly,
    kMoodTimid,
    kMoodLazy,
    kMoodSurprised,
    kMoodInnocent,
    kMoodWise,
    kMoodYouthful,
    kMoodAdventurous,
    kMoodAnnoyed,
    kMoodPerturbed,
    kMoodSedate,
    kMoodCalm,
    kMoodSuffering,
    kMoodHungry,
    kMoodThirsty,
    kMoodAlert,
    kMoodShifty,
    kMoodRelaxed,
    kMoodCrotchety,
    kMoodSurly,
    kMoodPainful,
    kMoodWounded,
    kMoodBubbly,
    kMoodHeroic,
    kMoodQuiet,
    kMoodRemorseful,
    kMoodGrumpy,
    kMoodLogical,
    kMoodEmotional,
    kMoodTroubled,
    kMoodPanicked,
    kMoodNice,
    kMoodCheerful,
    kMoodEmotionless,
    kMoodGloomy,
    kMoodAmbivalent,
    kMoodEnvious,
    kMoodVengeful,
    kMoodFearful,
    kMoodEnraged,
    kMoodSheepish,
    kMoodBelligerent,
    kMoodObnoxious,
    kMoodFastidious,
    kMoodSqueamish,
    kMoodDainty,
    kMoodDignified,
    kMoodHaughty,
    kMoodObscure,
    kMoodGoofy,
    kMoodSilly,
    kMoodDisdainful,
    kMoodContemptuous,
    kMoodDiplomatic,
    kMoodWary,
    kMoodMalevolent,
    kMoodHurried,
    kMoodPatient,
    kMoodFirm
};

#endif  // SRC_ZONESERVER_MOODTYPES_H_
