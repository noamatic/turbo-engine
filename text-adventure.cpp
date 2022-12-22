#include <iostream>
#include <stdlib.h>

int main() {
  int choice1;
  int choice2a;
  int choice2b;
  int choice3a;
  int choice3b;
  int choice3c;
  int choice4a;
  int choice4b;
  int choice4c;
  int choice5a;
  int choice5b;

  //Beginning
    std::cout << "====================\n";
    std::cout << "Showdown in the Goblin Fight Pit\n";
    std::cout << "====================\n";
    std::cout << "You are pulled from your prison by your goblin captors and dragged through a lond dark hallway. You're brought into a brightly lit room filled with the sound of monstrous cheers. As your eyes adjust, you realize you've been brought into an arena, and standing across from you is a very angry troll. Weapons are strewn about the arena floor, and 10 foot high walls surround you in a neat circle. Above the walls are row after row of seats where more goblins cheer and laugh at you, placing bets amongst themselves as to who will win. In the center of them is their king, a goblin you've come to know as Gresh the Impaler. You turn to question the ones who led you here, but they've already left, and the gate they led you through has closed shut. Gresh rises above the rest of the crowd, and raises a hand. In an instant, all noise ceases, and he fixes his wicked gaze on you. \"Combatants!\" he calls, \"For month's you've toiled under our rule! Today though, you have a chance to rid yourselves of us! Fight for your freedom!\" With that a loud horn rings through the arena, kicking off the fight as the crowd erupts once again with cheers. What will you do?\n";
    std::cout << "\n";
    std::cout << "1) Stay and fight the troll\n";
    std::cout << "2) Try and escape the pit\n";
    do {
    std::cout << "\n";
    std::cout << "Choice: ";
    std::cin >> choice1;
    } while (choice1 < 1 || choice1 >2);

   //choice 1 read
   if (choice1 == 1){
     std::cout << "\n";
     std::cout << "Looking at the hungry crowd, and the locked gates behind you, you decide you have no option but to stay and fight. What is your strategy for this battle?\n";
     std::cout << "\n";
     std::cout << "1) Grab a weapon and prepare to defend yourself\n";
     std::cout << "2) Charge the troll and try to catch it off guard\n";
     do {
     std::cout << "\n";
     std::cout << "Choice: ";
     std::cin >> choice2a;
     } while (choice2a < 1 || choice2a > 3);
   }
   else if (choice1 == 2){
     std::cout << "\n";
     std::cout << "Seeing the massive troll standing across from you, you know any fight you have will be incredibly one sided, so you instead begin searching for a way to escape. What's your exit strategy?\n";
     std::cout << "\n";
     std::cout << "1) Climb out of the arena\n";
     std::cout << "2) Go back through the gate you came in through\n";
     do {
     std::cout << "\n";
     std::cout << "Choice: ";
     std::cin >> choice2b;
     } while (choice2b < 1 || choice2b > 2);
   }
 
    //choice2a read
    if (choice2a == 1){
      std::cout << "\n";
      std::cout << "You scoop up a spear and ready yourself. The troll comes at you, hurling fists the size of boulders your way. You manage to just barely dodge each blow, using the blade of the spear to keep the troll at a safe distance. With each punch, the troll grows more tired. As his movements grow slower and slower, you spot your opening. What will you do with it?\n";
      std::cout << "\n";
      std::cout << "1) Go for the throat\n";
      std::cout << "2) Go for the legs\n";
      do {
      std::cout << "\n";
      std::cout << "Choice: ";
      std::cin >> choice3a;
      } while (choice3a < 1 || choice3a > 2);
    }
    else if (choice2a == 2){
       std::cout << "\n";
       std::cout << "You charge the troll, hoping to get in a few good hits before it knows what's happening. Before you make contact though, it's massive hands wrap around, you hoisting you off your feet. The troll brings you down hard over it's knee, and you feel your back break with a sickening crack. You wail in pain as you lay on the ground, trying to get movement back into your legs. The last thing you see is the trolls foot as it comes down, crushing you beneath it.\n";
       std::cout << "\n";
       std::cout << "You died! Better luck next time!";
      }

    //choice2b read
    if (choice2b == 1){
      std::cout << "\n";
      std::cout << "You spy a couple of loose bricks that would make great handholds, and leap over to them, before quickly scaling up the wall like a spider. You pull yousrself up over the top, only to find a group of angry goblins waiting for you. What will you do?";
      std::cout << "\n";
      std::cout << "1) Try to fight them\n";
      std::cout << "2) Try to make a break for it\n";
      std::cout << "3) Try to reason with them\n";
      do {
      std::cout << "\n";
      std::cout << "Choice: ";
      std::cin >> choice3b;
      } while (choice3b < 1 || choice3b > 3);
    }
    else if (choice2b == 2){
      std::cout << "\n";
      std::cout << "You turn back to the gate, trying to contort you body to fit through it's gaps in anyway possible, but to no avail. You here the troll let out a roar behind you, and spin around just in time to see it charging toward you. What will you do?\n";
      std::cout << "\n";
      std::cout << "1) Try to jump out of the way/n";
      std::cout << "2) Stand your ground/n";
      do {
      std::cout << "\n";
      std::cout << "Choice: ";
      std::cin >> choice3c;
      } while (choice3c < 1 || choice3c > 2);
    }
   
      //Choice3a read
      if (choice3a == 1){
        std::cout << "\n";
        std::cout << "You thrust your spear up to troll's throat, trying to score the killing blow. Something awakens in the troll though, as it's massive hand shoots up, catching the spear and snapping it like a twig. You're stuck looking at your broken spear in shock, unable to react as the troll grabs you around the throat with it's other hand, squeezing tight. You gasp for air as your vision starts to blur. The last thing you hear is the roar of the crowd, as your vision goes dark, and the last breath is squeezed out of your body.\n";
        std::cout << "\n";
        std::cout << "You died! Better luck next time!";
      }
      else if (choice3a == 2){
        std::cout << "\n";
        std::cout << "You side step another wild blow from the troll. In the same motion, you slash your spear across the back of the troll's knees. It wails in pain as it topples over, sprawling out on it's stomach. This is your chance! How will you finish the fight?\n";
        std::cout << "\n";
        std::cout << "1) Kill the troll\n";
        std::cout << "2) Spare the troll\n";
        do {
        std::cout << "\n";
        std::cout << "Choice: ";
        std::cin >> choice4a;
        } while (choice4a < 1 || choice4a > 2);
      }

      //choice3b
      if (choice3b == 1){
        std::cout << "\n";
        std::cout << "You stand your ground, ready to take on the horde of angry goblins as they rush you. The sheer number of them proves much to powerful though, as they slam into you like a giant wave, sending you toppling back into the arena, and piling on top of you. For a moment, the world is black as you are stuck under a mass of wriggling goblins. Your vivsion becomes clear though as the troll flings them off the top of you, and stands over you, rage in his eyes. You have just enough time to scream as he slams his fist down into your chest. You feel your ribs cracks and puncture your lungs and heart as you gasp your last breaths, before the world once again fades to black.\n";
        std::cout << "\n";
        std::cout << "You died! Better luck next time!\n";
      }
      else if (choice3b == 2){
        std::cout << "\n";
        std::cout << "You quickly dart towards the nearest entrance to the pit. A goblin lunges after you, grabbing you around the ankles. How will you deal with the goblin?\n";
        std::cout << "\n";
        std::cout << "1) Throw him off\n";
        std::cout << "2) Try to run with the goblin hanging on\n";
        do {
        std::cout << "\n";
        std::cout << "Choose: ";
        std::cin >> choice4b;
        } while (choice4b < 1 || choice4b > 2);
      }
      else if (choice3b == 3){
        std::cout << "\n";
        std::cout << "You plead for the goblins to come to their senses and help you escape. Your pleas fall on deaf ears though, as the goblins lust for blood seems to far outweigh any empathy they might have. They lunge at you, overwhelming you and tearing you limb from limb as your last moments are speant screaming in pain.\n";
        std::cout << "\n";
        std::cout << "You died! Better luck next time!";
      }

      //choice3c read
      if (choice3c == 1){
        std::cout << "\n";
        std::cout << "You jump out of the way just in time as the troll crashes into the gate, sending it crashing to the ground as he goes down with it. This provides a new opening! What will you do with it?\n";
        std::cout << "\n";
        std::cout << "1) Make a run for it\n";
        std::cout << "2) Try to finish of the troll\n";
        do {
        std::cout << "\n";
        std::cout << "Choice: ";
        std::cin >> choice4c;
        } while (choice4c < 1 || choice4c > 2);
      }
      else if (choice3c == 2){
        std::cout << "\n";
        std::cout << "You stand your ground, ready to take the troll head on! You quickly realize this is a mistake as it gets bigger and bigger with each stride, before slamming into you. You're crushed between him and the gate as he slams into it, sending it crashing to the ground and falling on top of you, leaving your body nearly flat.\n";
        std::cout << "\n";
        std::cout << "You died! Better luck next time!\n"; 
      }
      
        //Choice4a read
        if (choice4a == 1){
          std::cout << "\n";
          std::cout << "You leap into the air, and as you come down you jam the spear hard into the troll's back. It gasps in pain as the spear finds it's mark and blood begins pooling beneath it. It wriggles around, trying to knock you off to no effect, until its movements slow, and then stop all together as it breathing ceases. The crowd lets out a monstrous cheer, as you pull the spear from the creature's back and step off of it. Gresh raises his hand once more, and once more all the goblins go silent. \"Very impressive, pirsoner!\" he calls, \"You've proven yourself a mighty warrior on this day! As promised, you will be freed. That is... if you can escape your now rabid fans!\" he laughs wickedly as the goblins begin climbing over one another, and piling into the arena, their weapons drawn. What will you do?\n";
          std::cout << "\n";
          std::cout << "1) Try to fend off the goblins\n";
          std::cout << "2) Try to run away\n";
          std::cout << "3) Try to go for Gresh\n";
          do {
          std::cout << "\n";
          std::cout << "Choice: ";
          std::cin >> choice5a;
          } while (choice5a < 1 || choice5a > 3);
        }
        else if (choice4a == 2){
          std::cout << "\n";
          std::cout << "You raise your spear to finish the troll off but can't bring yourself to do it. This creature is just as much a prisoner as you are, and it wouldn't be right to take its life for the sake of your own. Instead you plant your spear into the ground, as a show of defiance to the goblin king and his hoard. The crowd boos loudly, till once again Gresh raises his hands. \"It seems like our prisoners aren't willing to cooperate,\" he explains, \"Have no fear though, my people! You will have your bloodshed! And better yet, you will earn it yourselves. Attack!\" At his word the goblins begin descending from the stands, leaping into the arena and rushing to attack you. Before the first wave can make it to you though, the troll pops up, and takes them all out with one swipe of his massive hand. He looks down at you and nods, before continuing to defend you from the goblins. What will you do now that you have a newfound ally?\n";
          std::cout << "\n";
          std::cout << "1) Fight off the goblins together\n";
          std::cout << "2) Try to escape together\n";
          std::cout << "3) Leave the troll to fight while you escape on your own\n";
          do {
          std::cout << "\n";
          std::cout << "Choice: ";
          std::cin >> choice5b;
          } while (choice5b < 1 || choice5b > 3);
        }

        //choice4b read
        if (choice4b == 1){
          std::cout << "\n";
          std::cout << "You reach down and grab the goblin, who's suprisingly light. With all your might you hurl, him backwards, sending him crashing into the rest of the goblins. They fall over like dominos, giving you the perfect opening to dart out of the exit. You make your way through the goblin's keep and out the doors into the forest. You're free!\n";
          std::cout << "\n";
          std::cout << "Congratulations! You've escaped the goblins' keep! But I wonder what would have happened had you chosen a different path...\n";
        }
        else if (choice4b == 2){
          std::cout << "\n";
          std::cout << "You try to continue running, but the goblin proves to much of a hinderance. You make it a mere few steps before you topple to the ground. You have just enough time to roll onto your back before the rest of the horde piles on top you, tearing at you with their bare hands. Your last moments of life are speant screaming in terror as your flesh is picked clean from your bones.\n";
          std::cout << "\n";
          std::cout << "You died! Better luck next time!\n";
        }
        
        //choice4c read
        if (choice4c == 1){
          std::cout << "\n";
          std::cout << "You run down the hallway you were brought from. In the distance you hear the sound of the goblin hoard rushing after you, but you have too good a head start. You make your way through the keep with ease, and escape out into the forest. You're free!\n";
          std::cout << "\n";
          std::cout << "Congratulations! You escaped the goblin keep! But I wonder what would have happened had you chosen another path...\n";
        }
        else if (choice4c == 2){
          std::cout << "\n";
          std::cout << "This is the only chance you'll have to win the fight! You jump on the troll's back and try to wrap you arms around its neck in an attempt to choke it out. You quickly realize it's neck is much to thick for you to do so though. The troll quickly recovers, rising to it's feet. You have no time to react before it leaps into the air and falls backwards. You're crushed as all of its weight comes crashing down on top of you like a boulder, without any time to do as much as even scream before the last of your life is extinguished from you./n";
          std::cout << "\n";
          std::cout << "You died! Better luck next time!\n";
        }

          //Choice5a read
          if (choice5a == 1){
            std::cout << "\n";
            std::cout << "You try your best to defend yourself, even taking out a good handful of goblins as you do. But their numbers prove to great and they quickly overwhelm you. As they pile on top of you, the last thing you see is Gresh laughing with glee, before a blade slides across your throat. The blood falls from your throat, as you dissapear under a pile of goblins.\n";
            std::cout << "\n";
            std::cout << "You died! Better luck next time!\n";
          }
          else if (choice5a == 2){
            std::cout << "\n";
            std::cout << "You quickly realize the numbers are not in your favor, and try to climb out of the pit. You just make it to the top, when a pair of hands grab you around the ankles. Your quickly yanked back down, as goblins pile on top of you, tearing at you with their bare hands. You scream out in pain, as your flesh is picked clean from your bones, and the last thing you hear is Gresh's wicked laugh.\n";
            std::cout << "\n";
            std::cout << "You died! Better luck next time!\n";
          }
          else if (choice5a == 3){
            std::cout << "\n";
            std::cout << "Anger boils up within you as the goblins descend into the arena, and you begin looking for a way up to Gresh to get your revenge. Every path seems blocked though. Then you remember the spear in your hand. You pick it up, and aim carefully before heaving it with all your might. It runs through Gresh's stomach, pinning him to the wall. All the goblins stop in their place, as they look up at him. He looks down at the spear sticking out of him, before looking up at you in horror for one last minute, before his eyes close and his head falls over limp. All the goblins slowly turn to you, and then all at once charge. You brace yourself for attacks but instead are hoisted up on their shoulders as they chant \" New King! New King!\" You? The new king of the goblins? Not how you expected things to go... but could prove very interesting.\n";
            std::cout << "\n";
            std::cout << "Congratulations! You're the new king of the goblins! But I wonder how things could have went had you followed a different path...\n";
          }

          //Choice5b read
          if (choice5b == 1){
            std::cout << "\n";
            std::cout << "You take up your spear and together with troll, fight the goblins. You manage to fend of the first two waves, but the troll is still hurt from your battle. It eventually becomes to much and the two of you are overun by the goblin hoards. The last glimpse you get is of each other as you're both pulled limb from limb by the blood thirsty goblins.\n";
          std::cout << "\n";
          std::cout << "You died! Better luck next time!";
        }
        else if (choice5b == 2){
          std::cout << "\n";
          std::cout << "You hop up on the troll's back, wrapping your arms over it's shoulders. You point to the gates you were brought in through, and it nods before charging head first. It makes contact, breaking the gate down as together you charge down the hall. The goblins persue you closely for a time, but eventually begin tripping over one another and falling behind as you race toward the keep's exit. You eventually find it, and with anoterh charge, burst through the doors of the keep and back out to the rest of the world. Free at last!\n";
          std::cout << "\n";
          std::cout << "Congratulations! You and your new troll friend managed to escape the goblin keep! But what could have been had you followed a different path?\n";
        }
        else if (choice5b == 3){
          std::cout << "\n";
          std::cout << "With the goblins distracted by the troll, you see your chance to make an escape. You quickly scale the wall and make for the exit. You look back once more, just in time to see the troll as he is overwhelmed and cries out in pain. You have no time to worry about him though, as you sprint out of the arena and to the doors of the goblin keep. You burst out of them and back into the wider world. Free at last!\n";
          std::cout << "\n";
          std::cout << "Congratulations! You've escaped the goblin keep! But I wonder what would have happened had you taken a different path...\n";
        }
}