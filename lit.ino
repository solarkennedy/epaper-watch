void print_minute(int minute) {
  long option = 0;
  switch (minute) {

    // Codegen for 00:00 for 26 quotations:
    case 0:
      option = random(0, 26);
      Serial.print(F("26 options for 00:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:00 - As midnight was striking bronze blows upon the dusky air, Dorian Gray, dressed commonly, and with a muffler wrapped round his throat, crept quietly out of his house. - , The Picture of Dorian Gray"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As TIMESTRING was");
                // display.setCursor(5, 17);
      // display.println("striking bronze blows upon the dusky");
                // display.setCursor(5, 29);
      // display.println("air, Dorian Gray, dressed commonly,");
                // display.setCursor(5, 41);
      // display.println("and with a muffler wrapped round his");
                // display.setCursor(20, 5);
      // display.println("midnight");
                // display.setCursor(11, 192);
      // display.println("- The Picture of Dorian Gray");
          return;
        case 1:
          Serial.println(F("00:00 - But wait till I tell you, he said. \"We had a midnight lunch too after all the jollification and when we sallied forth it was blue o'clock the morning after the night before\" - James Joyce, Ulysses "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("But wait till I tell you, he said.");
                // display.setCursor(5, 17);
      // display.println("\"We had a TIMESTRING lunch");
                // display.setCursor(5, 29);
      // display.println("too after all the jollification and");
                // display.setCursor(5, 41);
      // display.println("when we sallied forth it was blue");
                // display.setCursor(5, 53);
      // display.println("o'clock the morning after the night");
                // display.setCursor(40, 17);
      // display.println("midnight");
                // display.setCursor(46, 192);
      // display.println("- James Joyce, Ulysses ");
          return;
        case 2:
          Serial.println(F("00:00 - Midnight, you said. What is midnight to the young? And suddenly a festive blaze was flung Across five cedar trunks, snow patches showed, And a patrol car on our bumpy road Came to a crunching stop. Retake, retake! - , Pale Fire"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Midnight, you said. What is");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING to the");
                // display.setCursor(5, 29);
      // display.println("young? And suddenly a festive blaze");
                // display.setCursor(5, 41);
      // display.println("was flung Across five cedar trunks,");
                // display.setCursor(5, 53);
      // display.println("snow patches showed, And a patrol car");
                // display.setCursor(5, 65);
      // display.println("on our bumpy road Came to a");
                // display.setCursor(5, 17);
      // display.println("midnight");
                // display.setCursor(130, 192);
      // display.println("- Pale Fire");
          return;
        case 3:
          Serial.println(F("00:00 - fill the bulky ledger with cryptic remarks like 'Patrolled perimeter 12.00 pm, No Incident' - , A Squatter's Tale"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("fill the bulky ledger with");
                // display.setCursor(5, 17);
      // display.println("cryptic remarks like 'Patrolled");
                // display.setCursor(5, 29);
      // display.println("perimeter TIMESTRING, No");
                // display.setCursor(15, 29);
      // display.println("12.00 pm");
                // display.setCursor(74, 192);
      // display.println("- A Squatter's Tale");
          return;
        case 4:
          Serial.println(F("00:00 - 'Tis the year's midnight, and it is the day's, Lucy's, who scarce seven hours herself unmasks; The sun is spent, and now his flasks Send forth light squibs, no constant rays; - , Nocturnal on St Lucy's Day"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Tis the year's");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and it is the day's, Lucy's, who");
                // display.setCursor(5, 29);
      // display.println("scarce seven hours herself unmasks;");
                // display.setCursor(5, 41);
      // display.println("The sun is spent, and now his flasks");
                // display.setCursor(5, 53);
      // display.println("Send forth light squibs, no constant");
                // display.setCursor(99, 5);
      // display.println("midnight");
                // display.setCursor(11, 192);
      // display.println("- Nocturnal on St Lucy's Day");
          return;
        case 5:
          Serial.println(F("00:00 - At midnight his wife and daughter might still be bustling about, preparing holiday delicacies in the kitchen, straightening up the house, or perhaps getting their kimonos ready or arranging flowers. - , Beauty and Sadness"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING his wife");
                // display.setCursor(5, 17);
      // display.println("and daughter might still be");
                // display.setCursor(5, 29);
      // display.println("bustling about, preparing holiday");
                // display.setCursor(5, 41);
      // display.println("delicacies in the kitchen, straightening");
                // display.setCursor(5, 53);
      // display.println("up the house, or perhaps getting");
                // display.setCursor(5, 65);
      // display.println("their kimonos ready or arranging");
                // display.setCursor(20, 5);
      // display.println("midnight");
                // display.setCursor(67, 192);
      // display.println("- Beauty and Sadness");
          return;
        case 6:
          Serial.println(F("00:00 - Bernardo: 'Tis now struck twelve; get thee to bed, Francisco. - Shakespeare, Hamlet "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Bernardo: 'Tis now struck");
                // display.setCursor(163, 5);
      // display.println("twelve");
                // display.setCursor(53, 192);
      // display.println("- Shakespeare, Hamlet ");
          return;
        case 7:
          Serial.println(F("00:00 - Big Ben had once again struck midnight. The time outside still corresponded to that registered by the stopped gilt clock, inside. Inside and outside matched exactly, but both were badly wrong. H'm. - , Nights At The Circus"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Big Ben had once again struck");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING. The time");
                // display.setCursor(5, 29);
      // display.println("outside still corresponded to that");
                // display.setCursor(5, 41);
      // display.println("registered by the stopped gilt clock,");
                // display.setCursor(5, 53);
      // display.println("inside. Inside and outside matched");
                // display.setCursor(5, 17);
      // display.println("midnight");
                // display.setCursor(53, 192);
      // display.println("- Nights At The Circus");
          return;
        case 8:
          Serial.println(F("00:00 - It told me to write the report. Does this mean I am freer now than I was? I do not know. I shall learn. Then I went back into the house and wrote, It is midnight. The rain is beating on the windows. It was not midnight. It was not raining. - Samuel Beckett, Molloy "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It told me to write the report.");
                // display.setCursor(5, 17);
      // display.println("Does this mean I am freer now than I");
                // display.setCursor(5, 29);
      // display.println("was? I do not know. I shall learn.");
                // display.setCursor(5, 41);
      // display.println("Then I went back into the house and");
                // display.setCursor(5, 53);
      // display.println("wrote, It is TIMESTRING. The");
                // display.setCursor(5, 65);
      // display.println("rain is beating on the windows. It was");
                // display.setCursor(5, 77);
      // display.println("not TIMESTRING. It was not");
                // display.setCursor(9, 77);
      // display.println("midnight");
                // display.setCursor(32, 192);
      // display.println("- Samuel Beckett, Molloy ");
          return;
        case 9:
          Serial.println(F("00:00 - Cartridges not allowed after 0000h., to encourage sleep. - , Infinite Jest"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Cartridges not allowed after");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, to encourage");
                // display.setCursor(5, 17);
      // display.println("0000h.");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 10:
          Serial.println(F("00:00 - Francisco. You come most carefully upon your hour. Bernardo. 'Tis now struck twelve. Get thee to bed, Francisco. - William Shakespeare, Hamlet"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Francisco. You come most");
                // display.setCursor(5, 17);
      // display.println("carefully upon your hour. Bernardo. 'Tis");
                // display.setCursor(5, 29);
      // display.println("now struck TIMESTRING. Get");
                // display.setCursor(52, 29);
      // display.println("twelve");
                // display.setCursor(4, 192);
      // display.println("- William Shakespeare, Hamlet");
          return;
        case 11:
          Serial.println(F("00:00 - Gately can hear the horns and raised voices and u-turn squeals way down below on Wash. That indicate it's around 0000h., the switching hour. - , Infinite Jest"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Gately can hear the horns and");
                // display.setCursor(5, 17);
      // display.println("raised voices and u-turn squeals way");
                // display.setCursor(5, 29);
      // display.println("down below on Wash. That indicate");
                // display.setCursor(5, 41);
      // display.println("it's around TIMESTRING., the");
                // display.setCursor(53, 41);
      // display.println("0000h");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 12:
          Serial.println(F("00:00 - Hamlet: What hour now? Horatio: I think it lacks of twelve. Marcellus: No, it is struck. - William Shakespeare, Hamlet"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Hamlet: What hour now? Horatio:");
                // display.setCursor(5, 17);
      // display.println("I think it lacks of");
                // display.setCursor(109, 17);
      // display.println("twelve");
                // display.setCursor(4, 192);
      // display.println("- William Shakespeare, Hamlet");
          return;
        case 13:
          Serial.println(F("00:00 - He is certain he heard footsteps: they come nearer, and then die away. The ray of light beneath his door is extinguished. It is midnight; some one has turned out the gas; the last servant has gone to bed, and he must lie all night in agony with no one to bring him any help. - Marcel Proust, Swann's Way "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He is certain he heard");
                // display.setCursor(5, 17);
      // display.println("footsteps: they come nearer, and then die");
                // display.setCursor(5, 29);
      // display.println("away. The ray of light beneath his");
                // display.setCursor(5, 41);
      // display.println("door is extinguished. It is");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING; some one has turned out the gas;");
                // display.setCursor(5, 65);
      // display.println("the last servant has gone to bed, and");
                // display.setCursor(5, 77);
      // display.println("he must lie all night in agony with");
                // display.setCursor(147, 41);
      // display.println("midnight");
                // display.setCursor(4, 192);
      // display.println("- Marcel Proust, Swann's Way ");
          return;
        case 14:
          Serial.println(F("00:00 - I am conceived to the chimes of midnight on the clock on the mantelpiece in the room across the hall. The clock once belonged to my great-grandmother (a woman called Alice) and its tired chime counts me into the world. - Kate Atkinson, "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I am conceived to the chimes of");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING on the clock");
                // display.setCursor(5, 29);
      // display.println("on the mantelpiece in the room");
                // display.setCursor(5, 41);
      // display.println("across the hall. The clock once");
                // display.setCursor(5, 53);
      // display.println("belonged to my great-grandmother (a");
                // display.setCursor(5, 65);
      // display.println("woman called Alice) and its tired");
                // display.setCursor(5, 17);
      // display.println("midnight");
                // display.setCursor(102, 192);
      // display.println("- Kate Atkinson");
          return;
        case 15:
          Serial.println(F("00:00 - 'Myself!' she gasped, 'and the clock is striking twelve! It's true, then! that's dreadful!' - , Wuthering Heights"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Myself!' she gasped, 'and the");
                // display.setCursor(5, 17);
      // display.println("clock is striking TIMESTRING!");
                // display.setCursor(83, 17);
      // display.println("twelve");
                // display.setCursor(74, 192);
      // display.println("- Wuthering Heights");
          return;
        case 16:
          Serial.println(F("00:00 - I was born in the city of Bombay ... On the stroke of midnight, as a matter of fact. - , Midnight's Children"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I was born in the city of Bombay");
                // display.setCursor(5, 17);
      // display.println("... On the stroke of");
                // display.setCursor(104, 17);
      // display.println("midnight");
                // display.setCursor(60, 192);
      // display.println("- Midnight's Children");
          return;
        case 17:
          Serial.println(F("00:00 - It is midnight. The rain is beating on the windows. I am calm. All is sleeping. Nevertheless I get up and go to my desk. I can't sleep. ... - Samuel Beckett, Molloy "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It is TIMESTRING. The");
                // display.setCursor(5, 17);
      // display.println("rain is beating on the windows. I am");
                // display.setCursor(5, 29);
      // display.println("calm. All is sleeping. Nevertheless I");
                // display.setCursor(5, 41);
      // display.println("get up and go to my desk. I can't");
                // display.setCursor(35, 5);
      // display.println("midnight");
                // display.setCursor(32, 192);
      // display.println("- Samuel Beckett, Molloy ");
          return;
        case 18:
          Serial.println(F("00:00 - It was nearing midnight and the Prime Minister was sitting alone in his office, reading a long memo - JK Rowling, Harry Potter"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was nearing");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING and the Prime Minister was");
                // display.setCursor(5, 29);
      // display.println("sitting alone in his office, reading a");
                // display.setCursor(92, 5);
      // display.println("midnight");
                // display.setCursor(25, 192);
      // display.println("- JK Rowling, Harry Potter");
          return;
        case 19:
          Serial.println(F("00:00 - Midnight had come upon the crowded city. The palace, the night-cellar, the jail, the madhouse; the chambers of birth and death, of health and sickness; the rigid face of the corpse and the calm sleep of the child - midnight was upon them all. - , Oliver Twist"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Midnight had come upon the");
                // display.setCursor(5, 17);
      // display.println("crowded city. The palace, the");
                // display.setCursor(5, 29);
      // display.println("night-cellar, the jail, the madhouse; the");
                // display.setCursor(5, 41);
      // display.println("chambers of birth and death, of health");
                // display.setCursor(5, 53);
      // display.println("and sickness; the rigid face of the");
                // display.setCursor(5, 65);
      // display.println("corpse and the calm sleep of the child -");
                // display.setCursor(5, 77);
      // display.println("TIMESTRING was upon");
                // display.setCursor(5, 77);
      // display.println("midnight");
                // display.setCursor(109, 192);
      // display.println("- Oliver Twist");
          return;
        case 20:
          Serial.println(F("00:00 - Midnight is approaching, and while the peak of activity has passed, the basal metabolism that maintains life continues undiminished, producing the basso continuo of the city's moan, a monotonous sound that neither rises or falls but is pregnant with foreboding. - Murakami, After Dark "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING is");
                // display.setCursor(5, 17);
      // display.println("approaching, and while the peak of activity");
                // display.setCursor(5, 29);
      // display.println("has passed, the basal metabolism");
                // display.setCursor(5, 41);
      // display.println("that maintains life continues");
                // display.setCursor(5, 53);
      // display.println("undiminished, producing the basso continuo");
                // display.setCursor(5, 65);
      // display.println("of the city's moan, a monotonous");
                // display.setCursor(5, 77);
      // display.println("sound that neither rises or falls but");
                // display.setCursor(5, 5);
      // display.println("Midnight");
                // display.setCursor(46, 192);
      // display.println("- Murakami, After Dark ");
          return;
        case 21:
          Serial.println(F("00:00 - Once upon a midnight dreary, while I pondered weak and weary, Over many a quaint and curious volume of forgotten lore - Edgar Allan Poe, The Raven"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Once upon a TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("dreary, while I pondered weak and");
                // display.setCursor(5, 29);
      // display.println("weary, Over many a quaint and curious");
                // display.setCursor(71, 5);
      // display.println("midnight");
                // display.setCursor(11, 192);
      // display.println("- Edgar Allan Poe, The Raven");
          return;
        case 22:
          Serial.println(F("00:00 - The clock striketh twelve O it strikes, it strikes! Now body, turn to air, Or Lucifer will bear thee quick to hell. O soul, be changed into little water drops, And fall into the ocean, ne'er to be found. My God, my God, look not so fierce on me! - , Dr Faustus"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The clock striketh");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING O it strikes, it strikes! Now");
                // display.setCursor(5, 29);
      // display.println("body, turn to air, Or Lucifer will");
                // display.setCursor(5, 41);
      // display.println("bear thee quick to hell. O soul, be");
                // display.setCursor(5, 53);
      // display.println("changed into little water drops, And");
                // display.setCursor(5, 65);
      // display.println("fall into the ocean, ne'er to be");
                // display.setCursor(5, 77);
      // display.println("found. My God, my God, look not so");
                // display.setCursor(120, 5);
      // display.println("twelve");
                // display.setCursor(123, 192);
      // display.println("- Dr Faustus");
          return;
        case 23:
          Serial.println(F("00:00 - ...leaning forwards, ruminated until midnight upon both sides of the question. - Laurence Sterne, "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("...leaning forwards, ruminated");
                // display.setCursor(5, 17);
      // display.println("until TIMESTRING upon both");
                // display.setCursor(11, 17);
      // display.println("midnight");
                // display.setCursor(88, 192);
      // display.println("- Laurence Sterne");
          return;
        case 24:
          Serial.println(F("00:00 - To begin my life with the beginning of my life, I record that I was born (as I have been informed an believe) on a Friday, at twelve o'clock at night. It was remarked that the clock began to strike, and I began to cry, simultaneously. - , David Copperfield"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("To begin my life with the");
                // display.setCursor(5, 17);
      // display.println("beginning of my life, I record that I was");
                // display.setCursor(5, 29);
      // display.println("born (as I have been informed an");
                // display.setCursor(5, 41);
      // display.println("believe) on a Friday, at");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING at night. It was remarked that");
                // display.setCursor(5, 65);
      // display.println("the clock began to strike, and I");
                // display.setCursor(102, 41);
      // display.println("twelve o'clock");
                // display.setCursor(74, 192);
      // display.println("- David Copperfield");
          return;
        case 25:
          Serial.println(F("00:00 - We have heard the chimes at midnight. - , Henry IV"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("We have heard the chimes at");
                // display.setCursor(5, 17);
      // display.println("midnight");
                // display.setCursor(137, 192);
      // display.println("- Henry IV");
          return;
      } // end switch (option)

    // Codegen for 00:01 for 1 quotations:
    case 1:
      Serial.println(F("Only one option for 00:01:"));
    Serial.println(F("00:01 - With the appointed execution time of one minute past midnight just seconds away, I knocked on the metal door twice. The lock turned and the door swiftly swung open. - , Death at Midnight"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("With the appointed execution");
          // display.setCursor(5, 17);
      // display.println("time of");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING just seconds away, I knocked on");
          // display.setCursor(5, 41);
      // display.println("the metal door twice. The lock");
          // display.setCursor(5, 53);
      // display.println("turned and the door swiftly swung");
          // display.setCursor(25, 17);
      // display.println("one minute past midnight");
          // display.setCursor(74, 192);
      // display.println("- Death at Midnight");
      return;

    // Codegen for 00:02 for 1 quotations:
    case 2:
      Serial.println(F("Only one option for 00:02:"));
    Serial.println(F("00:02 - Two minutes past midnight. With me in the lead the fourteen other men of Teams Yellow, White and Red moved out of the clearing and separated for points along the wall where they would cross over into the grounds. - , Night of the Krait"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. With me in the lead the fourteen");
          // display.setCursor(5, 29);
      // display.println("other men of Teams Yellow, White and");
          // display.setCursor(5, 41);
      // display.println("Red moved out of the clearing and");
          // display.setCursor(5, 53);
      // display.println("separated for points along the wall where");
          // display.setCursor(5, 65);
      // display.println("they would cross over into the");
          // display.setCursor(5, 5);
      // display.println("Two minutes past midnight");
          // display.setCursor(67, 192);
      // display.println("- Night of the Krait");
      return;

    // Codegen for 00:03 for 3 quotations:
    case 3:
      option = random(0, 3);
      Serial.print(F("3 options for 00:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:03 - It was after twelve o'clock when Easton came home. Ruth recognised his footsteps before he reached the house, and her heart seemed to stop beating when she heard the clang of the gate, as it closed after he had passed through. - Robert Tressell, "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING when Easton came home. Ruth");
                // display.setCursor(5, 29);
      // display.println("recognised his footsteps before he");
                // display.setCursor(5, 41);
      // display.println("reached the house, and her heart seemed");
                // display.setCursor(5, 53);
      // display.println("to stop beating when she heard the");
                // display.setCursor(5, 65);
      // display.println("clang of the gate, as it closed after");
                // display.setCursor(42, 5);
      // display.println("after twelve o'clock");
                // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
          return;
        case 1:
          Serial.println(F("00:03 - It was just three minutes past midnight when I last saw Archer Harrison alive. I remember, because I said it was two minutes past and he looked at his watch and said it was three minutes past. - , Since Ibsen"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was just");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING when I last saw Archer Harrison");
                // display.setCursor(5, 41);
      // display.println("alive. I remember, because I said it");
                // display.setCursor(5, 53);
      // display.println("was two minutes past and he looked at");
                // display.setCursor(5, 65);
      // display.println("his watch and said it was three");
                // display.setCursor(5, 17);
      // display.println("three minutes past midnight");
                // display.setCursor(116, 192);
      // display.println("- Since Ibsen");
          return;
        case 2:
          Serial.println(F("00:03 - ...then a snapping of tension. I glanced at my watch. Three minutes after midnight. I was breathing normally and my pen moved freely across the page. - , The Historian"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("...then a snapping of tension. I");
                // display.setCursor(5, 17);
      // display.println("glanced at my watch.");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING I was breathing normally and my");
                // display.setCursor(5, 29);
      // display.println("Three minutes after midnight.");
                // display.setCursor(102, 192);
      // display.println("- The Historian");
          return;
      } // end switch (option)

    // Codegen for 00:04 for 1 quotations:
    case 4:
      Serial.println(F("Only one option for 00:04:"));
    Serial.println(F("00:04 - At four minutes past midnight, January 22, Admiral Lowry's armada of more than 250 ships reached the transport area off Anzio. The sea was calm, the night was black. - Fred Sheehan, Anzio"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, January 22, Admiral Lowry's");
          // display.setCursor(5, 29);
      // display.println("armada of more than 250 ships reached");
          // display.setCursor(5, 41);
      // display.println("the transport area off Anzio. The");
          // display.setCursor(20, 5);
      // display.println("four minutes past midnight");
          // display.setCursor(60, 192);
      // display.println("- Fred Sheehan, Anzio");
      return;

    // Codegen for 00:05 for 1 quotations:
    case 5:
      Serial.println(F("Only one option for 00:05:"));
    Serial.println(F("00:05 - E.M. Security, normally so scrupulous with their fucking trucks at 0005h., is nowhere around, lending weight to yet another cliché. If you asked Gately what he was feeling right this second he'd have no idea. - , Infinite Jest"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("E.M. Security, normally so");
          // display.setCursor(5, 17);
      // display.println("scrupulous with their fucking trucks at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING., is nowhere");
          // display.setCursor(5, 41);
      // display.println("around, lending weight to yet another");
          // display.setCursor(5, 53);
      // display.println("cliché. If you asked Gately what he was");
          // display.setCursor(5, 65);
      // display.println("feeling right this second he'd have no");
          // display.setCursor(5, 29);
      // display.println("0005h");
          // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
      return;

    // Codegen for 00:06 for 1 quotations:
    case 6:
      Serial.println(F("Only one option for 00:06:"));
    Serial.println(F("00:06 - At six minutes past midnight, death relieved the sufferer. - , West of Hell's Fringe"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(20, 5);
      // display.println("six minutes past midnight");
          // display.setCursor(46, 192);
      // display.println("- West of Hell's Fringe");
      return;

    // Codegen for 00:07 for 1 quotations:
    case 7:
      Serial.println(F("Only one option for 00:07:"));
    Serial.println(F("00:07 - It was seven minutes after midnight. The dog was lying on the grass in the middle of the lawn in front of Mrs Shears' house. Its eyes were closed. - , Dog in the Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. The dog was lying on the grass");
          // display.setCursor(5, 41);
      // display.println("in the middle of the lawn in front of");
          // display.setCursor(5, 53);
      // display.println("Mrs Shears' house. Its eyes were");
          // display.setCursor(5, 17);
      // display.println("seven minutes after midnight");
          // display.setCursor(46, 192);
      // display.println("- Dog in the Night-Time");
      return;

    // Codegen for 00:08 for 1 quotations:
    case 8:
      Serial.println(F("Only one option for 00:08:"));
    Serial.println(F("00:08 - Hour of the night! exclaimed the priest; \"it is day, not night, and the hour is eight past midnight!\" - , The Brigantine"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Hour of the night! exclaimed the");
          // display.setCursor(5, 17);
      // display.println("priest; \"it is day, not night, and the");
          // display.setCursor(5, 29);
      // display.println("hour is");
          // display.setCursor(25, 29);
      // display.println("eight past midnight");
          // display.setCursor(95, 192);
      // display.println("- The Brigantine");
      return;

    // Codegen for 00:09 for 1 quotations:
    case 9:
      Serial.println(F("Only one option for 00:09:"));
    Serial.println(F("00:09 - At 12.09am on 18 October, the cavalcade had reached the Karsaz Bridge, still ten kilometres from her destination. - , The Bhutto Murder Trail"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING on 18");
          // display.setCursor(5, 17);
      // display.println("October, the cavalcade had reached the");
          // display.setCursor(5, 29);
      // display.println("Karsaz Bridge, still ten kilometres");
          // display.setCursor(20, 5);
      // display.println("12.09am");
          // display.setCursor(32, 192);
      // display.println("- The Bhutto Murder Trail");
      return;

    // Codegen for 00:10 for 1 quotations:
    case 10:
      Serial.println(F("Only one option for 00:10:"));
    Serial.println(F("00:10 - It was at ten minutes past midnight. Three police cars, Alsations and a black maria arrive at the farmhouse. The farmer clad only in a jock-strap, refused them entry. - Jonathan Barrow, The Queue"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was at");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. Three police cars, Alsations");
          // display.setCursor(5, 41);
      // display.println("and a black maria arrive at the");
          // display.setCursor(5, 53);
      // display.println("farmhouse. The farmer clad only in a");
          // display.setCursor(5, 17);
      // display.println("ten minutes past midnight");
          // display.setCursor(11, 192);
      // display.println("- Jonathan Barrow, The Queue");
      return;

    // Codegen for 00:11 for 1 quotations:
    case 11:
      Serial.println(F("Only one option for 00:11:"));
    Serial.println(F("00:11 - The first incendiaries to hit St Thomas's Hospital had splattered Riddell House at eleven minutes past midnight, from where a few hours earlier the Archbishop of Canterbury had given 'an inspiring address'. - , The Longest Night"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The first incendiaries to hit St");
          // display.setCursor(5, 17);
      // display.println("Thomas's Hospital had splattered");
          // display.setCursor(5, 29);
      // display.println("Riddell House at");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING, from where a few hours earlier");
          // display.setCursor(5, 65);
      // display.println("the Archbishop of Canterbury had");
          // display.setCursor(5, 41);
      // display.println("eleven minutes past midnight");
          // display.setCursor(74, 192);
      // display.println("- The Longest Night");
      return;

    // Codegen for 00:12 for 2 quotations:
    case 12:
      option = random(0, 2);
      Serial.print(F("2 options for 00:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:12 - Clock time is 0 Hours, 12 Minutes, 0 Seconds. Twenty three minutes later, they have their first sight of Venus. - , Mason & Dixon"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Clock time is");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, 0 Seconds. Twenty three");
                // display.setCursor(5, 41);
      // display.println("minutes later, they have their first");
                // display.setCursor(5, 17);
      // display.println("0 Hours, 12 Minutes");
                // display.setCursor(102, 192);
      // display.println("- Mason & Dixon");
          return;
        case 1:
          Serial.println(F("00:12 - It was twelve minutes past midnight when mother and daughter saw the first lightning strike. It hit the main barn with such force the ground trembled under their feet. - , Kentucky Heat"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING when mother and daughter saw");
                // display.setCursor(5, 41);
      // display.println("the first lightning strike. It hit");
                // display.setCursor(5, 53);
      // display.println("the main barn with such force the");
                // display.setCursor(5, 17);
      // display.println("twelve minutes past midnight");
                // display.setCursor(102, 192);
      // display.println("- Kentucky Heat");
          return;
      } // end switch (option)

    // Codegen for 00:13 for 0 quotations:
    case 13:
      Serial.println(F("No quotes for 00:13"));
      return;

    // Codegen for 00:14 for 1 quotations:
    case 14:
      Serial.println(F("Only one option for 00:14:"));
    Serial.println(F("00:14 - It was exactly fourteen minutes past midnight when he completed the final call. - , The Matarese Circle"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was exactly");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING when he completed the final");
          // display.setCursor(5, 17);
      // display.println("fourteen minutes past midnight");
          // display.setCursor(60, 192);
      // display.println("- The Matarese Circle");
      return;

    // Codegen for 00:15 for 1 quotations:
    case 15:
      Serial.println(F("Only one option for 00:15:"));
    Serial.println(F("00:15 - At twelve-fifteen he got out of the van. He tucked the pistol under the waistband of his trousers and crossed the silent, deserted street to the Hudston house. - Dean Koontz, Watchers "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING he");
          // display.setCursor(5, 17);
      // display.println("got out of the van. He tucked the");
          // display.setCursor(5, 29);
      // display.println("pistol under the waistband of his");
          // display.setCursor(5, 41);
      // display.println("trousers and crossed the silent,");
          // display.setCursor(20, 5);
      // display.println("twelve-fifteen");
          // display.setCursor(39, 192);
      // display.println("- Dean Koontz, Watchers ");
      return;

    // Codegen for 00:16 for 1 quotations:
    case 16:
      Serial.println(F("Only one option for 00:16:"));
    Serial.println(F("00:16 - At sixteen minutes past midnight, Block 4 was hit and the roof set alight. - , The Longest Night"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, Block 4 was hit and the roof set");
          // display.setCursor(5, 17);
      // display.println("sixteen minutes past midnight");
          // display.setCursor(74, 192);
      // display.println("- The Longest Night");
      return;

    // Codegen for 00:17 for 1 quotations:
    case 17:
      Serial.println(F("Only one option for 00:17:"));
    Serial.println(F("00:17 - Kava ordered two glasses of coffee for himself and his beloved and some cake. When the pair left, exactly seventeen minutes after twelve, the club began to buzz with excitement. - , Vanvild Kava"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Kava ordered two glasses of");
          // display.setCursor(5, 17);
      // display.println("coffee for himself and his beloved and");
          // display.setCursor(5, 29);
      // display.println("some cake. When the pair left,");
          // display.setCursor(5, 41);
      // display.println("exactly");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, the club began to buzz with");
          // display.setCursor(5, 53);
      // display.println("seventeen minutes after twelve");
          // display.setCursor(109, 192);
      // display.println("- Vanvild Kava");
      return;

    // Codegen for 00:18 for 1 quotations:
    case 18:
      Serial.println(F("Only one option for 00:18:"));
    Serial.println(F("00:18 - 21st December 1985, 12.18am [In bed] Michael doesn’t believe in Heaven or Hell. He’s got closer to death than most living people and he tells me there was no tunnel of light or dancing angels. I’m a bit disappointed, to be honest. - , The Book of Lies"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("21st December 1985,");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING [In bed] Michael doesn’t");
          // display.setCursor(5, 29);
      // display.println("believe in Heaven or Hell. He’s got");
          // display.setCursor(5, 41);
      // display.println("closer to death than most living");
          // display.setCursor(5, 53);
      // display.println("people and he tells me there was no");
          // display.setCursor(5, 65);
      // display.println("tunnel of light or dancing angels. I’m");
          // display.setCursor(127, 5);
      // display.println("12.18am");
          // display.setCursor(81, 192);
      // display.println("- The Book of Lies");
      return;

    // Codegen for 00:19 for 0 quotations:
    case 19:
      Serial.println(F("No quotes for 00:19"));
      return;

    // Codegen for 00:20 for 1 quotations:
    case 20:
      Serial.println(F("Only one option for 00:20:"));
    Serial.println(F("00:20 - Now she was kneading the little ball of hot paste on the convex margin of the bowl and I could smell the opium. There is no smell like it. Beside the bed the alarm-clock showed twelve-twenty, but already my tension was over. Pyle had diminished. - , The Quiet American"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Now she was kneading the little");
          // display.setCursor(5, 17);
      // display.println("ball of hot paste on the convex margin");
          // display.setCursor(5, 29);
      // display.println("of the bowl and I could smell the");
          // display.setCursor(5, 41);
      // display.println("opium. There is no smell like it.");
          // display.setCursor(5, 53);
      // display.println("Beside the bed the alarm-clock showed");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, but");
          // display.setCursor(5, 77);
      // display.println("already my tension was over. Pyle had");
          // display.setCursor(5, 65);
      // display.println("twelve-twenty");
          // display.setCursor(67, 192);
      // display.println("- The Quiet American");
      return;

    // Codegen for 00:21 for 1 quotations:
    case 21:
      Serial.println(F("Only one option for 00:21:"));
    Serial.println(F("00:21 - Nobody had been one of Mycroft Ward's most important operatives and for sixty seconds every day, between 12.21am and 12.22am., his laptop was permitted to connect directly with the gigantic online database of self that was Mycroft Ward's mind. - , The Raw Shark Texts"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Nobody had been one of Mycroft");
          // display.setCursor(5, 17);
      // display.println("Ward's most important operatives and");
          // display.setCursor(5, 29);
      // display.println("for sixty seconds every day,");
          // display.setCursor(5, 41);
      // display.println("between TIMESTRING and");
          // display.setCursor(5, 53);
      // display.println("12.22am., his laptop was permitted to");
          // display.setCursor(5, 65);
      // display.println("connect directly with the gigantic");
          // display.setCursor(5, 77);
      // display.println("online database of self that was");
          // display.setCursor(13, 41);
      // display.println("12.21am");
          // display.setCursor(60, 192);
      // display.println("- The Raw Shark Texts");
      return;

    // Codegen for 00:22 for 1 quotations:
    case 22:
      Serial.println(F("Only one option for 00:22:"));
    Serial.println(F("00:22 - Nobody had been one of Mycroft Ward's most important operatives and for sixty seconds every day, between 12.21am and 12.22am., his laptop was permitted to connect directly with the gigantic online database of self that was Mycroft Ward's mind. - , The Raw Shark Texts"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Nobody had been one of Mycroft");
          // display.setCursor(5, 17);
      // display.println("Ward's most important operatives and");
          // display.setCursor(5, 29);
      // display.println("for sixty seconds every day,");
          // display.setCursor(5, 41);
      // display.println("between 12.21am and");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING, his laptop was permitted to");
          // display.setCursor(5, 65);
      // display.println("connect directly with the gigantic");
          // display.setCursor(5, 77);
      // display.println("online database of self that was");
          // display.setCursor(85, 41);
      // display.println("12.22am.");
          // display.setCursor(60, 192);
      // display.println("- The Raw Shark Texts");
      return;

    // Codegen for 00:23 for 1 quotations:
    case 23:
      Serial.println(F("Only one option for 00:23:"));
    Serial.println(F("00:23 - Oskar weighed the wristwatch in his hand, then gave the rather fine piece with its luminous dial showing twenty-three minutes past midnight to little Pinchcoal.  - Günter Grass, The Tin Drum"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Oskar weighed the wristwatch in");
          // display.setCursor(5, 17);
      // display.println("his hand, then gave the rather fine");
          // display.setCursor(5, 29);
      // display.println("piece with its luminous dial showing");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("twenty-three minutes past midnight");
          // display.setCursor(11, 192);
      // display.println("- Günter Grass, The Tin Drum");
      return;

    // Codegen for 00:24 for 1 quotations:
    case 24:
      Serial.println(F("Only one option for 00:24:"));
    Serial.println(F("00:24 - Sanders with Sutton as his gunner began their patrol at 12.24am, turning south towards Beachy Head at 10,000 ft. - , The Longest Night"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Sanders with Sutton as his");
          // display.setCursor(5, 17);
      // display.println("gunner began their patrol at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, turning south towards Beachy");
          // display.setCursor(142, 17);
      // display.println("12.24am");
          // display.setCursor(74, 192);
      // display.println("- The Longest Night");
      return;

    // Codegen for 00:25 for 2 quotations:
    case 25:
      option = random(0, 2);
      Serial.print(F("2 options for 00:25. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:25 - He had certainly rushed off to join Therese in some coppice, whence they must have hurried away to Vieux-Bourg station which the last train to Paris quitted at five-and-twenty minutes past midnight. And it was indeed this which had taken place. - Emile Zola, Fruitfulness "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He had certainly rushed off to");
                // display.setCursor(5, 17);
      // display.println("join Therese in some coppice, whence");
                // display.setCursor(5, 29);
      // display.println("they must have hurried away to");
                // display.setCursor(5, 41);
      // display.println("Vieux-Bourg station which the last train to");
                // display.setCursor(5, 53);
      // display.println("Paris quitted at");
                // display.setCursor(5, 65);
      // display.println("");
                // display.setCursor(5, 77);
      // display.println("TIMESTRING. And it was indeed this which had");
                // display.setCursor(5, 65);
      // display.println("five-and-twenty minutes past midnight");
                // display.setCursor(18, 192);
      // display.println("- Emile Zola, Fruitfulness ");
          return;
        case 1:
          Serial.println(F("00:25 - I mean, look at the time! Twenty-five past midnight! It was a triumph, it really was! - , The Soldier's Wife"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I mean, look at the time!");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("Twenty-five past midnight!");
                // display.setCursor(67, 192);
      // display.println("- The Soldier's Wife");
          return;
      } // end switch (option)

    // Codegen for 00:26 for 1 quotations:
    case 26:
      Serial.println(F("Only one option for 00:26:"));
    Serial.println(F("00:26 - A Mr Dutta from King's Cross called and told me you were on your way. He said you wanted to see the arrival of yesterday's 12.26am. It'll take me a few minutes to cue up the footage. - , Bryant & May Off the Rails"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A Mr Dutta from King's Cross");
          // display.setCursor(5, 17);
      // display.println("called and told me you were on your way.");
          // display.setCursor(5, 29);
      // display.println("He said you wanted to see the");
          // display.setCursor(5, 41);
      // display.println("arrival of yesterday's");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING It'll take me a few minutes to");
          // display.setCursor(106, 41);
      // display.println("12.26am.");
          // display.setCursor(11, 192);
      // display.println("- Bryant & May Off the Rails");
      return;

    // Codegen for 00:27 for 0 quotations:
    case 27:
      Serial.println(F("No quotes for 00:27"));
      return;

    // Codegen for 00:28 for 1 quotations:
    case 28:
      Serial.println(F("Only one option for 00:28:"));
    Serial.println(F("00:28 - The DRINK CHEER-UP COFFEE wall clock read 12.28. - Stephen King, 11/22/63"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The DRINK CHEER-UP COFFEE wall");
          // display.setCursor(40, 17);
      // display.println("12.28");
          // display.setCursor(39, 192);
      // display.println("- Stephen King, 11/22/63");
      return;

    // Codegen for 00:29 for 1 quotations:
    case 29:
      Serial.println(F("Only one option for 00:29:"));
    Serial.println(F("00:29 - What time is it? asked Teeny-bits. The station agent hauled out his big silver watch, looked at it critically and announced: \"Twenty-nine minutes past twelve.\" \"Past twelve!\" repeated Teeny-bits. \"It can't be.\" - , The Mark of the Knife"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("What time is it? asked");
          // display.setCursor(5, 17);
      // display.println("Teeny-bits. The station agent hauled out");
          // display.setCursor(5, 29);
      // display.println("his big silver watch, looked at it");
          // display.setCursor(5, 41);
      // display.println("critically and announced:");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("\"TIMESTRING.\" \"Past twelve!\" repeated");
          // display.setCursor(5, 53);
      // display.println("Twenty-nine minutes past twelve");
          // display.setCursor(46, 192);
      // display.println("- The Mark of the Knife");
      return;

    // Codegen for 00:30 for 1 quotations:
    case 30:
      Serial.println(F("Only one option for 00:30:"));
    Serial.println(F("00:30 - It was half-past twelve when I returned to the Albany as a last desperate resort. The scene of my disaster was much as I had left it. The baccarat-counters still strewed the table, with the empty glasses and the loaded ash-trays. - , The Amateur Cracksman"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING when I returned to the Albany as");
          // display.setCursor(5, 29);
      // display.println("a last desperate resort. The");
          // display.setCursor(5, 41);
      // display.println("scene of my disaster was much as I had");
          // display.setCursor(5, 53);
      // display.println("left it. The baccarat-counters");
          // display.setCursor(5, 65);
      // display.println("still strewed the table, with the");
          // display.setCursor(5, 77);
      // display.println("empty glasses and the loaded");
          // display.setCursor(42, 5);
      // display.println("half-past twelve");
          // display.setCursor(46, 192);
      // display.println("- The Amateur Cracksman");
      return;

    // Codegen for 00:31 for 1 quotations:
    case 31:
      Serial.println(F("Only one option for 00:31:"));
    Serial.println(F("00:31 - Third individual approaches unnoticed and without caution. Once within reach, individual reaches out toward subjects. Recording terminates: timecode: 00:31:02. - , Zombie Apocalypse Fightback"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Third individual approaches");
          // display.setCursor(5, 17);
      // display.println("unnoticed and without caution. Once");
          // display.setCursor(5, 29);
      // display.println("within reach, individual reaches out");
          // display.setCursor(5, 41);
      // display.println("toward subjects. Recording");
          // display.setCursor(5, 53);
      // display.println("terminates: timecode:");
          // display.setCursor(81, 53);
      // display.println("00:31");
          // display.setCursor(4, 192);
      // display.println("- Zombie Apocalypse Fightback");
      return;

    // Codegen for 00:32 for 1 quotations:
    case 32:
      Serial.println(F("Only one option for 00:32:"));
    Serial.println(F("00:32 - Thirty-two minutes past midnight; the way things were going I could be at it all night. Before beginning a completely new search of the dial I had a thought: maybe this safe didn't open on zero as older models did, but on a factory-set number. - Everette Hunt, Ixtapa"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING; the way things were going I");
          // display.setCursor(5, 41);
      // display.println("could be at it all night. Before");
          // display.setCursor(5, 53);
      // display.println("beginning a completely new search of the");
          // display.setCursor(5, 65);
      // display.println("dial I had a thought: maybe this safe");
          // display.setCursor(5, 77);
      // display.println("didn't open on zero as older models");
          // display.setCursor(5, 17);
      // display.println("Thirty-two minutes past midnight");
          // display.setCursor(46, 192);
      // display.println("- Everette Hunt, Ixtapa");
      return;

    // Codegen for 00:33 for 1 quotations:
    case 33:
      Serial.println(F("Only one option for 00:33:"));
    Serial.println(F("00:33 - \"So that at twelve-thirty-three you bolted the south door?\" \"Yes,\" replied Stephen Maxie easily. \"At thirty-three minutes past midnight.\" - P.D. James, Cover her Face"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("\"So that at");
          // display.setCursor(5, 17);
      // display.println("twelve-thirty-three you bolted the south door?\"");
          // display.setCursor(5, 29);
      // display.println("\"Yes,\" replied Stephen Maxie easily.");
          // display.setCursor(5, 41);
      // display.println("\"At");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("thirty-three minutes past midnight");
          // display.setCursor(11, 192);
      // display.println("- P.D. James, Cover her Face");
      return;

    // Codegen for 00:34 for 1 quotations:
    case 34:
      Serial.println(F("Only one option for 00:34:"));
    Serial.println(F("00:34 - Thirty-four minutes past midnight. 'We got ten minutes to be back here.' LT didn't argue. Schoolboy knew his former trade. LT's eyes fretted over the museum. 'Not still worrying about the security, are you, because there ain't none.' - , Killer Tune"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. 'We got ten minutes to be back");
          // display.setCursor(5, 41);
      // display.println("here.' LT didn't argue. Schoolboy knew");
          // display.setCursor(5, 53);
      // display.println("his former trade. LT's eyes fretted");
          // display.setCursor(5, 65);
      // display.println("over the museum. 'Not still worrying");
          // display.setCursor(5, 77);
      // display.println("about the security, are you, because");
          // display.setCursor(5, 17);
      // display.println("Thirty-four minutes past midnight");
          // display.setCursor(116, 192);
      // display.println("- Killer Tune");
      return;

    // Codegen for 00:35 for 0 quotations:
    case 35:
      Serial.println(F("No quotes for 00:35"));
      return;

    // Codegen for 00:36 for 0 quotations:
    case 36:
      Serial.println(F("No quotes for 00:36"));
      return;

    // Codegen for 00:37 for 0 quotations:
    case 37:
      Serial.println(F("No quotes for 00:37"));
      return;

    // Codegen for 00:38 for 0 quotations:
    case 38:
      Serial.println(F("No quotes for 00:38"));
      return;

    // Codegen for 00:39 for 0 quotations:
    case 39:
      Serial.println(F("No quotes for 00:39"));
      return;

    // Codegen for 00:40 for 1 quotations:
    case 40:
      Serial.println(F("Only one option for 00:40:"));
    Serial.println(F("00:40 - We sat in the car park till twenty to one. And now I'm engaged to Miss Joan Hunter Dunn. - , A Subaltern's Love Song"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("We sat in the car park till");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. And");
          // display.setCursor(5, 29);
      // display.println("now I'm engaged to Miss Joan Hunter");
          // display.setCursor(5, 17);
      // display.println("twenty to one");
          // display.setCursor(32, 192);
      // display.println("- A Subaltern's Love Song");
      return;

    // Codegen for 00:41 for 0 quotations:
    case 41:
      Serial.println(F("No quotes for 00:41"));
      return;

    // Codegen for 00:42 for 1 quotations:
    case 42:
      Serial.println(F("Only one option for 00:42:"));
    Serial.println(F("00:42 - She crushed the cigarette out and stood, brushing ash from her black skirt. It was eighteen minutes to one. She went to the house phone and called his room. The telephone rang and rang, but there was no answer. - Herman Wouk, Marjorie Morningstar"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She crushed the cigarette out");
          // display.setCursor(5, 17);
      // display.println("and stood, brushing ash from her");
          // display.setCursor(5, 29);
      // display.println("black skirt. It was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING. She went to the house phone and");
          // display.setCursor(5, 65);
      // display.println("called his room. The telephone rang");
          // display.setCursor(5, 41);
      // display.println("eighteen minutes to one");
          // display.setCursor(53, 192);
      // display.println("- Marjorie Morningstar");
      return;

    // Codegen for 00:43 for 1 quotations:
    case 43:
      Serial.println(F("Only one option for 00:43:"));
    Serial.println(F("00:43 - Died five minutes ago, you say? he asked. His eye went to the watch on his wrist. Twelve-forty-three, he wrote on the blotter. - Agatha Christie, A Pocket Full of Rye"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Died five minutes ago, you say?");
          // display.setCursor(5, 17);
      // display.println("he asked. His eye went to the watch");
          // display.setCursor(5, 29);
      // display.println("on his wrist.");
          // display.setCursor(73, 29);
      // display.println("Twelve-forty-three");
          // display.setCursor(53, 192);
      // display.println("- A Pocket Full of Rye");
      return;

    // Codegen for 00:44 for 0 quotations:
    case 44:
      Serial.println(F("No quotes for 00:44"));
      return;

    // Codegen for 00:45 for 2 quotations:
    case 45:
      option = random(0, 2);
      Serial.print(F("2 options for 00:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:45 - At 12.45, during a lull, Mr Yoshogi told me that owing to the war there were now many more women in England than men. - David Footman, Pig and Pepper: A Comedy of Youth"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING, during a");
                // display.setCursor(5, 17);
      // display.println("lull, Mr Yoshogi told me that owing to");
                // display.setCursor(5, 29);
      // display.println("the war there were now many more");
                // display.setCursor(20, 5);
      // display.println("12.45");
                // display.setCursor(102, 192);
      // display.println("- David Footman");
          return;
        case 1:
          Serial.println(F("00:45 - The clock marked the third quarter after midnight, and he knew it would make no difference if he went down to the post-box now or early the next morning; but he wanted to clear his conscience, and having found the letter he went to the door. - Edith Wharton, The Reef "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The clock marked the");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, and he knew it would make no");
                // display.setCursor(5, 41);
      // display.println("difference if he went down to the post-box");
                // display.setCursor(5, 53);
      // display.println("now or early the next morning; but he");
                // display.setCursor(5, 65);
      // display.println("wanted to clear his conscience, and");
                // display.setCursor(5, 77);
      // display.println("having found the letter he went to the");
                // display.setCursor(5, 17);
      // display.println("third quarter after midnight");
                // display.setCursor(25, 192);
      // display.println("- Edith Wharton, The Reef ");
          return;
      } // end switch (option)

    // Codegen for 00:46 for 0 quotations:
    case 46:
      Serial.println(F("No quotes for 00:46"));
      return;

    // Codegen for 00:47 for 1 quotations:
    case 47:
      Serial.println(F("Only one option for 00:47:"));
    Serial.println(F("00:47 - At 12:47a.m, Uncle Ho left us forever. - Andrew X. Pham, Last Night I Dreamed Of Peace"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, Uncle Ho");
          // display.setCursor(20, 5);
      // display.println("12:47a.m");
          // display.setCursor(95, 192);
      // display.println("- Andrew X. Pham");
      return;

    // Codegen for 00:48 for 0 quotations:
    case 48:
      Serial.println(F("No quotes for 00:48"));
      return;

    // Codegen for 00:49 for 0 quotations:
    case 49:
      Serial.println(F("No quotes for 00:49"));
      return;

    // Codegen for 00:50 for 1 quotations:
    case 50:
      Serial.println(F("Only one option for 00:50:"));
    Serial.println(F("00:50 - The packing was done at 12.50; and Harris sat on the big hamper, and said he hoped nothing would be found broken. George said that if anything was broken it was broken, which reflection seemed to comfort him. He also said he was ready for bed. - Jerome K Jerome, Three Men in a Boat "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The packing was done at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING; and Harris sat on the big");
          // display.setCursor(5, 29);
      // display.println("hamper, and said he hoped nothing would");
          // display.setCursor(5, 41);
      // display.println("be found broken. George said that");
          // display.setCursor(5, 53);
      // display.println("if anything was broken it was");
          // display.setCursor(5, 65);
      // display.println("broken, which reflection seemed to");
          // display.setCursor(5, 77);
      // display.println("comfort him. He also said he was ready");
          // display.setCursor(143, 5);
      // display.println("12.50");
          // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
      return;

    // Codegen for 00:51 for 0 quotations:
    case 51:
      Serial.println(F("No quotes for 00:51"));
      return;

    // Codegen for 00:52 for 0 quotations:
    case 52:
      Serial.println(F("No quotes for 00:52"));
      return;

    // Codegen for 00:53 for 0 quotations:
    case 53:
      Serial.println(F("No quotes for 00:53"));
      return;

    // Codegen for 00:54 for 1 quotations:
    case 54:
      Serial.println(F("Only one option for 00:54:"));
    Serial.println(F("00:54 - Everybody was happy; everybody was complimentary; the ice was soon broken; songs, anecdotes, and more drinks followed, and the pregnant minutes flew. At six minutes to one, when the jollity was at its highest— BOOM! There was silence instantly. - Mark Twain, A Double Barrelled Detective Story"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Everybody was happy; everybody");
          // display.setCursor(5, 17);
      // display.println("was complimentary; the ice was soon");
          // display.setCursor(5, 29);
      // display.println("broken; songs, anecdotes, and more");
          // display.setCursor(5, 41);
      // display.println("drinks followed, and the pregnant");
          // display.setCursor(5, 53);
      // display.println("minutes flew. At");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, when the jollity was at its");
          // display.setCursor(5, 77);
      // display.println("highest— BOOM! There was silence");
          // display.setCursor(64, 53);
      // display.println("six minutes to one");
          // display.setCursor(123, 192);
      // display.println("- Mark Twain");
      return;

    // Codegen for 00:55 for 1 quotations:
    case 55:
      Serial.println(F("Only one option for 00:55:"));
    Serial.println(F("00:55 - He rolled one way, rolled the other, listened to the loud tick of the clock, and was asleep a minute later. Five to one in the morning. Fifty-one hours to go. - Lee Child, 61 Hours"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He rolled one way, rolled the");
          // display.setCursor(5, 17);
      // display.println("other, listened to the loud tick of the");
          // display.setCursor(5, 29);
      // display.println("clock, and was asleep a minute later.");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING in the");
          // display.setCursor(5, 41);
      // display.println("Five to one");
          // display.setCursor(60, 192);
      // display.println("- Lee Child, 61 Hours");
      return;

    // Codegen for 00:56 for 2 quotations:
    case 56:
      option = random(0, 2);
      Serial.print(F("2 options for 00:56. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:56 - It was 12:56 A.M. when Gerald drove up onto the grass and pulled the limousine right next to the cemetery. - Jonathan Safran Foer, Extremely Loud and Incredibly Close "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("when Gerald drove up onto the grass");
                // display.setCursor(5, 29);
      // display.println("and pulled the limousine right next");
                // display.setCursor(42, 5);
      // display.println("12:56 A.M.");
                // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
          return;
        case 1:
          Serial.println(F("00:56 - One night, and this first night is lost in the countless later nights of compounding wonder, he discovered a game. Say the time was 12:56. - Dana Standridge, Lessons in Essence"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("One night, and this first night");
                // display.setCursor(5, 17);
      // display.println("is lost in the countless later");
                // display.setCursor(5, 29);
      // display.println("nights of compounding wonder, he");
                // display.setCursor(5, 41);
      // display.println("discovered a game. Say the time was");
                // display.setCursor(155, 41);
      // display.println("12:56");
                // display.setCursor(67, 192);
      // display.println("- Lessons in Essence");
          return;
      } // end switch (option)

    // Codegen for 00:57 for 1 quotations:
    case 57:
      Serial.println(F("Only one option for 00:57:"));
    Serial.println(F("00:57 - A minute had passed, and the roller dropped a new leaf. 12:57. 12 + 57 = 69; 6 + 9 = 15; 1 + 5 = 6. 712 + 5 = 717; 71 + 7 = 78; 7 + 8 = 15; 1 + 5 = 6 again. - Dana Standridge, Lessons in Essence"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A minute had passed, and the");
          // display.setCursor(5, 17);
      // display.println("roller dropped a new leaf.");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. 12 + 57 = 69; 6 + 9 = 15; 1 + 5 = 6.");
          // display.setCursor(5, 41);
      // display.println("712 + 5 = 717; 71 + 7 = 78; 7 + 8 = 15; 1 + 5");
          // display.setCursor(128, 17);
      // display.println("12:57");
          // display.setCursor(67, 192);
      // display.println("- Lessons in Essence");
      return;

    // Codegen for 00:58 for 1 quotations:
    case 58:
      Serial.println(F("Only one option for 00:58:"));
    Serial.println(F("00:58 - It was downright shameless on his part to come visiting them, especially at night, almost at one in the morning, after all that had happened. - Fyodor Dostoyevsky, The Idiot"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was downright shameless on");
          // display.setCursor(5, 17);
      // display.println("his part to come visiting them,");
          // display.setCursor(5, 29);
      // display.println("especially at night,");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("almost at one in the morning");
          // display.setCursor(130, 192);
      // display.println("- The Idiot");
      return;

    // Codegen for 00:59 for 1 quotations:
    case 59:
      Serial.println(F("Only one option for 00:59:"));
    Serial.println(F("00:59 - ‘What time is it now?’ she said. ‘About one o’clock’. ‘In the morning?’ Herera’s friend leered at her. ‘No, there’s a total eclipse of the sun’. - Jonathan Frantzen, Freedom"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("‘What time is it now?’ she said.");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("‘TIMESTRING’. ‘In the morning?’ Herera’s");
          // display.setCursor(5, 41);
      // display.println("friend leered at her. ‘No, there’s a");
          // display.setCursor(5, 17);
      // display.println("About one o’clock");
          // display.setCursor(11, 192);
      // display.println("- Jonathan Frantzen, Freedom");
      return;

    // Codegen for 01:00 for 7 quotations:
    case 60:
      option = random(0, 7);
      Serial.print(F("7 options for 01:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:00 - 1.00 am. I felt the surrounding quietness suffocating me. - Rosamund Lupton, Sister "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING I felt the");
                // display.setCursor(5, 5);
      // display.println("1.00 am.");
                // display.setCursor(25, 192);
      // display.println("- Rosamund Lupton, Sister ");
          return;
        case 1:
          Serial.println(F("01:00 - Huge worms, as big as the canary, armed with terrible beaks, would attack the body. Tear off the feet, rip out its intestines, burst the eyeballs. He woke up, trembling; it was only one o’clock. He swallowed three Xanax. So ended his first night of freedom. - Michel Houellebecq, Atomised "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Huge worms, as big as the canary,");
                // display.setCursor(5, 17);
      // display.println("armed with terrible beaks, would");
                // display.setCursor(5, 29);
      // display.println("attack the body. Tear off the feet, rip");
                // display.setCursor(5, 41);
      // display.println("out its intestines, burst the");
                // display.setCursor(5, 53);
      // display.println("eyeballs. He woke up, trembling; it was");
                // display.setCursor(5, 65);
      // display.println("only TIMESTRING. He");
                // display.setCursor(5, 77);
      // display.println("swallowed three Xanax. So ended his first");
                // display.setCursor(10, 65);
      // display.println("one o’clock");
                // display.setCursor(137, 192);
      // display.println("- Atomised");
          return;
        case 2:
          Serial.println(F("01:00 - I looked attentively at her, as she put that singular question to me. It was then nearly one o'clock. All I could discern distinctly by the moonlight was a colourless, youthful face. - Wilkie Collins, The Woman in White "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I looked attentively at her, as");
                // display.setCursor(5, 17);
      // display.println("she put that singular question to");
                // display.setCursor(5, 29);
      // display.println("me. It was then");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING. All I could discern distinctly");
                // display.setCursor(5, 53);
      // display.println("by the moonlight was a colourless,");
                // display.setCursor(75, 29);
      // display.println("nearly one o'clock");
                // display.setCursor(67, 192);
      // display.println("- The Woman in White");
          return;
        case 3:
          Serial.println(F("01:00 - I'm the only one awake in this house on this night before the day that will change all our lives. Though it's already that day: the little luminous hands on my alarm clock (which I haven't set) show just gone one in the morning. - Graham Swift, Tomorrow "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I'm the only one awake in this");
                // display.setCursor(5, 17);
      // display.println("house on this night before the day");
                // display.setCursor(5, 29);
      // display.println("that will change all our lives.");
                // display.setCursor(5, 41);
      // display.println("Though it's already that day: the");
                // display.setCursor(5, 53);
      // display.println("little luminous hands on my alarm");
                // display.setCursor(5, 65);
      // display.println("clock (which I haven't set) show just");
                // display.setCursor(5, 77);
      // display.println("gone");
                // display.setCursor(10, 77);
      // display.println("one in the morning");
                // display.setCursor(32, 192);
      // display.println("- Graham Swift, Tomorrow ");
          return;
        case 4:
          Serial.println(F("01:00 - It was the thirtieth of May by now. One am on the thirtieth of May 1940. Quite a famous date on which to be lying awake and staring at the ceiling. Already in the creeks and tidal estuaries of England the pleasure-boats and paddle-steamers were casting their moorings - Norman Collins, London Belongs to Me"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was the thirtieth of May by");
                // display.setCursor(5, 17);
      // display.println("now. TIMESTRING on the");
                // display.setCursor(5, 29);
      // display.println("thirtieth of May 1940. Quite a famous date");
                // display.setCursor(5, 41);
      // display.println("on which to be lying awake and");
                // display.setCursor(5, 53);
      // display.println("staring at the ceiling. Already in the");
                // display.setCursor(5, 65);
      // display.println("creeks and tidal estuaries of England");
                // display.setCursor(5, 77);
      // display.println("the pleasure-boats and");
                // display.setCursor(10, 17);
      // display.println("One am");
                // display.setCursor(53, 192);
      // display.println("- London Belongs to Me");
          return;
        case 5:
          Serial.println(F("01:00 - Last night of all, When yon same star that's westward from the pole Had made his course t'illume that part of heaven Where now it burns, Marcellus and myself, The bell then beating one - - William Shakespeare, Hamlet "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Last night of all, When yon same");
                // display.setCursor(5, 17);
      // display.println("star that's westward from the pole");
                // display.setCursor(5, 29);
      // display.println("Had made his course t'illume that");
                // display.setCursor(5, 41);
      // display.println("part of heaven Where now it burns,");
                // display.setCursor(5, 53);
      // display.println("Marcellus and myself, The bell then");
                // display.setCursor(13, 65);
      // display.println("one ");
                // display.setCursor(151, 192);
      // display.println("- Hamlet");
          return;
        case 6:
          Serial.println(F("01:00 - The station was more crowded than he had expected to find it at - what was it? he looked up at the clock - one o'clock in the morning. What in the name of God was he doing on King's Cross station... - Douglas Adams, The Long Dark Tea-time of the Soul"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The station was more crowded");
                // display.setCursor(5, 17);
      // display.println("than he had expected to find it at -");
                // display.setCursor(5, 29);
      // display.println("what was it? he looked up at the clock");
                // display.setCursor(5, 41);
      // display.println("-");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING. What in the name of God was he");
                // display.setCursor(7, 41);
      // display.println("one o'clock in the morning");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
      } // end switch (option)

    // Codegen for 01:01 for 1 quotations:
    case 61:
      Serial.println(F("Only one option for 01:01:"));
    Serial.println(F("01:01 - ‘What time is it now?’ she said. ‘About one o’clock’. ‘In the morning?’ Herera’s friend leered at her. ‘No, there’s a total eclipse of the sun’. - Jonathan Frantzen, Freedom"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("‘What time is it now?’ she said.");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("‘TIMESTRING’. ‘In the morning?’ Herera’s");
          // display.setCursor(5, 41);
      // display.println("friend leered at her. ‘No, there’s a");
          // display.setCursor(5, 17);
      // display.println("About one o’clock");
          // display.setCursor(11, 192);
      // display.println("- Jonathan Frantzen, Freedom");
      return;

    // Codegen for 01:02 for 0 quotations:
    case 62:
      Serial.println(F("No quotes for 01:02"));
      return;

    // Codegen for 01:03 for 0 quotations:
    case 63:
      Serial.println(F("No quotes for 01:03"));
      return;

    // Codegen for 01:04 for 0 quotations:
    case 64:
      Serial.println(F("No quotes for 01:04"));
      return;

    // Codegen for 01:05 for 0 quotations:
    case 65:
      Serial.println(F("No quotes for 01:05"));
      return;

    // Codegen for 01:06 for 1 quotations:
    case 66:
      Serial.println(F("Only one option for 01:06:"));
    Serial.println(F("01:06 - When he woke it was 1:06 by the digital clock on the bedside table. He lay there looking at the ceiling, the raw glare of the vaporlamp outside bathing the bedroom in a cold and bluish light. Like a winter moon. - Cormac McCarthy, No Country for Old Men"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("When he woke it was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING by the digital clock on the");
          // display.setCursor(5, 29);
      // display.println("bedside table. He lay there looking at");
          // display.setCursor(5, 41);
      // display.println("the ceiling, the raw glare of the");
          // display.setCursor(5, 53);
      // display.println("vaporlamp outside bathing the bedroom in");
          // display.setCursor(5, 65);
      // display.println("a cold and bluish light. Like a");
          // display.setCursor(115, 5);
      // display.println("1:06");
          // display.setCursor(39, 192);
      // display.println("- No Country for Old Men");
      return;

    // Codegen for 01:07 for 0 quotations:
    case 67:
      Serial.println(F("No quotes for 01:07"));
      return;

    // Codegen for 01:08 for 1 quotations:
    case 68:
      Serial.println(F("Only one option for 01:08:"));
    Serial.println(F("01:08 - It was 1.08a.m. but he had left the ball at the same time as I did, and had further to travel. - Graeme Simsion, The Rosie Project"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING but");
          // display.setCursor(5, 17);
      // display.println("he had left the ball at the same time");
          // display.setCursor(42, 5);
      // display.println("1.08a.m.");
          // display.setCursor(74, 192);
      // display.println("- The Rosie Project");
      return;

    // Codegen for 01:09 for 1 quotations:
    case 69:
      Serial.println(F("Only one option for 01:09:"));
    Serial.println(F("01:09 - They made an unostentatious exit from their coach, finding themselves, when the express had rolled on into the west, upon a station platform in a foreign city at nine minutes past one o'clock in the morning - but at length without their shadow. - Louis Joseph Vance, The Black Bag"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("They made an unostentatious exit");
          // display.setCursor(5, 17);
      // display.println("from their coach, finding");
          // display.setCursor(5, 29);
      // display.println("themselves, when the express had rolled on");
          // display.setCursor(5, 41);
      // display.println("into the west, upon a station");
          // display.setCursor(5, 53);
      // display.println("platform in a foreign city at");
          // display.setCursor(5, 65);
      // display.println("");
          // display.setCursor(5, 77);
      // display.println("TIMESTRING o'clock in the morning - but at");
          // display.setCursor(5, 65);
      // display.println("nine minutes past one");
          // display.setCursor(102, 192);
      // display.println("- The Black Bag");
      return;

    // Codegen for 01:10 for 1 quotations:
    case 70:
      Serial.println(F("Only one option for 01:10:"));
    Serial.println(F("01:10 - February 26, Saturday - Richards went out 1.10am and found it clearing a bit, so we got under way as soon as possible, which was 2:10a.m. - Ernest Shackleton, South: The Endurance Expedition"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("February 26, Saturday - Richards");
          // display.setCursor(5, 17);
      // display.println("went out TIMESTRING and found");
          // display.setCursor(5, 29);
      // display.println("it clearing a bit, so we got under");
          // display.setCursor(5, 41);
      // display.println("way as soon as possible, which was");
          // display.setCursor(32, 17);
      // display.println("1.10am");
          // display.setCursor(74, 192);
      // display.println("- Ernest Shackleton");
      return;

    // Codegen for 01:11 for 1 quotations:
    case 71:
      Serial.println(F("Only one option for 01:11:"));
    Serial.println(F("01:11 - Declares one of the waiters was the worse for liquor, and that he was giving him a dressing down. Also that it was nearer to one than half past. - Agatha Christie, The Affair at the Victory Ball"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Declares one of the waiters was");
          // display.setCursor(5, 17);
      // display.println("the worse for liquor, and that he was");
          // display.setCursor(5, 29);
      // display.println("giving him a dressing down. Also that");
          // display.setCursor(5, 41);
      // display.println("it was");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("nearer to one than half past");
          // display.setCursor(88, 192);
      // display.println("- Agatha Christie");
      return;

    // Codegen for 01:12 for 1 quotations:
    case 72:
      Serial.println(F("Only one option for 01:12:"));
    Serial.println(F("01:12 - It was 1:12am when Father arrived at the police station. I did not see him until 1:28am but I knew he was there because I could hear him. He was shouting, 'I want to see my son,' and 'Why the hell is he locked up?' and, 'Of course I'm bloody angry.' - Mark Haddon, The Curious Incident of the Dog in the Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING when");
          // display.setCursor(5, 17);
      // display.println("Father arrived at the police station.");
          // display.setCursor(5, 29);
      // display.println("I did not see him until 1:28am but I");
          // display.setCursor(5, 41);
      // display.println("knew he was there because I could hear");
          // display.setCursor(5, 53);
      // display.println("him. He was shouting, 'I want to see");
          // display.setCursor(5, 65);
      // display.println("my son,' and 'Why the hell is he");
          // display.setCursor(5, 77);
      // display.println("locked up?' and, 'Of course I'm bloody");
          // display.setCursor(42, 5);
      // display.println("1:12am");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 01:13 for 0 quotations:
    case 73:
      Serial.println(F("No quotes for 01:13"));
      return;

    // Codegen for 01:14 for 0 quotations:
    case 74:
      Serial.println(F("No quotes for 01:14"));
      return;

    // Codegen for 01:15 for 3 quotations:
    case 75:
      option = random(0, 3);
      Serial.print(F("3 options for 01:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:15 - I am sorry, therefore, as I have said, that I ever paid any attention to the footsteps. They began about a quarter past one o'clock in the morning, a rhythmic, quick-cadenced walking around the dining-room table. - James Thurber, My Life and Hard Times: \"The Night the Ghost Got In\""));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I am sorry, therefore, as I have");
                // display.setCursor(5, 17);
      // display.println("said, that I ever paid any attention");
                // display.setCursor(5, 29);
      // display.println("to the footsteps. They began about");
                // display.setCursor(5, 41);
      // display.println("a TIMESTRING");
                // display.setCursor(5, 53);
      // display.println("o'clock in the morning, a rhythmic,");
                // display.setCursor(5, 65);
      // display.println("quick-cadenced walking around the");
                // display.setCursor(7, 41);
      // display.println("quarter past one");
                // display.setCursor(102, 192);
      // display.println("- James Thurber");
          return;
        case 1:
          Serial.println(F("01:15 - Lily Chen always prepared an 'evening' snack for her husband to consume on his return at 1.15am. - Timothy Mo, Sour Sweet "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Lily Chen always prepared an");
                // display.setCursor(5, 17);
      // display.println("'evening' snack for her husband to");
                // display.setCursor(5, 29);
      // display.println("consume on his return at");
                // display.setCursor(108, 29);
      // display.println("1.15am.");
                // display.setCursor(32, 192);
      // display.println("- Timothy Mo, Sour Sweet ");
          return;
        case 2:
          Serial.println(F("01:15 - I am sorry, therefore, as I have said, that I ever paid any attention to the footsteps. They began about a quarter past one o'clock in the morning, a rhythmic, quick-cadenced walking around the dining-room table. - James Thurber, My Life and Hard Times: \"The Night the Ghost Got In\" "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I am sorry, therefore, as I have");
                // display.setCursor(5, 17);
      // display.println("said, that I ever paid any attention");
                // display.setCursor(5, 29);
      // display.println("to the footsteps. They began about");
                // display.setCursor(5, 41);
      // display.println("a TIMESTRING");
                // display.setCursor(5, 53);
      // display.println("o'clock in the morning, a rhythmic,");
                // display.setCursor(5, 65);
      // display.println("quick-cadenced walking around the");
                // display.setCursor(7, 41);
      // display.println("quarter past one");
                // display.setCursor(102, 192);
      // display.println("- James Thurber");
          return;
      } // end switch (option)

    // Codegen for 01:16 for 2 quotations:
    case 76:
      option = random(0, 2);
      Serial.print(F("2 options for 01:16. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:16 - At sixteen past one, they walked into the interview room. - Dana Stabenow, Nothing Gold Can Stay "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, they walked into the interview");
                // display.setCursor(20, 5);
      // display.println("sixteen past one");
                // display.setCursor(46, 192);
      // display.println("- Nothing Gold Can Stay");
          return;
        case 1:
          Serial.println(F("01:16 - From 1am to 1.16am vouched for by other two conductors. - Agatha Christie, Murder on the Orient Express"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("From 1am to TIMESTRING");
                // display.setCursor(71, 5);
      // display.println("1.16am");
                // display.setCursor(88, 192);
      // display.println("- Agatha Christie");
          return;
      } // end switch (option)

    // Codegen for 01:17 for 2 quotations:
    case 77:
      option = random(0, 2);
      Serial.print(F("2 options for 01:17. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:17 - At that moment (it was seventeen minutes past one in the morning) Lieutenant Bronsfield was preparing to leave the watch and return to his cabin, when his attention was attracted by a distant hissing noise. - Jules Verne, A voyage round the moon "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At that moment (it was");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING in the morning) Lieutenant");
                // display.setCursor(5, 41);
      // display.println("Bronsfield was preparing to leave the");
                // display.setCursor(5, 53);
      // display.println("watch and return to his cabin, when");
                // display.setCursor(5, 65);
      // display.println("his attention was attracted by a");
                // display.setCursor(5, 17);
      // display.println("seventeen minutes past one");
                // display.setCursor(32, 192);
      // display.println("- A voyage round the moon");
          return;
        case 1:
          Serial.println(F("01:17 - The clocks stopped at 1:17. A long shear of light and then a series of low concussions. He got up and went to the window. What is it? she said. He didnt answer. - Cormac McCarthy, The Road "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The clocks stopped at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING. A long shear of light and then a");
                // display.setCursor(5, 29);
      // display.println("series of low concussions. He got up");
                // display.setCursor(5, 41);
      // display.println("and went to the window. What is it?");
                // display.setCursor(135, 5);
      // display.println("1:17");
                // display.setCursor(11, 192);
      // display.println("- Cormac McCarthy, The Road ");
          return;
      } // end switch (option)

    // Codegen for 01:18 for 0 quotations:
    case 78:
      Serial.println(F("No quotes for 01:18"));
      return;

    // Codegen for 01:19 for 0 quotations:
    case 79:
      Serial.println(F("No quotes for 01:19"));
      return;

    // Codegen for 01:20 for 2 quotations:
    case 80:
      option = random(0, 2);
      Serial.print(F("2 options for 01:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:20 - May I trespass on your valuable time long enough to ask what in the name of everything bloodsome you think you're playing at, young piefaced Bertie? It is now some twenty minutes past one o'clock in the morning, and not a spot of action on your part. - P.G. Wodehouse, Jeeves and the Feudal Spirit "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("May I trespass on your valuable");
                // display.setCursor(5, 17);
      // display.println("time long enough to ask what in the");
                // display.setCursor(5, 29);
      // display.println("name of everything bloodsome you");
                // display.setCursor(5, 41);
      // display.println("think you're playing at, young");
                // display.setCursor(5, 53);
      // display.println("piefaced Bertie? It is now some");
                // display.setCursor(5, 65);
      // display.println("");
                // display.setCursor(5, 77);
      // display.println("TIMESTRING o'clock in the morning, and not");
                // display.setCursor(5, 65);
      // display.println("twenty minutes past one");
                // display.setCursor(95, 192);
      // display.println("- P.G. Wodehouse");
          return;
        case 1:
          Serial.println(F("01:20 - Then it was 1.20am, but I hadn't heard Father come upstairs to bed. I wondered if he was asleep downstairs or whether he was waiting to come in and kill me. So I got out my Swiss Army Knife and opened the saw blade so that I could defend myself. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Then it was TIMESTRING,");
                // display.setCursor(5, 17);
      // display.println("but I hadn't heard Father come");
                // display.setCursor(5, 29);
      // display.println("upstairs to bed. I wondered if he was");
                // display.setCursor(5, 41);
      // display.println("asleep downstairs or whether he was");
                // display.setCursor(5, 53);
      // display.println("waiting to come in and kill me. So I got");
                // display.setCursor(5, 65);
      // display.println("out my Swiss Army Knife and opened");
                // display.setCursor(5, 77);
      // display.println("the saw blade so that I could defend");
                // display.setCursor(71, 5);
      // display.println("1.20am");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
      } // end switch (option)

    // Codegen for 01:21 for 0 quotations:
    case 81:
      Serial.println(F("No quotes for 01:21"));
      return;

    // Codegen for 01:22 for 1 quotations:
    case 82:
      Serial.println(F("Only one option for 01:22:"));
    Serial.println(F("01:22 - It was 1:22 when we found Dad's grave. - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING when we");
          // display.setCursor(42, 5);
      // display.println("1:22");
          // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
      return;

    // Codegen for 01:23 for 1 quotations:
    case 83:
      Serial.println(F("Only one option for 01:23:"));
    Serial.println(F("01:23 - The clock marked twenty-three minutes past one. He was suddenly full of agitation, yet hopeful. She had come! Who could tell what she would say? She might offer the most natural explanation of her late arrival. - Anatole France, A Mummer's Tale"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The clock marked");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. He was suddenly full of");
          // display.setCursor(5, 41);
      // display.println("agitation, yet hopeful. She had come! Who");
          // display.setCursor(5, 53);
      // display.println("could tell what she would say? She");
          // display.setCursor(5, 65);
      // display.println("might offer the most natural");
          // display.setCursor(5, 17);
      // display.println("twenty-three minutes past one");
          // display.setCursor(88, 192);
      // display.println("- A Mummer's Tale");
      return;

    // Codegen for 01:24 for 1 quotations:
    case 84:
      Serial.println(F("Only one option for 01:24:"));
    Serial.println(F("01:24 - Larkin had died at 1.24am, turning to the nurse who was with him, squeezing her hand, and saying faintly, 'I am going to the inevitable.' - Hermione Lee, Body Parts: Essays on Life-Writing"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Larkin had died at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, turning to the nurse who was");
          // display.setCursor(5, 29);
      // display.println("with him, squeezing her hand, and");
          // display.setCursor(5, 41);
      // display.println("saying faintly, 'I am going to the");
          // display.setCursor(114, 5);
      // display.println("1.24am");
          // display.setCursor(109, 192);
      // display.println("- Hermione Lee");
      return;

    // Codegen for 01:25 for 1 quotations:
    case 85:
      Serial.println(F("Only one option for 01:25:"));
    Serial.println(F("01:25 - He made a last effort; he tried to rise, and sank back. His head fell on the sofa cushions. It was then twenty-five minutes past one o'clock. - Wilkie Collins, The Moonstone"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He made a last effort; he tried to");
          // display.setCursor(5, 17);
      // display.println("rise, and sank back. His head fell on");
          // display.setCursor(5, 29);
      // display.println("the sofa cushions. It was then");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("twenty-five minutes past one");
          // display.setCursor(102, 192);
      // display.println("- The Moonstone");
      return;

    // Codegen for 01:26 for 1 quotations:
    case 86:
      Serial.println(F("Only one option for 01:26:"));
    Serial.println(F("01:26 - When I reached the stop and got off, it was already one twenty-six A.M. by the bus's own clock. I had been gone over ten hours. - Tanith Lee, The Silver Metal Lover"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("When I reached the stop and got");
          // display.setCursor(5, 17);
      // display.println("off, it was already");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING by the bus's own clock. I had");
          // display.setCursor(5, 29);
      // display.println("one twenty-six A.M.");
          // display.setCursor(39, 192);
      // display.println("- The Silver Metal Lover");
      return;

    // Codegen for 01:27 for 1 quotations:
    case 87:
      Serial.println(F("Only one option for 01:27:"));
    Serial.println(F("01:27 - At twenty-seven minutes past one she felt as if she was levitating out of her body. - Deon Meyer, Trackers"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING she felt as if she was");
          // display.setCursor(5, 17);
      // display.println("twenty-seven minutes past one");
          // display.setCursor(53, 192);
      // display.println("- Deon Meyer, Trackers");
      return;

    // Codegen for 01:28 for 1 quotations:
    case 88:
      Serial.println(F("Only one option for 01:28:"));
    Serial.println(F("01:28 - It was 1:12 am when Father arrived at the police station. I did not see him until 1:28 am but I knew he was there because I could hear him. He was shouting, 'I want to see my son,' and 'Why the hell is he locked up?' and, 'Of course I'm bloody angry.' - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was 1:12 am when Father");
          // display.setCursor(5, 17);
      // display.println("arrived at the police station. I did not");
          // display.setCursor(5, 29);
      // display.println("see him until TIMESTRING");
          // display.setCursor(5, 41);
      // display.println("but I knew he was there because I");
          // display.setCursor(5, 53);
      // display.println("could hear him. He was shouting, 'I");
          // display.setCursor(5, 65);
      // display.println("want to see my son,' and 'Why the hell");
          // display.setCursor(5, 77);
      // display.println("is he locked up?' and, 'Of course");
          // display.setCursor(67, 29);
      // display.println("1:28 am");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 01:29 for 1 quotations:
    case 89:
      Serial.println(F("Only one option for 01:29:"));
    Serial.println(F("01:29 - He exited the men's room at one-twenty-nine A.M. - William Edmund Butterworth, The Narc"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He exited the men's room at");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("one-twenty-nine A.M.");
          // display.setCursor(137, 192);
      // display.println("- The Narc");
      return;

    // Codegen for 01:30 for 4 quotations:
    case 90:
      option = random(0, 4);
      Serial.print(F("4 options for 01:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:30 - Half-past one, The street lamp sputtered, The street lamp muttered, The street lamp said, \"Regard that woman ...\" - TS Eliot, Rhapsody on a Windy Night "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING, The");
                // display.setCursor(5, 17);
      // display.println("street lamp sputtered, The street lamp");
                // display.setCursor(5, 29);
      // display.println("muttered, The street lamp said, \"Regard");
                // display.setCursor(5, 5);
      // display.println("Half-past one");
                // display.setCursor(18, 192);
      // display.println("- Rhapsody on a Windy Night");
          return;
        case 1:
          Serial.println(F("01:30 - Around 1:30 A.M. the door opened and I thought it was Karla, but it was Bug, saying Karla and Laura had gone out for a stag night after they ran out of paint. - Douglas Coupland, Microserfs "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Around TIMESTRING the");
                // display.setCursor(5, 17);
      // display.println("door opened and I thought it was");
                // display.setCursor(5, 29);
      // display.println("Karla, but it was Bug, saying Karla and");
                // display.setCursor(5, 41);
      // display.println("Laura had gone out for a stag night");
                // display.setCursor(48, 5);
      // display.println("1:30 A.M.");
                // display.setCursor(123, 192);
      // display.println("- Microserfs");
          return;
        case 2:
          Serial.println(F("01:30 - The late hour helped. It simplified things. It categorized the population. Innocent bystanders were mostly home in bed. I walked for half an hour, but nothing happened. Until one thirty in the morning. Until I looped around to 22nd and Broadway. - Lee Child, Gone Tomorrow "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The late hour helped. It");
                // display.setCursor(5, 17);
      // display.println("simplified things. It categorized the");
                // display.setCursor(5, 29);
      // display.println("population. Innocent bystanders were");
                // display.setCursor(5, 41);
      // display.println("mostly home in bed. I walked for half an");
                // display.setCursor(5, 53);
      // display.println("hour, but nothing happened. Until");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 77);
      // display.println("morning. Until I looped around to 22nd");
                // display.setCursor(5, 65);
      // display.println("one thirty");
                // display.setCursor(18, 192);
      // display.println("- Lee Child, Gone Tomorrow ");
          return;
        case 3:
          Serial.println(F("01:30 - The radio alarm clock glowed 1:30 a.m. Bad karaoke throbbed through walls. I was wide awake, straightjacketed by my sweaty sheets. A headache dug its thumbs into my temples. My gut pulsed with gamma interference: I lurched to the toilet. - David Mitchell, Ghostwritten "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The radio alarm clock glowed");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING Bad");
                // display.setCursor(5, 29);
      // display.println("karaoke throbbed through walls. I was");
                // display.setCursor(5, 41);
      // display.println("wide awake, straightjacketed by my");
                // display.setCursor(5, 53);
      // display.println("sweaty sheets. A headache dug its");
                // display.setCursor(5, 65);
      // display.println("thumbs into my temples. My gut pulsed");
                // display.setCursor(5, 77);
      // display.println("with gamma interference: I lurched");
                // display.setCursor(5, 17);
      // display.println("1:30 a.m.");
                // display.setCursor(109, 192);
      // display.println("- Ghostwritten");
          return;
      } // end switch (option)

    // Codegen for 01:31 for 0 quotations:
    case 91:
      Serial.println(F("No quotes for 01:31"));
      return;

    // Codegen for 01:32 for 1 quotations:
    case 92:
      Serial.println(F("Only one option for 01:32:"));
    Serial.println(F("01:32 - She grinned at him with malicious playfulness, showing great square teeth, and then ran for the stairs. One-thirty-two. She thought that she heard a whistle blown and took the last three steps in one stride. - Graham Greene, Stamboul Train"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She grinned at him with");
          // display.setCursor(5, 17);
      // display.println("malicious playfulness, showing great");
          // display.setCursor(5, 29);
      // display.println("square teeth, and then ran for the");
          // display.setCursor(5, 41);
      // display.println("stairs. TIMESTRING.");
          // display.setCursor(5, 53);
      // display.println("She thought that she heard a whistle");
          // display.setCursor(5, 65);
      // display.println("blown and took the last three steps in");
          // display.setCursor(13, 41);
      // display.println("One-thirty-two");
          // display.setCursor(95, 192);
      // display.println("- Stamboul Train");
      return;

    // Codegen for 01:33 for 1 quotations:
    case 93:
      Serial.println(F("Only one option for 01:33:"));
    Serial.println(F("01:33 - He looked at his watch. One-thirty-three a.m. He had been asleep on this bench for over an hour and a half. - Kat Fox, Skeletons"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He looked at his watch.");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING He had been asleep on this bench");
          // display.setCursor(5, 17);
      // display.println("One-thirty-three a.m.");
          // display.setCursor(67, 192);
      // display.println("- Kat Fox, Skeletons");
      return;

    // Codegen for 01:34 for 0 quotations:
    case 94:
      Serial.println(F("No quotes for 01:34"));
      return;

    // Codegen for 01:35 for 0 quotations:
    case 95:
      Serial.println(F("No quotes for 01:35"));
      return;

    // Codegen for 01:36 for 0 quotations:
    case 96:
      Serial.println(F("No quotes for 01:36"));
      return;

    // Codegen for 01:37 for 0 quotations:
    case 97:
      Serial.println(F("No quotes for 01:37"));
      return;

    // Codegen for 01:38 for 1 quotations:
    case 98:
      Serial.println(F("Only one option for 01:38:"));
    Serial.println(F("01:38 - At one-thirty-eight am suspect left the Drive-In and drove to seven hundred and twenty three North Walnut, to the rear of the residence, and parked the car. - William Edmund Butterworth, The Narc"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("am suspect left the Drive-In and");
          // display.setCursor(5, 29);
      // display.println("drove to seven hundred and twenty");
          // display.setCursor(5, 41);
      // display.println("three North Walnut, to the rear of the");
          // display.setCursor(20, 5);
      // display.println("one-thirty-eight");
          // display.setCursor(137, 192);
      // display.println("- The Narc");
      return;

    // Codegen for 01:39 for 0 quotations:
    case 99:
      Serial.println(F("No quotes for 01:39"));
      return;

    // Codegen for 01:40 for 1 quotations:
    case 100:
      Serial.println(F("Only one option for 01:40:"));
    Serial.println(F("01:40 - March twelfth, one-forty am, she leaves a group of drinking buddies to catch a bus home. She never makes it. - Kathy Reichs, Bones to Ashes"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("March twelfth,");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, she leaves a group of drinking");
          // display.setCursor(5, 29);
      // display.println("buddies to catch a bus home. She never");
          // display.setCursor(98, 5);
      // display.println("one-forty am");
          // display.setCursor(95, 192);
      // display.println("- Bones to Ashes");
      return;

    // Codegen for 01:41 for 0 quotations:
    case 101:
      Serial.println(F("No quotes for 01:41"));
      return;

    // Codegen for 01:42 for 0 quotations:
    case 102:
      Serial.println(F("No quotes for 01:42"));
      return;

    // Codegen for 01:43 for 0 quotations:
    case 103:
      Serial.println(F("No quotes for 01:43"));
      return;

    // Codegen for 01:44 for 1 quotations:
    case 104:
      Serial.println(F("Only one option for 01:44:"));
    Serial.println(F("01:44 - She knew it was the stress, two long days of stress, and she looked at her watch, sixteen minutes to two, and she almost leaped with fright, a shock wave rippling through her body, where had the time gone? - Deon Meyer, Trackers"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She knew it was the stress, two");
          // display.setCursor(5, 17);
      // display.println("long days of stress, and she looked at");
          // display.setCursor(5, 29);
      // display.println("her watch,");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING, and she almost leaped with");
          // display.setCursor(5, 65);
      // display.println("fright, a shock wave rippling through");
          // display.setCursor(5, 41);
      // display.println("sixteen minutes to two");
          // display.setCursor(53, 192);
      // display.println("- Deon Meyer, Trackers");
      return;

    // Codegen for 01:45 for 0 quotations:
    case 105:
      Serial.println(F("No quotes for 01:45"));
      return;

    // Codegen for 01:46 for 1 quotations:
    case 106:
      Serial.println(F("Only one option for 01:46:"));
    Serial.println(F("01:46 - That particular phenomenom got Presto up at one forty-six a.m.; silently, he painted his face and naked body with camouflage paint. He opened the door to his room and stepped out into the common lobby. - J.W. Stockton, Fardnock's Revenge"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("That particular phenomenom got");
          // display.setCursor(5, 17);
      // display.println("Presto up at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING; silently, he painted his face");
          // display.setCursor(5, 41);
      // display.println("and naked body with camouflage");
          // display.setCursor(5, 53);
      // display.println("paint. He opened the door to his room");
          // display.setCursor(5, 65);
      // display.println("and stepped out into the common");
          // display.setCursor(42, 17);
      // display.println("one forty-six a.m.");
          // display.setCursor(67, 192);
      // display.println("- Fardnock's Revenge");
      return;

    // Codegen for 01:47 for 0 quotations:
    case 107:
      Serial.println(F("No quotes for 01:47"));
      return;

    // Codegen for 01:48 for 0 quotations:
    case 108:
      Serial.println(F("No quotes for 01:48"));
      return;

    // Codegen for 01:49 for 0 quotations:
    case 109:
      Serial.println(F("No quotes for 01:49"));
      return;

    // Codegen for 01:50 for 1 quotations:
    case 110:
      Serial.println(F("Only one option for 01:50:"));
    Serial.println(F("01:50 - No, she thought: every spinster legal secretary, bartender, and orthodontist had a cat or two—and she could not tolerate (not even as a lark, not even for a moment at ten minutes before two AM), embodying cliché. - Michelle Herman, Dog"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("No, she thought: every spinster");
          // display.setCursor(5, 17);
      // display.println("legal secretary, bartender, and");
          // display.setCursor(5, 29);
      // display.println("orthodontist had a cat or two—and she could");
          // display.setCursor(5, 41);
      // display.println("not tolerate (not even as a lark, not");
          // display.setCursor(5, 53);
      // display.println("even for a moment at");
          // display.setCursor(5, 65);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("ten minutes before two AM");
          // display.setCursor(53, 192);
      // display.println("- Michelle Herman, Dog");
      return;

    // Codegen for 01:51 for 1 quotations:
    case 111:
      Serial.println(F("Only one option for 01:51:"));
    Serial.println(F("01:51 - At nine minutes to two the other vehicle arrived. At first Milla didn't believe her eyes: that shape, those markings. - Deon Meyer, Trackers"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING the other vehicle arrived. At");
          // display.setCursor(5, 29);
      // display.println("first Milla didn't believe her eyes:");
          // display.setCursor(20, 5);
      // display.println("nine minutes to two");
          // display.setCursor(53, 192);
      // display.println("- Deon Meyer, Trackers");
      return;

    // Codegen for 01:52 for 0 quotations:
    case 112:
      Serial.println(F("No quotes for 01:52"));
      return;

    // Codegen for 01:53 for 0 quotations:
    case 113:
      Serial.println(F("No quotes for 01:53"));
      return;

    // Codegen for 01:54 for 1 quotations:
    case 114:
      Serial.println(F("Only one option for 01:54:"));
    Serial.println(F("01:54 - Six minutes to two. Janina Mentz watched the screen, where the small program window flickered with files scrolling too fast to read, searching for the keyword. - Dean Koontz, Trackers"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. Janina Mentz watched the");
          // display.setCursor(5, 29);
      // display.println("screen, where the small program window");
          // display.setCursor(5, 41);
      // display.println("flickered with files scrolling too fast");
          // display.setCursor(5, 53);
      // display.println("to read, searching for the");
          // display.setCursor(5, 5);
      // display.println("Six minutes to two");
          // display.setCursor(46, 192);
      // display.println("- Dean Koontz, Trackers");
      return;

    // Codegen for 01:55 for 0 quotations:
    case 115:
      Serial.println(F("No quotes for 01:55"));
      return;

    // Codegen for 01:56 for 0 quotations:
    case 116:
      Serial.println(F("No quotes for 01:56"));
      return;

    // Codegen for 01:57 for 0 quotations:
    case 117:
      Serial.println(F("No quotes for 01:57"));
      return;

    // Codegen for 01:58 for 0 quotations:
    case 118:
      Serial.println(F("No quotes for 01:58"));
      return;

    // Codegen for 01:59 for 0 quotations:
    case 119:
      Serial.println(F("No quotes for 01:59"));
      return;

    // Codegen for 02:00 for 6 quotations:
    case 120:
      option = random(0, 6);
      Serial.print(F("6 options for 02:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:00 - The middle of the night? Alec asked sharply. \"Can you be more definite?\" \"About two. Just past.\" Daisy noted that he expressed no concern for her safety. - Carola Dunn, Dead in the water "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The middle of the night? Alec");
                // display.setCursor(5, 17);
      // display.println("asked sharply. \"Can you be more");
                // display.setCursor(5, 29);
      // display.println("definite?\"");
                // display.setCursor(5, 41);
      // display.println("\"TIMESTRING.\" Daisy noted that he expressed");
                // display.setCursor(17, 29);
      // display.println("About two. Just past");
                // display.setCursor(74, 192);
      // display.println("- Dead in the water");
          return;
        case 1:
          Serial.println(F("02:00 - As two o'clock pealed from the cathedral bell, Jean Valjean awoke. - Victor Hugo, Les Miserables"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("pealed from the cathedral bell, Jean");
                // display.setCursor(20, 5);
      // display.println("two o'clock");
                // display.setCursor(4, 192);
      // display.println("- Victor Hugo, Les Miserables");
          return;
        case 2:
          Serial.println(F("02:00 - Get on plane at 2 A.M., amid bundles, chickens, gypsies, sit opposite pair of plump fortune tellers who groan and (very discreetly) throw up all the way to Tbilisi. - J. Updike, Bech: A Book"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Get on plane at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, amid bundles, chickens,");
                // display.setCursor(5, 29);
      // display.println("gypsies, sit opposite pair of plump");
                // display.setCursor(5, 41);
      // display.println("fortune tellers who groan and (very");
                // display.setCursor(93, 5);
      // display.println("2 A.M.");
                // display.setCursor(32, 192);
      // display.println("- J. Updike, Bech: A Book");
          return;
        case 3:
          Serial.println(F("02:00 - Lady Macbeth: Out, damned spot! out, I say!—One: two: why, then, 'tis time to do't.—Hell is murky!—Fie, my lord, fie! a soldier, and afeard? What need we fear who knows it, when none can call our power to account?—Yet who would have thought the old man to have had so much blood in him. - Shakespeare, Macbeth"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Lady Macbeth: Out, damned spot!");
                // display.setCursor(5, 17);
      // display.println("out, I say!—One: TIMESTRING:");
                // display.setCursor(5, 29);
      // display.println("why, then, 'tis time to do't.—Hell is");
                // display.setCursor(5, 41);
      // display.println("murky!—Fie, my lord, fie! a soldier, and");
                // display.setCursor(5, 53);
      // display.println("afeard? What need we fear who knows it,");
                // display.setCursor(5, 65);
      // display.println("when none can call our power to");
                // display.setCursor(5, 77);
      // display.println("account?—Yet who would have thought the old");
                // display.setCursor(82, 17);
      // display.println("two");
                // display.setCursor(53, 192);
      // display.println("- Shakespeare, Macbeth");
          return;
        case 4:
          Serial.println(F("02:00 - After an unnaturally prolonged wheezing there followed a shrill, nasty, and as it were unexpectedly rapid, chime - as though someone were suddenly jumping forward. It struck two. I woke up, though I had indeed not been asleep but lying half-conscious. - Fyodor Dostoyevsky, Notes from the underground "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("After an unnaturally prolonged");
                // display.setCursor(5, 17);
      // display.println("wheezing there followed a shrill,");
                // display.setCursor(5, 29);
      // display.println("nasty, and as it were unexpectedly");
                // display.setCursor(5, 41);
      // display.println("rapid, chime - as though someone were");
                // display.setCursor(5, 53);
      // display.println("suddenly jumping forward.");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING I");
                // display.setCursor(5, 77);
      // display.println("woke up, though I had indeed not been");
                // display.setCursor(5, 65);
      // display.println("It struck two.");
                // display.setCursor(11, 192);
      // display.println("- Notes from the underground");
          return;
        case 5:
          Serial.println(F("02:00 - When all had grown quiet and Fyodor Pavlovich went to bed at around two o'clock, Ivan Fyodorovich also went to bed with the firm resolve of falling quickly asleep, as he felt horribly exhausted. - Fyodor Dostoyevsky, The Brothers Karamazov "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("When all had grown quiet and");
                // display.setCursor(5, 17);
      // display.println("Fyodor Pavlovich went to bed at around");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, Ivan");
                // display.setCursor(5, 41);
      // display.println("Fyodorovich also went to bed with the firm");
                // display.setCursor(5, 53);
      // display.println("resolve of falling quickly asleep, as");
                // display.setCursor(5, 29);
      // display.println("two o'clock");
                // display.setCursor(39, 192);
      // display.println("- The Brothers Karamazov");
          return;
      } // end switch (option)

    // Codegen for 02:01 for 1 quotations:
    case 121:
      Serial.println(F("Only one option for 02:01:"));
    Serial.println(F("02:01 - I checked my watch. 2.01am. The cheeseburger Happy Meal was now only a distant memory. I cursed myself for not also ordering a breakfast sandwich for the morning. - Reif Larsen, The Selected Works of T.S. Spivet"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I checked my watch.");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING The cheeseburger Happy Meal");
          // display.setCursor(5, 29);
      // display.println("was now only a distant memory. I");
          // display.setCursor(5, 41);
      // display.println("cursed myself for not also ordering a");
          // display.setCursor(121, 5);
      // display.println("2.01am.");
          // display.setCursor(116, 192);
      // display.println("- Reif Larsen");
      return;

    // Codegen for 02:02 for 1 quotations:
    case 122:
      Serial.println(F("Only one option for 02:02:"));
    Serial.println(F("02:02 - Wake up. \"Having the worst dream.\" \"I should certainly say you were.\" \"It was awful. It just went on and on.\" \"I shook you and shook you and.\" \"Time is it.\" \"It's nearly - almost 2:04.\" - David Foster Wallace, Oblivion"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Wake up. \"Having the worst");
          // display.setCursor(5, 17);
      // display.println("dream.\" \"I should certainly say you");
          // display.setCursor(5, 29);
      // display.println("were.\" \"It was awful. It just went on");
          // display.setCursor(5, 41);
      // display.println("and on.\" \"I shook you and shook you");
          // display.setCursor(5, 53);
      // display.println("and.\" \"Time is it.\" \"It's nearly -");
          // display.setCursor(5, 65);
      // display.println("almost 2:04");
          // display.setCursor(137, 192);
      // display.println("- Oblivion");
      return;

    // Codegen for 02:03 for 0 quotations:
    case 123:
      Serial.println(F("No quotes for 02:03"));
      return;

    // Codegen for 02:04 for 0 quotations:
    case 124:
      Serial.println(F("No quotes for 02:04"));
      return;

    // Codegen for 02:05 for 2 quotations:
    case 125:
      option = random(0, 2);
      Serial.print(F("2 options for 02:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:05 - At 2.05 the fizzy tights came crackling off. - Martin Amis, London Fields"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING the fizzy");
                // display.setCursor(20, 5);
      // display.println("2.05");
                // display.setCursor(11, 192);
      // display.println("- Martin Amis, London Fields");
          return;
        case 1:
          Serial.println(F("02:05 - What time is it?’ ‘Five minutes past two, sir,’ answered the man, looking at the clock and yawning. ‘Five minutes past two? How horribly late! - Oscar Wilde, The Picture of Dorian Gray "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What time is it?’");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("‘TIMESTRING, sir,’ answered the man,");
                // display.setCursor(5, 41);
      // display.println("looking at the clock and yawning.");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("Five minutes past two");
                // display.setCursor(11, 192);
      // display.println("- The Picture of Dorian Gray");
          return;
      } // end switch (option)

    // Codegen for 02:06 for 0 quotations:
    case 126:
      Serial.println(F("No quotes for 02:06"));
      return;

    // Codegen for 02:07 for 3 quotations:
    case 127:
      option = random(0, 3);
      Serial.print(F("3 options for 02:07. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:07 - At 2:07 a.m. I decided that I wanted a drink of orange squash before I brushed my teeth and got into bed, so I went downstairs to the kitchen. Father was sitting on the sofa watching snooker on the television and drinking whisky. There were tears coming out of his eyes. - Mark Haddon, The Curious Incident of the Dog in the Night-Time"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING I");
                // display.setCursor(5, 17);
      // display.println("decided that I wanted a drink of orange");
                // display.setCursor(5, 29);
      // display.println("squash before I brushed my teeth and");
                // display.setCursor(5, 41);
      // display.println("got into bed, so I went downstairs to");
                // display.setCursor(5, 53);
      // display.println("the kitchen. Father was sitting on");
                // display.setCursor(5, 65);
      // display.println("the sofa watching snooker on the");
                // display.setCursor(5, 77);
      // display.println("television and drinking whisky. There");
                // display.setCursor(20, 5);
      // display.println("2:07 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 1:
          Serial.println(F("02:07 - But I couldn't sleep. And I got out of bed at 2.07 am and I felt scared of Mr. Shears so I went downstairs and out of the front door into Chapter Road. - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("But I couldn't sleep. And I got");
                // display.setCursor(5, 17);
      // display.println("out of bed at TIMESTRING and");
                // display.setCursor(5, 29);
      // display.println("I felt scared of Mr. Shears so I");
                // display.setCursor(5, 41);
      // display.println("went downstairs and out of the front");
                // display.setCursor(61, 17);
      // display.println("2.07 am");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 2:
          Serial.println(F("02:07 - Saturday, 17 November — 2.07 a.m. I cannot sleep. Ben is upstairs, back in bed, and I am writing this in the kitchen. He thinks I am drinking a cup of cocoa that he has just made for me. He thinks I will come back to bed soon. I will, but first I must write again. - S. J. Watson, Before I Go to Sleep "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Saturday, 17 November —");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING I cannot");
                // display.setCursor(5, 29);
      // display.println("sleep. Ben is upstairs, back in bed,");
                // display.setCursor(5, 41);
      // display.println("and I am writing this in the kitchen.");
                // display.setCursor(5, 53);
      // display.println("He thinks I am drinking a cup of");
                // display.setCursor(5, 65);
      // display.println("cocoa that he has just made for me. He");
                // display.setCursor(5, 77);
      // display.println("thinks I will come back to bed soon. I");
                // display.setCursor(5, 17);
      // display.println("2.07 a.m.");
                // display.setCursor(53, 192);
      // display.println("- Before I Go to Sleep");
          return;
      } // end switch (option)

    // Codegen for 02:08 for 0 quotations:
    case 128:
      Serial.println(F("No quotes for 02:08"));
      return;

    // Codegen for 02:09 for 0 quotations:
    case 129:
      Serial.println(F("No quotes for 02:09"));
      return;

    // Codegen for 02:10 for 2 quotations:
    case 130:
      option = random(0, 2);
      Serial.print(F("2 options for 02:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:10 - Ten minutes past two, sir, answered the man, looking at the clock and blinking. \"Ten minutes past two? How horribly late!\" - Oscar Wilde, The Picture of Dorian Gray "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, sir, answered the man, looking");
                // display.setCursor(5, 29);
      // display.println("at the clock and blinking.");
                // display.setCursor(5, 41);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("Ten minutes past two");
                // display.setCursor(11, 192);
      // display.println("- The Picture of Dorian Gray");
          return;
        case 1:
          Serial.println(F("02:10 - Decided to get under way again as soon as there is any clearance. Snowing and blowing, force about fifty or sixty miles an hour. February 26, Saturday - Richards went out 1:10am and found it clearing a bit, so we got under way as soon as possible, which was 2:10am - Ernest Shackleton, South: The Endurance Expedition"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Decided to get under way again as");
                // display.setCursor(5, 17);
      // display.println("soon as there is any clearance.");
                // display.setCursor(5, 29);
      // display.println("Snowing and blowing, force about fifty");
                // display.setCursor(5, 41);
      // display.println("or sixty miles an hour. February");
                // display.setCursor(5, 53);
      // display.println("26, Saturday - Richards went out");
                // display.setCursor(5, 65);
      // display.println("1:10am and found it clearing a bit, so");
                // display.setCursor(5, 77);
      // display.println("we got under way as soon as");
                // display.setCursor(73, 89);
      // display.println("2:10am");
                // display.setCursor(74, 192);
      // display.println("- Ernest Shackleton");
          return;
      } // end switch (option)

    // Codegen for 02:11 for 0 quotations:
    case 131:
      Serial.println(F("No quotes for 02:11"));
      return;

    // Codegen for 02:12 for 1 quotations:
    case 132:
      Serial.println(F("Only one option for 02:12:"));
    Serial.println(F("02:12 - Then the lights went out all over the city. It happened at 2.12am according to power-house records, but Blake's diary gives no indication of the time. The entry is merely, 'Lights out - God help me.' - HP Lovecraft, The Haunter of the Dark"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Then the lights went out all over");
          // display.setCursor(5, 17);
      // display.println("the city. It happened at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING according to power-house");
          // display.setCursor(5, 41);
      // display.println("records, but Blake's diary gives no");
          // display.setCursor(5, 53);
      // display.println("indication of the time. The entry is");
          // display.setCursor(132, 17);
      // display.println("2.12am");
          // display.setCursor(32, 192);
      // display.println("- The Haunter of the Dark");
      return;

    // Codegen for 02:13 for 1 quotations:
    case 133:
      Serial.println(F("Only one option for 02:13:"));
    Serial.println(F("02:13 - Now, listen: your destination is Friday, 4 August 1944, and the window will punch through at 22.30 hours. You're going to a dimension that diverged from our own at 02.13 on the morning of Wednesday 20 February 1918, over twenty-six years earlier. - Chris James, The Second Internet Cafe, Part 1: The Dimension Researcher"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Now, listen: your destination is");
          // display.setCursor(5, 17);
      // display.println("Friday, 4 August 1944, and the window");
          // display.setCursor(5, 29);
      // display.println("will punch through at 22.30 hours.");
          // display.setCursor(5, 41);
      // display.println("You're going to a dimension that");
          // display.setCursor(5, 53);
      // display.println("diverged from our own at");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING on the morning of Wednesday 20");
          // display.setCursor(5, 77);
      // display.println("February 1918, over twenty-six years");
          // display.setCursor(102, 53);
      // display.println("02.13");
          // display.setCursor(116, 192);
      // display.println("- Chris James");
      return;

    // Codegen for 02:14 for 0 quotations:
    case 134:
      Serial.println(F("No quotes for 02:14"));
      return;

    // Codegen for 02:15 for 2 quotations:
    case 135:
      option = random(0, 2);
      Serial.print(F("2 options for 02:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:15 - At 2.15am a policeman observed the place in darkness, but with the stranger's motor still at the curb. - H.P. Lovecraft, The Shadow Out of Time"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING a policeman");
                // display.setCursor(5, 17);
      // display.println("observed the place in darkness, but with");
                // display.setCursor(5, 29);
      // display.println("the stranger's motor still at the");
                // display.setCursor(20, 5);
      // display.println("2.15am");
                // display.setCursor(39, 192);
      // display.println("- The Shadow Out of Time");
          return;
        case 1:
          Serial.println(F("02:15 - It did. When the alarm rang at two fifteen, Lew shut it off, snapped on the little bedside lamp, then swung his feet to the floor to sit on the edge of the bed, holding his eyes open. - Jack Finney, The Night People "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It did. When the alarm rang at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, Lew");
                // display.setCursor(5, 29);
      // display.println("shut it off, snapped on the little");
                // display.setCursor(5, 41);
      // display.println("bedside lamp, then swung his feet to the");
                // display.setCursor(5, 53);
      // display.println("floor to sit on the edge of the bed,");
                // display.setCursor(5, 17);
      // display.println("two fifteen");
                // display.setCursor(81, 192);
      // display.println("- The Night People");
          return;
      } // end switch (option)

    // Codegen for 02:16 for 0 quotations:
    case 136:
      Serial.println(F("No quotes for 02:16"));
      return;

    // Codegen for 02:17 for 2 quotations:
    case 137:
      option = random(0, 2);
      Serial.print(F("2 options for 02:17. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:17 - What time is it now? He turned her very dusty alarm clock to check. \"Two-seventeen,\" he marveled. It was the strangest time he'd seen in his entire life. \"I apologize that the room is so messy,\" Lalitha said. - Jonathan Franzen, Freedom "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What time is it now? He turned her");
                // display.setCursor(5, 17);
      // display.println("very dusty alarm clock to check.");
                // display.setCursor(5, 29);
      // display.println("\"TIMESTRING,\"");
                // display.setCursor(5, 41);
      // display.println("he marveled. It was the strangest");
                // display.setCursor(5, 53);
      // display.println("time he'd seen in his entire life. \"I");
                // display.setCursor(5, 65);
      // display.println("apologize that the room is so messy,\"");
                // display.setCursor(5, 29);
      // display.println("Two-seventeen");
                // display.setCursor(11, 192);
      // display.println("- Jonathan Franzen, Freedom ");
          return;
        case 1:
          Serial.println(F("02:17 - One of the \"choppers\" stopped, did an about-turn and came back to me. The flare spluttered and faded, and now the glare of the spotlight blinded me. I sat very still. It was 2.17. Against the noise of the blades a deeper resonant sound bit into the chill black air. - Len Deighton, The Ipcress File"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("One of the \"choppers\" stopped,");
                // display.setCursor(5, 17);
      // display.println("did an about-turn and came back to");
                // display.setCursor(5, 29);
      // display.println("me. The flare spluttered and faded,");
                // display.setCursor(5, 41);
      // display.println("and now the glare of the spotlight");
                // display.setCursor(5, 53);
      // display.println("blinded me. I sat very still. It was");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING. Against the noise of the blades");
                // display.setCursor(5, 77);
      // display.println("a deeper resonant sound bit into");
                // display.setCursor(174, 53);
      // display.println("2.17");
                // display.setCursor(81, 192);
      // display.println("- The Ipcress File");
          return;
      } // end switch (option)

    // Codegen for 02:18 for 1 quotations:
    case 138:
      Serial.println(F("Only one option for 02:18:"));
    Serial.println(F("02:18 - It was 2:18 in the morning, and Donna could see no one else in any other office working so late. - Jane Smiley, Moo"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, and Donna could see no one else");
          // display.setCursor(5, 29);
      // display.println("in any other office working so");
          // display.setCursor(42, 5);
      // display.println("2:18 in the morning");
          // display.setCursor(81, 192);
      // display.println("- Jane Smiley, Moo");
      return;

    // Codegen for 02:19 for 0 quotations:
    case 139:
      Serial.println(F("No quotes for 02:19"));
      return;

    // Codegen for 02:20 for 2 quotations:
    case 140:
      option = random(0, 2);
      Serial.print(F("2 options for 02:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:20 - She turned abruptly to the nurse and asked the time. 'Two-twenty' 'Ah...Two-twenty!' Genevieve repeated, as though there was something urgent to be done. - Antoine de Saint Exupery, Southern Mail"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She turned abruptly to the nurse");
                // display.setCursor(5, 17);
      // display.println("and asked the time.");
                // display.setCursor(5, 29);
      // display.println("'TIMESTRING'");
                // display.setCursor(5, 41);
      // display.println("'Ah...TIMESTRING!' Genevieve repeated, as");
                // display.setCursor(5, 53);
      // display.println("though there was something urgent to");
                // display.setCursor(18, 29);
      // display.println("Two-twenty");
                // display.setCursor(102, 192);
      // display.println("- Southern Mail");
          return;
        case 1:
          Serial.println(F("02:20 - The night of his third walk Lew slept in his own apartment. When his eyes opened at two twenty, by the green hands of his alarm, he knew that this time he'd actually been waiting for it in his sleep. - Jack Finney, The Night People "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The night of his third walk Lew");
                // display.setCursor(5, 17);
      // display.println("slept in his own apartment. When his");
                // display.setCursor(5, 29);
      // display.println("eyes opened at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING, by the green hands of his alarm,");
                // display.setCursor(5, 53);
      // display.println("he knew that this time he'd");
                // display.setCursor(5, 65);
      // display.println("actually been waiting for it in his");
                // display.setCursor(68, 29);
      // display.println("two twenty");
                // display.setCursor(81, 192);
      // display.println("- The Night People");
          return;
      } // end switch (option)

    // Codegen for 02:21 for 2 quotations:
    case 141:
      option = random(0, 2);
      Serial.print(F("2 options for 02:21. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:21 - 2:21 a.m. Lance-Corporal Hartmann emerged from the house in the Rue de Londres. - Hans Hellmut Kirst, The Night of the Generals"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("Lance-Corporal Hartmann emerged from the");
                // display.setCursor(5, 5);
      // display.println("2:21 a.m.");
                // display.setCursor(18, 192);
      // display.println("- The Night of the Generals");
          return;
        case 1:
          Serial.println(F("02:21 - I lifted my left hand and pressed on the light of my digital wristwatch. Two-twenty-one. It was midnight when we headed underground, so only a little over two hours had passed. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I lifted my left hand and pressed");
                // display.setCursor(5, 17);
      // display.println("on the light of my digital");
                // display.setCursor(5, 29);
      // display.println("wristwatch. TIMESTRING.");
                // display.setCursor(5, 41);
      // display.println("It was midnight when we headed");
                // display.setCursor(5, 53);
      // display.println("underground, so only a little over two hours");
                // display.setCursor(17, 29);
      // display.println("Two-twenty-one");
                // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
          return;
      } // end switch (option)

    // Codegen for 02:22 for 0 quotations:
    case 142:
      Serial.println(F("No quotes for 02:22"));
      return;

    // Codegen for 02:23 for 0 quotations:
    case 143:
      Serial.println(F("No quotes for 02:23"));
      return;

    // Codegen for 02:24 for 1 quotations:
    case 144:
      Serial.println(F("Only one option for 02:24:"));
    Serial.println(F("02:24 - It was 2.24am. She stumbled out of bed, tripping on her shoes that she’d kicked off earlier and pulled on a jumper. - Maggie O’Farrell, After You’d Gone"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING She");
          // display.setCursor(5, 17);
      // display.println("stumbled out of bed, tripping on her");
          // display.setCursor(5, 29);
      // display.println("shoes that she’d kicked off earlier");
          // display.setCursor(42, 5);
      // display.println("2.24am.");
          // display.setCursor(81, 192);
      // display.println("- After You’d Gone");
      return;

    // Codegen for 02:25 for 1 quotations:
    case 145:
      Serial.println(F("Only one option for 02:25:"));
    Serial.println(F("02:25 - You see it is time: 2.25am. You get out of bed. - David Peace, Nineteen Eighty-Three: The Red Riding Quartet, Book Four"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("You see it is time:");
          // display.setCursor(115, 5);
      // display.println("2.25am.");
          // display.setCursor(116, 192);
      // display.println("- David Peace");
      return;

    // Codegen for 02:26 for 1 quotations:
    case 146:
      Serial.println(F("Only one option for 02:26:"));
    Serial.println(F("02:26 - Listened to a voicemail message left at 2.26am by Claude. - Richard Mason, The Lighted Rooms"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Listened to a voicemail message");
          // display.setCursor(25, 17);
      // display.println("2.26am");
          // display.setCursor(74, 192);
      // display.println("- The Lighted Rooms");
      return;

    // Codegen for 02:27 for 1 quotations:
    case 147:
      Serial.println(F("Only one option for 02:27:"));
    Serial.println(F("02:27 - The moon didn’t shine again until 2.27am. It was enough to show Wallander that he was positioned some distance below the tree. - Henning Mankell, One Step Behind"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The moon didn’t shine again");
          // display.setCursor(5, 17);
      // display.println("until TIMESTRING It was");
          // display.setCursor(5, 29);
      // display.println("enough to show Wallander that he was");
          // display.setCursor(11, 17);
      // display.println("2.27am.");
          // display.setCursor(88, 192);
      // display.println("- One Step Behind");
      return;

    // Codegen for 02:28 for 1 quotations:
    case 148:
      Serial.println(F("Only one option for 02:28:"));
    Serial.println(F("02:28 - 2.28am: Ran out of sheep and began counting other farmyard animals. - Mike Gayle, Mr Commitment"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING: Ran out of");
          // display.setCursor(5, 17);
      // display.println("sheep and began counting other");
          // display.setCursor(5, 5);
      // display.println("2.28am");
          // display.setCursor(18, 192);
      // display.println("- Mike Gayle, Mr Commitment");
      return;

    // Codegen for 02:29 for 0 quotations:
    case 149:
      Serial.println(F("No quotes for 02:29"));
      return;

    // Codegen for 02:30 for 4 quotations:
    case 150:
      option = random(0, 4);
      Serial.print(F("4 options for 02:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:30 - My old drum majorette's outfit. The one I wore to the State Finals. Listen, we can't tie up the phones like this. \"Why not?\" said Harry. \"Who's going to call at 2:30 a.m. with a better idea? Yippee, to quote Lew, we're having a party! What're we serving, Lew?\" - Jack Finney, The Night People "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("My old drum majorette's outfit.");
                // display.setCursor(5, 17);
      // display.println("The one I wore to the State Finals.");
                // display.setCursor(5, 29);
      // display.println("Listen, we can't tie up the phones like");
                // display.setCursor(5, 41);
      // display.println("this. \"Why not?\" said Harry.");
                // display.setCursor(5, 53);
      // display.println("\"Who's going to call at");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING with a better idea? Yippee, to");
                // display.setCursor(5, 77);
      // display.println("quote Lew, we're having a party!");
                // display.setCursor(108, 53);
      // display.println("2:30 a.m.");
                // display.setCursor(81, 192);
      // display.println("- The Night People");
          return;
        case 1:
          Serial.println(F("02:30 - At about half past two she had been woken by the creak of footsteps out on the stairs. At first she had been frightened. - Sarah Waters, The Little Stranger"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At about");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING she had been woken by the creak");
                // display.setCursor(5, 29);
      // display.println("of footsteps out on the stairs. At");
                // display.setCursor(56, 5);
      // display.println("half past two");
                // display.setCursor(60, 192);
      // display.println("- The Little Stranger");
          return;
        case 2:
          Serial.println(F("02:30 - Inc, I tried to pull her off about 0230, and there was this fucking… sound. - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Inc, I tried to pull her off about");
                // display.setCursor(5, 17);
      // display.println("0TIMESTRING, and there was");
                // display.setCursor(5, 17);
      // display.println("230");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 3:
          Serial.println(F("02:30 - It is 2.30am and I am tight. As a tick, as a lord, as a newt. Must write this down before the sublime memories fade and blur. - William Boyd, Any Human Heart "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It is TIMESTRING and I am");
                // display.setCursor(5, 17);
      // display.println("tight. As a tick, as a lord, as a newt.");
                // display.setCursor(5, 29);
      // display.println("Must write this down before the");
                // display.setCursor(35, 5);
      // display.println("2.30am");
                // display.setCursor(88, 192);
      // display.println("- Any Human Heart");
          return;
      } // end switch (option)

    // Codegen for 02:31 for 1 quotations:
    case 151:
      Serial.println(F("Only one option for 02:31:"));
    Serial.println(F("02:31 - And then I woke up because there were people shouting in the flat and it was 2.31am. And one of the people was Father and I was frightened. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("And then I woke up because there");
          // display.setCursor(5, 17);
      // display.println("were people shouting in the flat and");
          // display.setCursor(5, 29);
      // display.println("it was TIMESTRING And one");
          // display.setCursor(5, 41);
      // display.println("of the people was Father and I was");
          // display.setCursor(30, 29);
      // display.println("2.31am.");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 02:32 for 1 quotations:
    case 152:
      Serial.println(F("Only one option for 02:32:"));
    Serial.println(F("02:32 - The last guests departed at 2.32 a.m., two hours and two minutes after the scheduled completion time. - Graeme Simsion, The Rosie Project"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The last guests departed at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, two hours");
          // display.setCursor(5, 29);
      // display.println("and two minutes after the scheduled");
          // display.setCursor(5, 17);
      // display.println("2.32 a.m.");
          // display.setCursor(74, 192);
      // display.println("- The Rosie Project");
      return;

    // Codegen for 02:33 for 1 quotations:
    case 153:
      Serial.println(F("Only one option for 02:33:"));
    Serial.println(F("02:33 - But it wasn't going on! It was two-thirty-four, well. Two-thirty-three and nothing had happened. Suppose he got a room call, or the elevator night-bell rang, now. - Jim Thompson, A Swell-looking Babe"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("But it wasn't going on! It was");
          // display.setCursor(5, 17);
      // display.println("two-thirty-four, well.");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING and nothing had happened.");
          // display.setCursor(5, 41);
      // display.println("Suppose he got a room call, or the");
          // display.setCursor(58, 17);
      // display.println("Two-thirty-three");
          // display.setCursor(53, 192);
      // display.println("- A Swell-looking Babe");
      return;

    // Codegen for 02:34 for 1 quotations:
    case 154:
      Serial.println(F("Only one option for 02:34:"));
    Serial.println(F("02:34 - It was two-thirty-four, well. Two-thirty-three and nothing had happened. Suppose he got a room call, or the elevator night-bell rang, now. - Jim Thompson, A Swell-looking Babe"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, well. Two-thirty-three and");
          // display.setCursor(5, 29);
      // display.println("nothing had happened. Suppose he got a");
          // display.setCursor(5, 41);
      // display.println("room call, or the elevator");
          // display.setCursor(42, 5);
      // display.println("two-thirty-four");
          // display.setCursor(53, 192);
      // display.println("- A Swell-looking Babe");
      return;

    // Codegen for 02:35 for 1 quotations:
    case 155:
      Serial.println(F("Only one option for 02:35:"));
    Serial.println(F("02:35 - For what happened at 2.35 we have the testimony of the priest, a young, intelligent, and well-educated person; of Patrolman William J. Monohan of the Central Station, an officer of the highest reliability who had paused at that part of his beat to inspect the crowd. - HP Lovecraft, The Haunter of the Dark"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("For what happened at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING we have the testimony of the");
          // display.setCursor(5, 29);
      // display.println("priest, a young, intelligent, and");
          // display.setCursor(5, 41);
      // display.println("well-educated person; of Patrolman William");
          // display.setCursor(5, 53);
      // display.println("J. Monohan of the Central Station,");
          // display.setCursor(5, 65);
      // display.println("an officer of the highest");
          // display.setCursor(5, 77);
      // display.println("reliability who had paused at that part of");
          // display.setCursor(128, 5);
      // display.println("2.35");
          // display.setCursor(32, 192);
      // display.println("- The Haunter of the Dark");
      return;

    // Codegen for 02:36 for 1 quotations:
    case 156:
      Serial.println(F("Only one option for 02:36:"));
    Serial.println(F("02:36 - It was about 2.36am when a provost colonel arrived to arrest me. At 2.36 1/2 I remembered the big insulating gauntlets. But even had I remembered before, what could I have done? - Len Deighton, The Ipcress File"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was about TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("when a provost colonel arrived to");
          // display.setCursor(5, 29);
      // display.println("arrest me. At 2.36 1/2 I remembered the");
          // display.setCursor(5, 41);
      // display.println("big insulating gauntlets. But even");
          // display.setCursor(5, 53);
      // display.println("had I remembered before, what could");
          // display.setCursor(78, 5);
      // display.println("2.36am");
          // display.setCursor(81, 192);
      // display.println("- The Ipcress File");
      return;

    // Codegen for 02:37 for 1 quotations:
    case 157:
      Serial.println(F("Only one option for 02:37:"));
    Serial.println(F("02:37 - June 13, 1990. Thirty-seven minutes past two in the morning. And sixteen seconds. - Stephen King, The Stand"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("June 13, 1990.");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING in the morning. And sixteen");
          // display.setCursor(5, 17);
      // display.println("Thirty-seven minutes past two");
          // display.setCursor(32, 192);
      // display.println("- Stephen King, The Stand");
      return;

    // Codegen for 02:38 for 0 quotations:
    case 158:
      Serial.println(F("No quotes for 02:38"));
      return;

    // Codegen for 02:39 for 0 quotations:
    case 159:
      Serial.println(F("No quotes for 02:39"));
      return;

    // Codegen for 02:40 for 0 quotations:
    case 160:
      Serial.println(F("No quotes for 02:40"));
      return;

    // Codegen for 02:41 for 0 quotations:
    case 161:
      Serial.println(F("No quotes for 02:41"));
      return;

    // Codegen for 02:42 for 0 quotations:
    case 162:
      Serial.println(F("No quotes for 02:42"));
      return;

    // Codegen for 02:43 for 1 quotations:
    case 163:
      Serial.println(F("Only one option for 02:43:"));
    Serial.println(F("02:43 - She settled back beside him. 'It's 2:43:12am, Case. Got a readout chipped into my optic nerve.' - William Gibson, Neuromancer"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She settled back beside him.");
          // display.setCursor(5, 17);
      // display.println("'It's TIMESTRING:12am, Case.");
          // display.setCursor(5, 29);
      // display.println("Got a readout chipped into my optic");
          // display.setCursor(11, 17);
      // display.println("2:43");
          // display.setCursor(4, 192);
      // display.println("- William Gibson, Neuromancer");
      return;

    // Codegen for 02:44 for 0 quotations:
    case 164:
      Serial.println(F("No quotes for 02:44"));
      return;

    // Codegen for 02:45 for 1 quotations:
    case 165:
      Serial.println(F("Only one option for 02:45:"));
    Serial.println(F("02:45 - 0245h., Ennet House, the hours that are truly wee. - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING., Ennet House,");
          // display.setCursor(5, 5);
      // display.println("0245h");
          // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
      return;

    // Codegen for 02:46 for 2 quotations:
    case 166:
      option = random(0, 2);
      Serial.print(F("2 options for 02:46. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:46 - 2.46am. The chain drive whirred and the paper target slid down the darkened range, ducking in and out of shafts of yellow incandescent light. At the firing station, a figure waited in the shadows. - Steve Sohmer, Patriots"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING The chain");
                // display.setCursor(5, 17);
      // display.println("drive whirred and the paper target");
                // display.setCursor(5, 29);
      // display.println("slid down the darkened range,");
                // display.setCursor(5, 41);
      // display.println("ducking in and out of shafts of yellow");
                // display.setCursor(5, 53);
      // display.println("incandescent light. At the firing station, a");
                // display.setCursor(5, 5);
      // display.println("2.46am.");
                // display.setCursor(39, 192);
      // display.println("- Steve Sohmer, Patriots");
          return;
        case 1:
          Serial.println(F("02:46 - Vicki shoved her glasses at her face and peered at the clock. Two forty-six. 'I don't have time for this' she muttered, sttling back against the pillows, heart still slamming against her ribs. - Tanya Huff, Blood Lines "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Vicki shoved her glasses at her");
                // display.setCursor(5, 17);
      // display.println("face and peered at the clock.");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING. 'I");
                // display.setCursor(5, 41);
      // display.println("don't have time for this' she");
                // display.setCursor(5, 53);
      // display.println("muttered, sttling back against the");
                // display.setCursor(5, 65);
      // display.println("pillows, heart still slamming against");
                // display.setCursor(5, 29);
      // display.println("Two forty-six");
                // display.setCursor(25, 192);
      // display.println("- Tanya Huff, Blood Lines ");
          return;
      } // end switch (option)

    // Codegen for 02:47 for 1 quotations:
    case 167:
      Serial.println(F("Only one option for 02:47:"));
    Serial.println(F("02:47 - The glowing numbers read 2.47am. Moisés sighs and turns back to the bathroom door. Finally, the doorknob turns and Conchita comes back to bed. She resumes her place next to Moisés. Relieved, he pulls her close. - Daniel A. Olivas, The Book of Want"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The glowing numbers read");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING Moisés sighs and turns back to");
          // display.setCursor(5, 29);
      // display.println("the bathroom door. Finally, the");
          // display.setCursor(5, 41);
      // display.println("doorknob turns and Conchita comes back");
          // display.setCursor(5, 53);
      // display.println("to bed. She resumes her place next");
          // display.setCursor(5, 65);
      // display.println("to Moisés. Relieved, he pulls her");
          // display.setCursor(156, 5);
      // display.println("2.47am.");
          // display.setCursor(81, 192);
      // display.println("- The Book of Want");
      return;

    // Codegen for 02:48 for 0 quotations:
    case 168:
      Serial.println(F("No quotes for 02:48"));
      return;

    // Codegen for 02:49 for 0 quotations:
    case 169:
      Serial.println(F("No quotes for 02:49"));
      return;

    // Codegen for 02:50 for 0 quotations:
    case 170:
      Serial.println(F("No quotes for 02:50"));
      return;

    // Codegen for 02:51 for 0 quotations:
    case 171:
      Serial.println(F("No quotes for 02:51"));
      return;

    // Codegen for 02:52 for 0 quotations:
    case 172:
      Serial.println(F("No quotes for 02:52"));
      return;

    // Codegen for 02:53 for 0 quotations:
    case 173:
      Serial.println(F("No quotes for 02:53"));
      return;

    // Codegen for 02:54 for 0 quotations:
    case 174:
      Serial.println(F("No quotes for 02:54"));
      return;

    // Codegen for 02:55 for 2 quotations:
    case 175:
      option = random(0, 2);
      Serial.print(F("2 options for 02:55. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:55 - It's the way the world will end, Harry. Recorded cocktail music nuclear-powered to play on for centuries after all life has been destroyed. Selections from 'No, No, Nanette,' throughout eternity. That do you for 2:55 a.m.? - Jack Finney, The Night People "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It's the way the world will end,");
                // display.setCursor(5, 17);
      // display.println("Harry. Recorded cocktail music");
                // display.setCursor(5, 29);
      // display.println("nuclear-powered to play on for centuries after");
                // display.setCursor(5, 41);
      // display.println("all life has been destroyed.");
                // display.setCursor(5, 53);
      // display.println("Selections from 'No, No, Nanette,'");
                // display.setCursor(5, 65);
      // display.println("throughout eternity. That do you for");
                // display.setCursor(5, 77);
      // display.println("2:55 a.m.");
                // display.setCursor(81, 192);
      // display.println("- The Night People");
          return;
        case 1:
          Serial.println(F("02:55 - Time to go: 2.55am. Two-handed, Cec lifted his peak cap from the chair. - Iain Sinclair, Downriver"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Time to go: TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("Two-handed, Cec lifted his peak cap from the");
                // display.setCursor(71, 5);
      // display.println("2.55am.");
                // display.setCursor(25, 192);
      // display.println("- Iain Sinclair, Downriver");
          return;
      } // end switch (option)

    // Codegen for 02:56 for 1 quotations:
    case 176:
      Serial.println(F("Only one option for 02:56:"));
    Serial.println(F("02:56 - It was 2:56 when the shovel touched the coffin. We all heard the sound and looked at each other. - Jonathan Safran Foer, Extremely Loud and Incredibly Close "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING when the");
          // display.setCursor(5, 17);
      // display.println("shovel touched the coffin. We all");
          // display.setCursor(5, 29);
      // display.println("heard the sound and looked at each");
          // display.setCursor(42, 5);
      // display.println("2:56");
          // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
      return;

    // Codegen for 02:57 for 0 quotations:
    case 177:
      Serial.println(F("No quotes for 02:57"));
      return;

    // Codegen for 02:58 for 0 quotations:
    case 178:
      Serial.println(F("No quotes for 02:58"));
      return;

    // Codegen for 02:59 for 1 quotations:
    case 179:
      Serial.println(F("Only one option for 02:59:"));
    Serial.println(F("02:59 - I remembered arriving in this room at 2.59 one night. I remembered the sergeant who called me names: mostly Anglo-Saxon monosyllabic four-letter ones with an odd \"Commie\" thrown in for syntax. - Len Deighton, The Ipcress File"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I remembered arriving in this");
          // display.setCursor(5, 17);
      // display.println("room at TIMESTRING one night. I");
          // display.setCursor(5, 29);
      // display.println("remembered the sergeant who called me");
          // display.setCursor(5, 41);
      // display.println("names: mostly Anglo-Saxon");
          // display.setCursor(5, 53);
      // display.println("monosyllabic four-letter ones with an odd");
          // display.setCursor(25, 17);
      // display.println("2.59");
          // display.setCursor(81, 192);
      // display.println("- The Ipcress File");
      return;

    // Codegen for 03:00 for 18 quotations:
    case 180:
      option = random(0, 18);
      Serial.print(F("18 options for 03:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:00 - She died this morning, very early, about three o'clock. - Virginia Woolf, The Voyage Out "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She died this morning, very");
                // display.setCursor(5, 17);
      // display.println("early, about");
                // display.setCursor(48, 17);
      // display.println("three o'clock");
                // display.setCursor(95, 192);
      // display.println("- The Voyage Out");
          return;
        case 1:
          Serial.println(F("03:00 - Three a.m. That’s our reward. Three in the morn. The soul’s midnight. The tide goes out, the soul ebbs. And a train arrives at an hour of despair. Why? - Ray Bradbury, Something Wicked This Way Comes "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Three a.m. That’s our reward.");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING");
                // display.setCursor(5, 29);
      // display.println("The soul’s midnight. The tide goes");
                // display.setCursor(5, 41);
      // display.println("out, the soul ebbs. And a train");
                // display.setCursor(5, 17);
      // display.println("Three in the morn.");
                // display.setCursor(109, 192);
      // display.println("- Ray Bradbury");
          return;
        case 2:
          Serial.println(F("03:00 - According to her watch it was shortly after three o'clock, and according to everything else it was night-time. - Douglas Adams, The Long Dark Tea-time of the Soul "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("According to her watch it was");
                // display.setCursor(5, 17);
      // display.println("shortly after");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, and according to everything");
                // display.setCursor(49, 17);
      // display.println("three o'clock");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 3:
          Serial.println(F("03:00 - At three am I was walking the floor and listening to Katchaturian working in a tractor factory. He called it a violin concerto. I called it a loose fan belt and the hell with it. - Raymond Chandler, The Long Goodbye "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING I was");
                // display.setCursor(5, 17);
      // display.println("walking the floor and listening to");
                // display.setCursor(5, 29);
      // display.println("Katchaturian working in a tractor factory.");
                // display.setCursor(5, 41);
      // display.println("He called it a violin concerto. I");
                // display.setCursor(5, 53);
      // display.println("called it a loose fan belt and the hell");
                // display.setCursor(5, 5);
      // display.println("At three am");
                // display.setCursor(81, 192);
      // display.println("- The Long Goodbye");
          return;
        case 4:
          Serial.println(F("03:00 - At three o' clock in the morning Eurydice is bound to come into it. After all, why did I sit here like a telegrapher at a lost outpost if not to receive messages from everywhere about the lost Eurydice who was never mine to begin with - Russell Hoban, The Medusa Frequency "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING Eurydice is bound to come into");
                // display.setCursor(5, 41);
      // display.println("it. After all, why did I sit here like");
                // display.setCursor(5, 53);
      // display.println("a telegrapher at a lost outpost if");
                // display.setCursor(5, 65);
      // display.println("not to receive messages from");
                // display.setCursor(5, 77);
      // display.println("everywhere about the lost Eurydice who was");
                // display.setCursor(5, 17);
      // display.println("three o' clock in the morning");
                // display.setCursor(53, 192);
      // display.println("- The Medusa Frequency");
          return;
        case 5:
          Serial.println(F("03:00 - But at three o'clock in the morning, a forgotten package has the same tragic importance as a death sentence, and the cure doesn’t work - F. Scott Fitzgerald, The Crack-Up"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("But");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, a forgotten package has the");
                // display.setCursor(5, 41);
      // display.println("same tragic importance as a death");
                // display.setCursor(5, 17);
      // display.println("at three o'clock in the morning");
                // display.setCursor(109, 192);
      // display.println("- The Crack-Up");
          return;
        case 6:
          Serial.println(F("03:00 - She is an insomniac. Her nights are wide-eyed and excited with worry. Even at three o'clock in the morning one might hear her eating a Bain Marie biscuit in the kitchen. - Amit Chaudhuri, Afternoon Raag "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She is an insomniac. Her nights");
                // display.setCursor(5, 17);
      // display.println("are wide-eyed and excited with");
                // display.setCursor(5, 29);
      // display.println("worry. Even at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING in the morning one might hear");
                // display.setCursor(5, 53);
      // display.println("her eating a Bain Marie biscuit in");
                // display.setCursor(56, 29);
      // display.println("three o'clock");
                // display.setCursor(95, 192);
      // display.println("- Afternoon Raag");
          return;
        case 7:
          Serial.println(F("03:00 - I slam the phone down but it misses the base. I hit the clock instead, which flashes 3 a.m. - Dan Holloway, Songs from the Other Side of the Wall "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I slam the phone down but it");
                // display.setCursor(5, 17);
      // display.println("misses the base. I hit the clock");
                // display.setCursor(5, 29);
      // display.println("instead, which flashes");
                // display.setCursor(100, 29);
      // display.println("3 a.m.");
                // display.setCursor(109, 192);
      // display.println("- Dan Holloway");
          return;
        case 8:
          Serial.println(F("03:00 - In a real dark night of the soul it is always 3 o'clock in the morning. - F. Scott Fitzgerald, The Crack-Up "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("In a real dark night of the soul it");
                // display.setCursor(5, 17);
      // display.println("is always TIMESTRING in");
                // display.setCursor(51, 17);
      // display.println("3 o'clock");
                // display.setCursor(109, 192);
      // display.println("- The Crack-Up");
          return;
        case 9:
          Serial.println(F("03:00 - ...that someone stumbled jerkily, as if his ankles were in chains, to the Comanche cabin’s bathroom at three A.M. - Philip Roth, Nemesis"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("...that someone stumbled");
                // display.setCursor(5, 17);
      // display.println("jerkily, as if his ankles were in chains,");
                // display.setCursor(5, 29);
      // display.println("to the Comanche cabin’s bathroom");
                // display.setCursor(5, 41);
      // display.println("at three A.M.");
                // display.setCursor(53, 192);
      // display.println("- Philip Roth, Nemesis");
          return;
        case 10:
          Serial.println(F("03:00 - It was three in the morning when his taxi stopped by giant mounds of snow outside his hotel. He had not eaten in hours. - Ian McEwan, Solar "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING when his taxi stopped by giant");
                // display.setCursor(5, 29);
      // display.println("mounds of snow outside his hotel. He");
                // display.setCursor(42, 5);
      // display.println("three in the morning");
                // display.setCursor(67, 192);
      // display.println("- Ian McEwan, Solar ");
          return;
        case 11:
          Serial.println(F("03:00 - Once I saw a figure I shall never forget. It was three o'clock at night, as I was going home from Blacky as usual; it was a short-cut for me, and there would be nobody in the street at this time of night, I thought, especially not in this frightful cold. - Max Frisch, I'm Not Stiller"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Once I saw a figure I shall never");
                // display.setCursor(5, 17);
      // display.println("forget. It was");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, as I was going home from Blacky");
                // display.setCursor(5, 41);
      // display.println("as usual; it was a short-cut for me,");
                // display.setCursor(5, 53);
      // display.println("and there would be nobody in the");
                // display.setCursor(5, 65);
      // display.println("street at this time of night, I");
                // display.setCursor(5, 77);
      // display.println("thought, especially not in this");
                // display.setCursor(50, 17);
      // display.println("three o'clock at night");
                // display.setCursor(4, 192);
      // display.println("- Max Frisch, I'm Not Stiller");
          return;
        case 12:
          Serial.println(F("03:00 - Roused from her sleep, Freya Gaines groped for the switch of the vidphone; groggily she found it and snapped it on. 'Lo,' she mumbled, wondering what time it was. She made out the luminous dial of the clock beside the bed. Three AM. Good grief. - Philip K Dick, The Game Players of Titan "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Roused from her sleep, Freya");
                // display.setCursor(5, 17);
      // display.println("Gaines groped for the switch of the");
                // display.setCursor(5, 29);
      // display.println("vidphone; groggily she found it and");
                // display.setCursor(5, 41);
      // display.println("snapped it on. 'Lo,' she mumbled,");
                // display.setCursor(5, 53);
      // display.println("wondering what time it was. She made out");
                // display.setCursor(5, 65);
      // display.println("the luminous dial of the clock");
                // display.setCursor(5, 77);
      // display.println("beside the bed. TIMESTRING");
                // display.setCursor(63, 77);
      // display.println("Three AM.");
                // display.setCursor(18, 192);
      // display.println("- The Game Players of Titan");
          return;
        case 13:
          Serial.println(F("03:00 - The Regrouting Committee's been dragging along since may. Suddenly they're pulling secret 0300 milk-switches? It doesn't ring true, Jim. - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Regrouting Committee's been");
                // display.setCursor(5, 17);
      // display.println("dragging along since may. Suddenly");
                // display.setCursor(5, 29);
      // display.println("they're pulling secret 0TIMESTRING");
                // display.setCursor(106, 29);
      // display.println("300");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 14:
          Serial.println(F("03:00 - Three in the morning, thought Charles Halloway, seated on the edge of his bed. Why did the train come at that hour? For, he thought, it’s a special hour. Women never wake then, do they? - Ray Bradbury, Something Wicked This Way Comes "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, thought Charles Halloway,");
                // display.setCursor(5, 29);
      // display.println("seated on the edge of his bed. Why did");
                // display.setCursor(5, 41);
      // display.println("the train come at that hour? For, he");
                // display.setCursor(5, 53);
      // display.println("thought, it’s a special hour. Women");
                // display.setCursor(5, 5);
      // display.println("Three in the morning");
                // display.setCursor(109, 192);
      // display.println("- Ray Bradbury");
          return;
        case 15:
          Serial.println(F("03:00 - Why, if you listen you will hear it strike. George listened, and a neighbouring clock immediately obliged. \"But it's only gone three!\" said George in an injured tone, when it had finished. - Jerome K Jerome, Three Men in a Boat "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Why, if you listen you will hear");
                // display.setCursor(5, 17);
      // display.println("it strike. George listened, and a");
                // display.setCursor(5, 29);
      // display.println("neighbouring clock immediately obliged.");
                // display.setCursor(5, 41);
      // display.println("\"But it's only gone");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING!\" said George in an injured");
                // display.setCursor(98, 41);
      // display.println("three");
                // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
          return;
        case 16:
          Serial.println(F("03:00 - When Sophie awoke, it was 3:00 a.m. - Paula Fox, Desperate Characters "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("When Sophie awoke, it was");
                // display.setCursor(5, 17);
      // display.println("3:00 a.m.");
                // display.setCursor(53, 192);
      // display.println("- Desperate Characters");
          return;
        case 17:
          Serial.println(F("03:00 - You hearken, Missy. It’s three o’clock in the morning and I’ve got all my faculties as well as ever I had in my life. I know all my property and where the money’s put out. - George Eliot, Middlemarch "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("You hearken, Missy. It’s");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 29);
      // display.println("morning and I’ve got all my faculties as");
                // display.setCursor(5, 41);
      // display.println("well as ever I had in my life. I know");
                // display.setCursor(5, 53);
      // display.println("all my property and where the");
                // display.setCursor(5, 17);
      // display.println("three o’clock");
                // display.setCursor(11, 192);
      // display.println("- George Eliot, Middlemarch ");
          return;
      } // end switch (option)

    // Codegen for 03:01 for 1 quotations:
    case 181:
      Serial.println(F("Only one option for 03:01:"));
    Serial.println(F("03:01 - It was now about three o'clock in the morning and Francis Macomber, who had been asleep a little while after he had stopped thinking about the lion, wakened and then slept again. - Ernest Hemingway, The Short Happy Life of Francis Macomber "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was now");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING in the morning and Francis");
          // display.setCursor(5, 29);
      // display.println("Macomber, who had been asleep a little");
          // display.setCursor(5, 41);
      // display.println("while after he had stopped thinking");
          // display.setCursor(5, 53);
      // display.println("about the lion, wakened and then slept");
          // display.setCursor(64, 5);
      // display.println("about three o'clock");
          // display.setCursor(81, 192);
      // display.println("- Ernest Hemingway");
      return;

    // Codegen for 03:02 for 0 quotations:
    case 182:
      Serial.println(F("No quotes for 03:02"));
      return;

    // Codegen for 03:03 for 0 quotations:
    case 183:
      Serial.println(F("No quotes for 03:03"));
      return;

    // Codegen for 03:04 for 1 quotations:
    case 184:
      Serial.println(F("Only one option for 03:04:"));
    Serial.println(F("03:04 - …his back-up alarm clock rang. He looked at his front-line clock on the bedside table and noted that it had stopped at 3.04. So, you couldn’t even rely on alarm clocks. - Henning Mankell, The Return of the Dancing Master"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("…his back-up alarm clock rang.");
          // display.setCursor(5, 17);
      // display.println("He looked at his front-line clock");
          // display.setCursor(5, 29);
      // display.println("on the bedside table and noted that");
          // display.setCursor(5, 41);
      // display.println("it had stopped at TIMESTRING.");
          // display.setCursor(5, 53);
      // display.println("So, you couldn’t even rely on alarm");
          // display.setCursor(95, 41);
      // display.println("3.04");
          // display.setCursor(88, 192);
      // display.println("- Henning Mankell");
      return;

    // Codegen for 03:05 for 1 quotations:
    case 185:
      Serial.println(F("Only one option for 03:05:"));
    Serial.println(F("03:05 - On the Sunday before Christmas she awoke at 3:05 a.m. and though: Thirty-six hours. Four hours later she got up thinking: Thirty-two hours. Late in the day she took Alfred to the street-association Christmas party at Dale and Honey Driblett’s... - Jonathan Franzen, The Corrections "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("On the Sunday before Christmas");
          // display.setCursor(5, 17);
      // display.println("she awoke at TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("and though: Thirty-six hours. Four");
          // display.setCursor(5, 41);
      // display.println("hours later she got up thinking:");
          // display.setCursor(5, 53);
      // display.println("Thirty-two hours. Late in the day she took");
          // display.setCursor(5, 65);
      // display.println("Alfred to the street-association");
          // display.setCursor(5, 77);
      // display.println("Christmas party at Dale and Honey");
          // display.setCursor(60, 17);
      // display.println("3:05 a.m.");
          // display.setCursor(88, 192);
      // display.println("- The Corrections");
      return;

    // Codegen for 03:06 for 0 quotations:
    case 186:
      Serial.println(F("No quotes for 03:06"));
      return;

    // Codegen for 03:07 for 1 quotations:
    case 187:
      Serial.println(F("Only one option for 03:07:"));
    Serial.println(F("03:07 - Wayne late-logged in: 3.07am -the late-late show. He parked. He dumped his milk can. He yawned, he stretched. He scratched. - James Ellroy, The Cold Six Thousand"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Wayne late-logged in:");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING -the late-late show. He");
          // display.setCursor(5, 29);
      // display.println("parked. He dumped his milk can. He");
          // display.setCursor(141, 5);
      // display.println("3.07am");
          // display.setCursor(46, 192);
      // display.println("- The Cold Six Thousand");
      return;

    // Codegen for 03:08 for 0 quotations:
    case 188:
      Serial.println(F("No quotes for 03:08"));
      return;

    // Codegen for 03:09 for 0 quotations:
    case 189:
      Serial.println(F("No quotes for 03:09"));
      return;

    // Codegen for 03:10 for 2 quotations:
    case 190:
      option = random(0, 2);
      Serial.print(F("2 options for 03:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:10 - I think my credit card was in there too. I wrote down the words credit card and said that if they wouldn't let me cancel them I'd demand that they registered the loss so you couldn't be charge for anything beyond the time of my calling them up. I looked at the clock. It was ten-past three. - Ali Smith, The Whole Story and Other Stories "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I think my credit card was in");
                // display.setCursor(5, 17);
      // display.println("there too. I wrote down the words");
                // display.setCursor(5, 29);
      // display.println("credit card and said that if they");
                // display.setCursor(5, 41);
      // display.println("wouldn't let me cancel them I'd demand");
                // display.setCursor(5, 53);
      // display.println("that they registered the loss so you");
                // display.setCursor(5, 65);
      // display.println("couldn't be charge for anything beyond");
                // display.setCursor(5, 77);
      // display.println("the time of my calling them up. I");
                // display.setCursor(5, 89);
      // display.println("looked at the clock. It was");
                // display.setCursor(5, 101);
      // display.println("ten-past three");
                // display.setCursor(130, 192);
      // display.println("- Ali Smith");
          return;
        case 1:
          Serial.println(F("03:10 - Love again; wanking at ten past three - Philip Larkin, Love Again"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Love again; wanking at");
                // display.setCursor(5, 17);
      // display.println("ten past three");
                // display.setCursor(18, 192);
      // display.println("- Philip Larkin, Love Again");
          return;
      } // end switch (option)

    // Codegen for 03:11 for 0 quotations:
    case 191:
      Serial.println(F("No quotes for 03:11"));
      return;

    // Codegen for 03:12 for 0 quotations:
    case 192:
      Serial.println(F("No quotes for 03:12"));
      return;

    // Codegen for 03:13 for 0 quotations:
    case 193:
      Serial.println(F("No quotes for 03:13"));
      return;

    // Codegen for 03:14 for 1 quotations:
    case 194:
      Serial.println(F("Only one option for 03:14:"));
    Serial.println(F("03:14 - Since he had told the girl that it had to end, he'd been waking up every morning at 3.14, without fail. Every morning his eyes would flick open, alert, and the red numerals on his electric alarm clock would read 3.14. - Christos Tsiolkas, The Slap"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Since he had told the girl that it");
          // display.setCursor(5, 17);
      // display.println("had to end, he'd been waking up every");
          // display.setCursor(5, 29);
      // display.println("morning at TIMESTRING, without");
          // display.setCursor(5, 41);
      // display.println("fail. Every morning his eyes would");
          // display.setCursor(5, 53);
      // display.println("flick open, alert, and the red");
          // display.setCursor(5, 65);
      // display.println("numerals on his electric alarm clock");
          // display.setCursor(40, 77);
      // display.println("3.14");
          // display.setCursor(4, 192);
      // display.println("- Christos Tsiolkas, The Slap");
      return;

    // Codegen for 03:15 for 1 quotations:
    case 195:
      Serial.println(F("Only one option for 03:15:"));
    Serial.println(F("03:15 - Above the door of Room 69 the clock ticked on at 3:15. The motion was accelerating. What had once been the gymnasium was now a small room, seven feet wide, a tight, almost perfect cube. - JG Ballard, Manhole 69"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Above the door of Room 69 the");
          // display.setCursor(5, 17);
      // display.println("clock ticked on at TIMESTRING.");
          // display.setCursor(5, 29);
      // display.println("The motion was accelerating. What");
          // display.setCursor(5, 41);
      // display.println("had once been the gymnasium was now a");
          // display.setCursor(5, 53);
      // display.println("small room, seven feet wide, a tight,");
          // display.setCursor(84, 17);
      // display.println("3:15");
          // display.setCursor(39, 192);
      // display.println("- JG Ballard, Manhole 69");
      return;

    // Codegen for 03:16 for 0 quotations:
    case 196:
      Serial.println(F("No quotes for 03:16"));
      return;

    // Codegen for 03:17 for 2 quotations:
    case 197:
      option = random(0, 2);
      Serial.print(F("2 options for 03:17. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:17 - Who’s that with him then? I said. \"Some whore.\" He listened for a moment, brow furrowed, his profile sharp in the moonlight, and then lay back down. \"Two of them.\" I rolled over, and checked my iPod. It was 3:17 in the morning. - Donna Tartt, The Goldfinch"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Who’s that with him then? I said.");
                // display.setCursor(5, 17);
      // display.println("\"Some whore.\" He listened for a");
                // display.setCursor(5, 29);
      // display.println("moment, brow furrowed, his profile");
                // display.setCursor(5, 41);
      // display.println("sharp in the moonlight, and then lay");
                // display.setCursor(5, 53);
      // display.println("back down. \"Two of them.\" I rolled");
                // display.setCursor(5, 65);
      // display.println("over, and checked my iPod. It was");
                // display.setCursor(171, 65);
      // display.println("3:17");
                // display.setCursor(11, 192);
      // display.println("- Donna Tartt, The Goldfinch");
          return;
        case 1:
          Serial.println(F("03:17 - He turned to the monitors again and flicked through the screens, each one able to display eight different camera mountings, giving Kurt 192 different still lives of Green Oaks at 3.17 a.m. this March night. - Catherine O'Flynn, What Was Lost "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He turned to the monitors again");
                // display.setCursor(5, 17);
      // display.println("and flicked through the screens,");
                // display.setCursor(5, 29);
      // display.println("each one able to display eight");
                // display.setCursor(5, 41);
      // display.println("different camera mountings, giving Kurt");
                // display.setCursor(5, 53);
      // display.println("192 different still lives of Green");
                // display.setCursor(5, 65);
      // display.println("Oaks at TIMESTRING this");
                // display.setCursor(25, 65);
      // display.println("3.17 a.m.");
                // display.setCursor(102, 192);
      // display.println("- What Was Lost");
          return;
      } // end switch (option)

    // Codegen for 03:18 for 0 quotations:
    case 198:
      Serial.println(F("No quotes for 03:18"));
      return;

    // Codegen for 03:19 for 1 quotations:
    case 199:
      Serial.println(F("Only one option for 03:19:"));
    Serial.println(F("03:19 - The time stamp on Navidson's camcorder indicates that it is exactly 3.19 A.M. - Mark Z Danielewski, House of Leaves"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The time stamp on Navidson's");
          // display.setCursor(5, 17);
      // display.println("camcorder indicates that it is exactly");
          // display.setCursor(5, 29);
      // display.println("3.19 A.M.");
          // display.setCursor(88, 192);
      // display.println("- House of Leaves");
      return;

    // Codegen for 03:20 for 1 quotations:
    case 200:
      Serial.println(F("Only one option for 03:20:"));
    Serial.println(F("03:20 - Prabath Kumara, 16. 17th November 1989. At 3.20am from the home of a friend. - Michael Ondaatje, Anil's Ghost"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Prabath Kumara, 16. 17th");
          // display.setCursor(5, 17);
      // display.println("November 1989. At TIMESTRING");
          // display.setCursor(65, 17);
      // display.println("3.20am");
          // display.setCursor(109, 192);
      // display.println("- Anil's Ghost");
      return;

    // Codegen for 03:21 for 1 quotations:
    case 201:
      Serial.println(F("Only one option for 03:21:"));
    Serial.println(F("03:21 - Next, he remembered that the morrow of Christmas would be the twenty-seventh day of the moon, and that consequently high water would be at twenty-one minutes past three - Victor Hugo, The Toilers of the Sea"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Next, he remembered that the");
          // display.setCursor(5, 17);
      // display.println("morrow of Christmas would be the");
          // display.setCursor(5, 29);
      // display.println("twenty-seventh day of the moon, and that");
          // display.setCursor(5, 41);
      // display.println("consequently high water would be at");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("twenty-one minutes past three");
          // display.setCursor(39, 192);
      // display.println("- The Toilers of the Sea");
      return;

    // Codegen for 03:22 for 0 quotations:
    case 202:
      Serial.println(F("No quotes for 03:22"));
      return;

    // Codegen for 03:23 for 0 quotations:
    case 203:
      Serial.println(F("No quotes for 03:23"));
      return;

    // Codegen for 03:24 for 0 quotations:
    case 204:
      Serial.println(F("No quotes for 03:24"));
      return;

    // Codegen for 03:25 for 1 quotations:
    case 205:
      Serial.println(F("Only one option for 03:25:"));
    Serial.println(F("03:25 - It was 3:25 a.m. A strange thrill, to think I was the only Mulvaney awake in the house. - Joyce Carol Oates, We Were the Mulvaneys "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING A");
          // display.setCursor(5, 17);
      // display.println("strange thrill, to think I was the only");
          // display.setCursor(42, 5);
      // display.println("3:25 a.m.");
          // display.setCursor(46, 192);
      // display.println("- We Were the Mulvaneys");
      return;

    // Codegen for 03:26 for 0 quotations:
    case 206:
      Serial.println(F("No quotes for 03:26"));
      return;

    // Codegen for 03:27 for 0 quotations:
    case 207:
      Serial.println(F("No quotes for 03:27"));
      return;

    // Codegen for 03:28 for 1 quotations:
    case 208:
      Serial.println(F("Only one option for 03:28:"));
    Serial.println(F("03:28 - Now somebody was running past his room. A door slammed. That foreign language again. What the devil was going on? he switched on his light and peered at his watch. 3.28. He got out of bed. - Rupert Thomson, Dreams of Leaving"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Now somebody was running past");
          // display.setCursor(5, 17);
      // display.println("his room. A door slammed. That");
          // display.setCursor(5, 29);
      // display.println("foreign language again. What the devil");
          // display.setCursor(5, 41);
      // display.println("was going on? he switched on his");
          // display.setCursor(5, 53);
      // display.println("light and peered at his watch.");
          // display.setCursor(156, 53);
      // display.println("3.28");
          // display.setCursor(74, 192);
      // display.println("- Dreams of Leaving");
      return;

    // Codegen for 03:29 for 0 quotations:
    case 209:
      Serial.println(F("No quotes for 03:29"));
      return;

    // Codegen for 03:30 for 5 quotations:
    case 210:
      option = random(0, 5);
      Serial.print(F("5 options for 03:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:30 - At Half past Three, a single Bird Unto a silent Sky Propounded but a single term Of cautious melody. - Emily Dickinson, At Half past Three, a single Bird"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING,");
                // display.setCursor(5, 17);
      // display.println("a single Bird Unto a silent Sky");
                // display.setCursor(5, 29);
      // display.println("Propounded but a single term Of cautious");
                // display.setCursor(20, 5);
      // display.println("Half past Three");
                // display.setCursor(88, 192);
      // display.println("- Emily Dickinson");
          return;
        case 1:
          Serial.println(F("03:30 - At half-past three A.M. he lost one illusion: officers sent to reconnoitre informed him that the enemy was making no movement. - Victor Hugo, Les Miserables "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING he lost one illusion: officers");
                // display.setCursor(5, 29);
      // display.println("sent to reconnoitre informed him");
                // display.setCursor(5, 41);
      // display.println("that the enemy was making no");
                // display.setCursor(20, 5);
      // display.println("half-past three A.M.");
                // display.setCursor(95, 192);
      // display.println("- Les Miserables");
          return;
        case 2:
          Serial.println(F("03:30 - It's 3:30 A.M. in Mrs. Ralph's finally quiet house when Garp decides to clean the kitchen, to kill the time until dawn. Familiar with a housewife's tasks, Garp fills the sink and starts to wash the dishes. - John Irving, The World According to Garp "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It's TIMESTRING in");
                // display.setCursor(5, 17);
      // display.println("Mrs. Ralph's finally quiet house");
                // display.setCursor(5, 29);
      // display.println("when Garp decides to clean the");
                // display.setCursor(5, 41);
      // display.println("kitchen, to kill the time until dawn.");
                // display.setCursor(5, 53);
      // display.println("Familiar with a housewife's tasks, Garp");
                // display.setCursor(5, 65);
      // display.println("fills the sink and starts to wash the");
                // display.setCursor(34, 5);
      // display.println("3:30 A.M.");
                // display.setCursor(4, 192);
      // display.println("- The World According to Garp");
          return;
        case 3:
          Serial.println(F("03:30 - Let's go to sleep, I say. \"Look at what time it is.\" The clock radio is right there beside the bed. Anyone can see it says three-thirty. - Raymond Carver, Whoever Was Using This Bed"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Let's go to sleep, I say. \"Look");
                // display.setCursor(5, 17);
      // display.println("at what time it is.\" The clock");
                // display.setCursor(5, 29);
      // display.println("radio is right there beside the bed.");
                // display.setCursor(5, 41);
      // display.println("Anyone can see it says");
                // display.setCursor(100, 41);
      // display.println("three-thirty");
                // display.setCursor(11, 192);
      // display.println("- Whoever Was Using This Bed");
          return;
        case 4:
          Serial.println(F("03:30 - Now, look. I am not going to call Dr. McGrath at three thirty in the morning to ask if it's all right for my son to eat worms. That's flat. - Thomas Rockwell, How to Eat Fried Worms "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Now, look. I am not going to call");
                // display.setCursor(5, 17);
      // display.println("Dr. McGrath at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING in the morning to ask if it's all");
                // display.setCursor(5, 41);
      // display.println("right for my son to eat worms. That's");
                // display.setCursor(74, 17);
      // display.println("three thirty");
                // display.setCursor(39, 192);
      // display.println("- How to Eat Fried Worms");
          return;
      } // end switch (option)

    // Codegen for 03:31 for 0 quotations:
    case 211:
      Serial.println(F("No quotes for 03:31"));
      return;

    // Codegen for 03:32 for 0 quotations:
    case 212:
      Serial.println(F("No quotes for 03:32"));
      return;

    // Codegen for 03:33 for 1 quotations:
    case 213:
      Serial.println(F("Only one option for 03:33:"));
    Serial.println(F("03:33 - A draft whistled in around the kitchen window frame and I shivered. The digital clock on Perkus's stove read 3:33. - Jonathan Lethem, Chronic City"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A draft whistled in around the");
          // display.setCursor(5, 17);
      // display.println("kitchen window frame and I shivered.");
          // display.setCursor(5, 29);
      // display.println("The digital clock on Perkus's stove");
          // display.setCursor(10, 41);
      // display.println("3:33");
          // display.setCursor(109, 192);
      // display.println("- Chronic City");
      return;

    // Codegen for 03:34 for 1 quotations:
    case 214:
      Serial.println(F("Only one option for 03:34:"));
    Serial.println(F("03:34 - It was 3:34 am. and he was wide-awake. He'd heard the phone ring and the sound of his uncle's voice. - Muriel Jensen, Always Florence"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING and");
          // display.setCursor(5, 17);
      // display.println("he was wide-awake. He'd heard the");
          // display.setCursor(5, 29);
      // display.println("phone ring and the sound of his");
          // display.setCursor(42, 5);
      // display.println("3:34 am.");
          // display.setCursor(88, 192);
      // display.println("- Always Florence");
      return;

    // Codegen for 03:35 for 1 quotations:
    case 215:
      Serial.println(F("Only one option for 03:35:"));
    Serial.println(F("03:35 - He could just see the hands of the alarm clock in the darkness: 3.35 a.m. He adjusted his pillow and shut his eyes. - Henning Mankell, The Dogs of Riga"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He could just see the hands of the");
          // display.setCursor(5, 17);
      // display.println("alarm clock in the darkness:");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING He");
          // display.setCursor(5, 29);
      // display.println("3.35 a.m.");
          // display.setCursor(81, 192);
      // display.println("- The Dogs of Riga");
      return;

    // Codegen for 03:36 for 1 quotations:
    case 216:
      Serial.println(F("Only one option for 03:36:"));
    Serial.println(F("03:36 - As I near Deadhorse, it's 3:36 a.m. and seventeen below. Tall, sodium vapor lights spill on the road and there are no trees, only machines, mechanical shadows. There isn't even a church. It tells you everything. - Richard C Matheson, Zoopraxis"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("As I near Deadhorse, it's");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING and");
          // display.setCursor(5, 29);
      // display.println("seventeen below. Tall, sodium vapor");
          // display.setCursor(5, 41);
      // display.println("lights spill on the road and there are");
          // display.setCursor(5, 53);
      // display.println("no trees, only machines,");
          // display.setCursor(5, 65);
      // display.println("mechanical shadows. There isn't even a");
          // display.setCursor(5, 17);
      // display.println("3:36 a.m.");
          // display.setCursor(130, 192);
      // display.println("- Zoopraxis");
      return;

    // Codegen for 03:37 for 1 quotations:
    case 217:
      Serial.println(F("Only one option for 03:37:"));
    Serial.println(F("03:37 - It was three thirty-seven A.M., and for once Maggie was asleep. She had got to be a pretty good sleeper in the last few months. Clyde was prouder of this fact than anything. - Stephen Bury, The Cobweb"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was three");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, and for once Maggie was asleep.");
          // display.setCursor(5, 29);
      // display.println("She had got to be a pretty good");
          // display.setCursor(5, 41);
      // display.println("sleeper in the last few months. Clyde");
          // display.setCursor(5, 53);
      // display.println("was prouder of this fact than");
          // display.setCursor(78, 5);
      // display.println("thirty-seven A.M.");
          // display.setCursor(25, 192);
      // display.println("- Stephen Bury, The Cobweb");
      return;

    // Codegen for 03:38 for 1 quotations:
    case 218:
      Serial.println(F("Only one option for 03:38:"));
    Serial.println(F("03:38 - At 3.38am, it began to snow in Bowling Green, Kentucky. The geese circling the city flew back to the park, landed, and hunkered down to sit it out on their island in the lake. - Connie Willis, Just Like the Ones we Used to Know"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, it began");
          // display.setCursor(5, 17);
      // display.println("to snow in Bowling Green,");
          // display.setCursor(5, 29);
      // display.println("Kentucky. The geese circling the city");
          // display.setCursor(5, 41);
      // display.println("flew back to the park, landed, and");
          // display.setCursor(5, 53);
      // display.println("hunkered down to sit it out on their");
          // display.setCursor(20, 5);
      // display.println("3.38am");
          // display.setCursor(102, 192);
      // display.println("- Connie Willis");
      return;

    // Codegen for 03:39 for 1 quotations:
    case 219:
      Serial.println(F("Only one option for 03:39:"));
    Serial.println(F("03:39 - 23 October 1893 3.39am. Upon further thought, I feel it necessary to explain that exile into the Master's workshop is not an unpleasant fate. It is not simply some bare-walled cellar devoid of stimulation - quite the opposite. - William Jablonsky, The Clockwork man"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("23 October 1893");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING Upon further thought, I feel it");
          // display.setCursor(5, 29);
      // display.println("necessary to explain that exile into the");
          // display.setCursor(5, 41);
      // display.println("Master's workshop is not an unpleasant");
          // display.setCursor(5, 53);
      // display.println("fate. It is not simply some");
          // display.setCursor(5, 65);
      // display.println("bare-walled cellar devoid of stimulation -");
          // display.setCursor(99, 5);
      // display.println("3.39am.");
          // display.setCursor(74, 192);
      // display.println("- The Clockwork man");
      return;

    // Codegen for 03:40 for 1 quotations:
    case 220:
      Serial.println(F("Only one option for 03:40:"));
    Serial.println(F("03:40 - His bedside clock shows three forty. He has no idea what he's doing out of bed: he has no need to relieve himself, nor is he disturbed by a dream or some element of the day before, or even by the state of the world. - Ian McEwan, Saturday"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("His bedside clock shows");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. He has");
          // display.setCursor(5, 29);
      // display.println("no idea what he's doing out of bed:");
          // display.setCursor(5, 41);
      // display.println("he has no need to relieve himself,");
          // display.setCursor(5, 53);
      // display.println("nor is he disturbed by a dream or some");
          // display.setCursor(5, 65);
      // display.println("element of the day before, or even by the");
          // display.setCursor(5, 17);
      // display.println("three forty");
          // display.setCursor(53, 192);
      // display.println("- Ian McEwan, Saturday");
      return;

    // Codegen for 03:41 for 1 quotations:
    case 221:
      Serial.println(F("Only one option for 03:41:"));
    Serial.println(F("03:41 - The alarm clock said 3.41am. He sat up. Why was the alarm clock slow? He picked up the alarm clock and adjusted the hands to show the same time as his wristwatch: 3.44am - Henning Mankell, The Dogs of Riga"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The alarm clock said");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING He sat up. Why was the alarm");
          // display.setCursor(5, 29);
      // display.println("clock slow? He picked up the alarm");
          // display.setCursor(5, 41);
      // display.println("clock and adjusted the hands to show");
          // display.setCursor(5, 53);
      // display.println("the same time as his wristwatch:");
          // display.setCursor(128, 5);
      // display.println("3.41am.");
          // display.setCursor(81, 192);
      // display.println("- The Dogs of Riga");
      return;

    // Codegen for 03:42 for 1 quotations:
    case 222:
      Serial.println(F("Only one option for 03:42:"));
    Serial.println(F("03:42 - We are due in Yellow Sky at 3:42, he said, looking tenderly into her eyes. \"Oh, are we?\" she said, as if she had not been aware of it. To evince surprise at her husband's statement was part of her wifely amiability. - Stephen Crane, Bride Comes to Yellow Sky"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("We are due in Yellow Sky at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, he said, looking tenderly into");
          // display.setCursor(5, 29);
      // display.println("her eyes. \"Oh, are we?\" she said,");
          // display.setCursor(5, 41);
      // display.println("as if she had not been aware of it. To");
          // display.setCursor(5, 53);
      // display.println("evince surprise at her husband's");
          // display.setCursor(5, 65);
      // display.println("statement was part of her wifely");
          // display.setCursor(159, 5);
      // display.println("3:42");
          // display.setCursor(18, 192);
      // display.println("- Bride Comes to Yellow Sky");
      return;

    // Codegen for 03:43 for 1 quotations:
    case 223:
      Serial.println(F("Only one option for 03:43:"));
    Serial.println(F("03:43 - The clock says 3.43am. The thermometer says it's a chilly fourteen degrees Fahrenheit. The weatherman says the cold spell will last until Thursday, so bundle up and bundle up some more. There are icicles barring the window of the bat cave. - David Mitchell, Ghostwritten"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The clock says");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING The thermometer says it's a");
          // display.setCursor(5, 29);
      // display.println("chilly fourteen degrees Fahrenheit.");
          // display.setCursor(5, 41);
      // display.println("The weatherman says the cold spell");
          // display.setCursor(5, 53);
      // display.println("will last until Thursday, so bundle");
          // display.setCursor(5, 65);
      // display.println("up and bundle up some more. There");
          // display.setCursor(5, 77);
      // display.println("are icicles barring the window of");
          // display.setCursor(92, 5);
      // display.println("3.43am.");
          // display.setCursor(109, 192);
      // display.println("- Ghostwritten");
      return;

    // Codegen for 03:44 for 1 quotations:
    case 224:
      Serial.println(F("Only one option for 03:44:"));
    Serial.println(F("03:44 - It was dark. After she had switched the light on and been to the toilet, she checked her watch: 3.44 a.m. She undressed, put the cat out the door and returned to the twin bed. - Will Self, Liver: Leberknödel"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was dark. After she had");
          // display.setCursor(5, 17);
      // display.println("switched the light on and been to the");
          // display.setCursor(5, 29);
      // display.println("toilet, she checked her watch:");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING She");
          // display.setCursor(5, 53);
      // display.println("undressed, put the cat out the door and");
          // display.setCursor(5, 41);
      // display.println("3.44 a.m.");
          // display.setCursor(67, 192);
      // display.println("- Liver: Leberknödel");
      return;

    // Codegen for 03:45 for 1 quotations:
    case 225:
      Serial.println(F("Only one option for 03:45:"));
    Serial.println(F("03:45 - You keep too late hours! I heard of you the other night at Lady Rufford's dancing till four o' clock in the morning! Lord Goring: Only a quarter to four, father. - Oscar Wilde, An Ideal Husband"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("You keep too late hours! I heard");
          // display.setCursor(5, 17);
      // display.println("of you the other night at Lady");
          // display.setCursor(5, 29);
      // display.println("Rufford's dancing till four o' clock in");
          // display.setCursor(5, 41);
      // display.println("the morning! Lord Goring: Only a");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING,");
          // display.setCursor(5, 53);
      // display.println("quarter to four");
          // display.setCursor(81, 192);
      // display.println("- An Ideal Husband");
      return;

    // Codegen for 03:46 for 0 quotations:
    case 226:
      Serial.println(F("No quotes for 03:46"));
      return;

    // Codegen for 03:47 for 1 quotations:
    case 227:
      Serial.println(F("Only one option for 03:47:"));
    Serial.println(F("03:47 - I stayed awake until 3:47. That was the last time I looked at my watch before I fell asleep. It has a luminous face and lights up if you press a button so I could read it in the dark. I was cold and I was frightened Father might come out and find me. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I stayed awake until");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. That was the last time I looked");
          // display.setCursor(5, 29);
      // display.println("at my watch before I fell asleep. It");
          // display.setCursor(5, 41);
      // display.println("has a luminous face and lights up if");
          // display.setCursor(5, 53);
      // display.println("you press a button so I could read it");
          // display.setCursor(5, 65);
      // display.println("in the dark. I was cold and I was");
          // display.setCursor(5, 77);
      // display.println("frightened Father might come out and find");
          // display.setCursor(128, 5);
      // display.println("3:47");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 03:48 for 0 quotations:
    case 228:
      Serial.println(F("No quotes for 03:48"));
      return;

    // Codegen for 03:49 for 1 quotations:
    case 229:
      Serial.println(F("Only one option for 03:49:"));
    Serial.println(F("03:49 - It was 3.49 when he hit me because of the two hundred times I had said, \"I don't know.\" He hit me a lot after that. - Len Deighton, The Ipcress File"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING when he");
          // display.setCursor(5, 17);
      // display.println("hit me because of the two hundred");
          // display.setCursor(5, 29);
      // display.println("times I had said, \"I don't know.\" He");
          // display.setCursor(42, 5);
      // display.println("3.49");
          // display.setCursor(81, 192);
      // display.println("- The Ipcress File");
      return;

    // Codegen for 03:50 for 1 quotations:
    case 230:
      Serial.println(F("Only one option for 03:50:"));
    Serial.println(F("03:50 - She had used her cell phone to leave several messages on the answering machine in Sao Paulo of the young dentist of the previous evening, whose name was Fernando. The first was recorded at ten or five to four in the morning. - Peter Robb, A Death in Brazil: A Book of Omissions"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She had used her cell phone to");
          // display.setCursor(5, 17);
      // display.println("leave several messages on the");
          // display.setCursor(5, 29);
      // display.println("answering machine in Sao Paulo of the");
          // display.setCursor(5, 41);
      // display.println("young dentist of the previous");
          // display.setCursor(5, 53);
      // display.println("evening, whose name was Fernando. The");
          // display.setCursor(5, 65);
      // display.println("first was recorded at");
          // display.setCursor(5, 77);
      // display.println("");
          // display.setCursor(5, 77);
      // display.println("ten or five to four");
          // display.setCursor(123, 192);
      // display.println("- Peter Robb");
      return;

    // Codegen for 03:51 for 2 quotations:
    case 231:
      option = random(0, 2);
      Serial.print(F("2 options for 03:51. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:51 - Sweat trickled down my ribs. The digital reading on the clock-radio was 3:51. Always odd numbered at times like this. What does it mean? Is death odd-numbered? - Don DeLillo, White Noise "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sweat trickled down my ribs. The");
                // display.setCursor(5, 17);
      // display.println("digital reading on the clock-radio was");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING. Always odd");
                // display.setCursor(5, 41);
      // display.println("numbered at times like this. What does it");
                // display.setCursor(5, 29);
      // display.println("3:51");
                // display.setCursor(18, 192);
      // display.println("- Don DeLillo, White Noise ");
          return;
        case 1:
          Serial.println(F("03:51 - The digital reading on the clock-radio was 3:51. Always odd numbers at times like this. What does it mean? Is death odd-numbered? - Don DeLillo, White Noise"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The digital reading on the");
                // display.setCursor(5, 17);
      // display.println("clock-radio was TIMESTRING. Always");
                // display.setCursor(5, 29);
      // display.println("odd numbers at times like this. What");
                // display.setCursor(39, 17);
      // display.println("3:51");
                // display.setCursor(25, 192);
      // display.println("- Don DeLillo, White Noise");
          return;
      } // end switch (option)

    // Codegen for 03:52 for 0 quotations:
    case 232:
      Serial.println(F("No quotes for 03:52"));
      return;

    // Codegen for 03:53 for 0 quotations:
    case 233:
      Serial.println(F("No quotes for 03:53"));
      return;

    // Codegen for 03:54 for 1 quotations:
    case 234:
      Serial.println(F("Only one option for 03:54:"));
    Serial.println(F("03:54 - The charter flight from Florida touched down at Aldergrove minutes earlier, at 3.54 a.m. - Paul Muldoon, The More a Man Has, the More a Man Wants"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The charter flight from Florida");
          // display.setCursor(5, 17);
      // display.println("touched down at Aldergrove minutes");
          // display.setCursor(29, 29);
      // display.println("3.54 a.m.");
          // display.setCursor(109, 192);
      // display.println("- Paul Muldoon");
      return;

    // Codegen for 03:55 for 1 quotations:
    case 235:
      Serial.println(F("Only one option for 03:55:"));
    Serial.println(F("03:55 - Here in the cavernous basement at 3.55 a.m., in a single pool of light, is Theo Perowne. - Ian McEwan, Saturday"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Here in the cavernous basement");
          // display.setCursor(5, 17);
      // display.println("at TIMESTRING, in a");
          // display.setCursor(8, 17);
      // display.println("3.55 a.m.");
          // display.setCursor(53, 192);
      // display.println("- Ian McEwan, Saturday");
      return;

    // Codegen for 03:56 for 0 quotations:
    case 236:
      Serial.println(F("No quotes for 03:56"));
      return;

    // Codegen for 03:57 for 1 quotations:
    case 237:
      Serial.println(F("Only one option for 03:57:"));
    Serial.println(F("03:57 - ...I am in my old room, yes, in the dark, certainly, and it is cold, obviously, but what time is it? \"Nearly four, son.\" But I mean what time? - Ken Kesey, Sometimes a Great Notion "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("...I am in my old room, yes, in the");
          // display.setCursor(5, 17);
      // display.println("dark, certainly, and it is cold,");
          // display.setCursor(5, 29);
      // display.println("obviously, but what time is it?");
          // display.setCursor(5, 41);
      // display.println("\"TIMESTRING,");
          // display.setCursor(5, 41);
      // display.println("Nearly four");
          // display.setCursor(25, 192);
      // display.println("- Sometimes a Great Notion");
      return;

    // Codegen for 03:58 for 2 quotations:
    case 238:
      option = random(0, 2);
      Serial.print(F("2 options for 03:58. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:58 - By peering through a crack in the bubbling sun on the window - the face of a clock on the opposite wall. The clock had stopped at two minutes to four early in the morning, or who could tell, it may have been earlier still - Wilson Harris, Heartland"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By peering through a crack in the");
                // display.setCursor(5, 17);
      // display.println("bubbling sun on the window - the face of a");
                // display.setCursor(5, 29);
      // display.println("clock on the opposite wall. The clock");
                // display.setCursor(5, 41);
      // display.println("had stopped at");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING early in the morning, or who");
                // display.setCursor(5, 77);
      // display.println("could tell, it may have been earlier");
                // display.setCursor(5, 53);
      // display.println("two minutes to four");
                // display.setCursor(25, 192);
      // display.println("- Wilson Harris, Heartland");
          return;
        case 1:
          Serial.println(F("03:58 - The clock atop the clubhouse reads 3:58. - Don Delillo, Underworld "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The clock atop the clubhouse");
                // display.setCursor(11, 17);
      // display.println("3:58");
                // display.setCursor(25, 192);
      // display.println("- Don Delillo, Underworld ");
          return;
      } // end switch (option)

    // Codegen for 03:59 for 1 quotations:
    case 239:
      Serial.println(F("Only one option for 03:59:"));
    Serial.println(F("03:59 - ...I am in my old room, yes, in the dark, certainly, and it is cold, obviously, but what time is it? \"Nearly four, son.\" - Ken Kesey, Sometimes a Great Notion"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("...I am in my old room, yes, in the");
          // display.setCursor(5, 17);
      // display.println("dark, certainly, and it is cold,");
          // display.setCursor(5, 29);
      // display.println("obviously, but what time is it?");
          // display.setCursor(5, 41);
      // display.println("\"TIMESTRING,");
          // display.setCursor(5, 41);
      // display.println("Nearly four");
          // display.setCursor(25, 192);
      // display.println("- Sometimes a Great Notion");
      return;

    // Codegen for 04:00 for 7 quotations:
    case 240:
      option = random(0, 7);
      Serial.print(F("7 options for 04:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:00 - Nothing happened, he said wanly. \"I waited, and about four o'clock she came to the window and stood there for a minute and then turned out the light. - F. Scott Fitzgerald, The Great Gatsby "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Nothing happened, he said wanly.");
                // display.setCursor(5, 17);
      // display.println("\"I waited, and about");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING she came to the window and stood");
                // display.setCursor(5, 41);
      // display.println("there for a minute and then turned out");
                // display.setCursor(117, 17);
      // display.println("four o'clock");
                // display.setCursor(81, 192);
      // display.println("- The Great Gatsby");
          return;
        case 1:
          Serial.println(F("04:00 - I looked at the clock and it was (yes, you guessed it) four am. I should have taken comfort from the fact that approximately quarter of the Greenwich Mean Time world had just jolted awake also and were lying, staring miserably into the darkness, worrying ... - Marian Keyes, Watermelon "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I looked at the clock and it was");
                // display.setCursor(5, 17);
      // display.println("(yes, you guessed it)");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING I should have taken comfort");
                // display.setCursor(5, 41);
      // display.println("from the fact that approximately");
                // display.setCursor(5, 53);
      // display.println("quarter of the Greenwich Mean Time");
                // display.setCursor(5, 65);
      // display.println("world had just jolted awake also and");
                // display.setCursor(5, 77);
      // display.println("were lying, staring miserably into");
                // display.setCursor(105, 17);
      // display.println("four am.");
                // display.setCursor(18, 192);
      // display.println("- Marian Keyes, Watermelon ");
          return;
        case 2:
          Serial.println(F("04:00 - Suddenly, he started to cry. Curled up on the sofa he sobbed loudly. Michel looked at his watch; it was just after 4am. On the screen a wild cat had a rabbit in its mouth. - Michel Houellebecq, Atomised "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Suddenly, he started to cry.");
                // display.setCursor(5, 17);
      // display.println("Curled up on the sofa he sobbed loudly.");
                // display.setCursor(5, 29);
      // display.println("Michel looked at his watch; it was just");
                // display.setCursor(5, 41);
      // display.println("after TIMESTRING. On the screen a");
                // display.setCursor(11, 41);
      // display.println("4am");
                // display.setCursor(137, 192);
      // display.println("- Atomised");
          return;
        case 3:
          Serial.println(F("04:00 - The Birds begun at Four o'clock- Their period for Dawn- - Emily Dickinson, The Birds begun at Four o'clock"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Birds begun at");
                // display.setCursor(114, 5);
      // display.println("Four o'clock");
                // display.setCursor(88, 192);
      // display.println("- Emily Dickinson");
          return;
        case 4:
          Serial.println(F("04:00 - The night before Albert Kessler arrived in Santa Teresa, at four in the morning, Sergio Gonzalez Rodriguez got a call from Azucena Esquivel Plata - Roberto Bolano, 2666"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The night before Albert Kessler");
                // display.setCursor(5, 17);
      // display.println("arrived in Santa Teresa,");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING, Sergio Gonzalez Rodriguez got");
                // display.setCursor(5, 53);
      // display.println("a call from Azucena Esquivel");
                // display.setCursor(5, 29);
      // display.println("at four in the morning");
                // display.setCursor(53, 192);
      // display.println("- Roberto Bolano, 2666");
          return;
        case 5:
          Serial.println(F("04:00 - Waking at four to soundless dark, I stare. In time the curtain-edges will grow light. Till then I see what's really always there: Unresting death, a whole day nearer now, Making all thought impossible but how And where and when I shall myself die. - Philip Larkin, Aubade "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Waking TIMESTRING to");
                // display.setCursor(5, 17);
      // display.println("soundless dark, I stare. In time the");
                // display.setCursor(5, 29);
      // display.println("curtain-edges will grow light. Till then I");
                // display.setCursor(5, 41);
      // display.println("see what's really always there:");
                // display.setCursor(5, 53);
      // display.println("Unresting death, a whole day nearer now,");
                // display.setCursor(5, 65);
      // display.println("Making all thought impossible but how");
                // display.setCursor(5, 77);
      // display.println("And where and when I shall myself");
                // display.setCursor(48, 5);
      // display.println("at four");
                // display.setCursor(39, 192);
      // display.println("- Philip Larkin, Aubade ");
          return;
        case 6:
          Serial.println(F("04:00 - he asked if he could have tea available for them. Tommy agreed, and the chefs, grateful for a hot drink at four in the morning, lingered and bought. - Jennifer Donnelly, The Tea Rose "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("he asked if he could have tea");
                // display.setCursor(5, 17);
      // display.println("available for them. Tommy agreed, and the");
                // display.setCursor(5, 29);
      // display.println("chefs, grateful for a hot drink");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 41);
      // display.println("at four");
                // display.setCursor(109, 192);
      // display.println("- The Tea Rose");
          return;
      } // end switch (option)

    // Codegen for 04:01 for 1 quotations:
    case 241:
      Serial.println(F("Only one option for 04:01:"));
    Serial.println(F("04:01 - Suddenly, he started to cry. Curled up on the sofa he sobbed loudly. Michel looked at his watch; it was just after 4am. On the screen a wild cat had a rabbit in its mouth. - Michel Houellebecq, Atomised"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Suddenly, he started to cry.");
          // display.setCursor(5, 17);
      // display.println("Curled up on the sofa he sobbed loudly.");
          // display.setCursor(5, 29);
      // display.println("Michel looked at his watch; it was");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING. On");
          // display.setCursor(5, 53);
      // display.println("the screen a wild cat had a rabbit in");
          // display.setCursor(5, 41);
      // display.println("just after 4am");
          // display.setCursor(137, 192);
      // display.println("- Atomised");
      return;

    // Codegen for 04:02 for 1 quotations:
    case 242:
      Serial.println(F("Only one option for 04:02:"));
    Serial.println(F("04:02 - I walked up and down the row. No one gave me a second look. Finally I sat down next to a man. He paid no attention. My watch said 4:02. Maybe he was late. - Nicole Krauss, The History of Love"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I walked up and down the row. No");
          // display.setCursor(5, 17);
      // display.println("one gave me a second look. Finally I");
          // display.setCursor(5, 29);
      // display.println("sat down next to a man. He paid no");
          // display.setCursor(5, 41);
      // display.println("attention. My watch said TIMESTRING.");
          // display.setCursor(96, 41);
      // display.println("4:02");
          // display.setCursor(60, 192);
      // display.println("- The History of Love");
      return;

    // Codegen for 04:03 for 1 quotations:
    case 243:
      Serial.println(F("Only one option for 04:03:"));
    Serial.println(F("04:03 - It's 4:03 a.m. on a supremely cold January morning and I'm just getting home. I've been out dancing and I'm only half drunk but utterly exhausted. - Audrey Niffenegger, The Time Traveler's Wife"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It's TIMESTRING on a");
          // display.setCursor(5, 17);
      // display.println("supremely cold January morning and I'm");
          // display.setCursor(5, 29);
      // display.println("just getting home. I've been out");
          // display.setCursor(5, 41);
      // display.println("dancing and I'm only half drunk but");
          // display.setCursor(34, 5);
      // display.println("4:03 a.m.");
          // display.setCursor(25, 192);
      // display.println("- The Time Traveler's Wife");
      return;

    // Codegen for 04:04 for 1 quotations:
    case 244:
      Serial.println(F("Only one option for 04:04:"));
    Serial.println(F("04:04 - Four minutes after four! It's still very early and to get from here to there won't take me more than 15 minutes, even walking slowly. She told me around five o'clock. Wouldn't it be better to wait on the corner? - Cirilo Villaverde, Angel Hill"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING It's still very early and to get");
          // display.setCursor(5, 29);
      // display.println("from here to there won't take me more");
          // display.setCursor(5, 41);
      // display.println("than 15 minutes, even walking");
          // display.setCursor(5, 53);
      // display.println("slowly. She told me around five");
          // display.setCursor(5, 65);
      // display.println("o'clock. Wouldn't it be better to wait on");
          // display.setCursor(5, 5);
      // display.println("Four minutes after four!");
          // display.setCursor(123, 192);
      // display.println("- Angel Hill");
      return;

    // Codegen for 04:05 for 1 quotations:
    case 245:
      Serial.println(F("Only one option for 04:05:"));
    Serial.println(F("04:05 - Leaves were being blown against my window. It was 4.05am. The moon had shifted in the sky, glaring through a clotted mass of clouds like a candled egg. - Joyce Carol Oates, We Were the Mulvaneys"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Leaves were being blown against");
          // display.setCursor(5, 17);
      // display.println("my window. It was");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING The moon had shifted in the sky,");
          // display.setCursor(5, 41);
      // display.println("glaring through a clotted mass of");
          // display.setCursor(95, 17);
      // display.println("4.05am.");
          // display.setCursor(46, 192);
      // display.println("- We Were the Mulvaneys");
      return;

    // Codegen for 04:06 for 1 quotations:
    case 246:
      Serial.println(F("Only one option for 04:06:"));
    Serial.println(F("04:06 - Dexter looked at Kate's note, then her face, then the clock. It was 4.06am, the night before they would go to the restaurant. - Chris Pavone, The Expats"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Dexter looked at Kate's note,");
          // display.setCursor(5, 17);
      // display.println("then her face, then the clock. It was");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, the night");
          // display.setCursor(5, 41);
      // display.println("before they would go to the");
          // display.setCursor(5, 29);
      // display.println("4.06am");
          // display.setCursor(25, 192);
      // display.println("- Chris Pavone, The Expats");
      return;

    // Codegen for 04:07 for 1 quotations:
    case 247:
      Serial.println(F("Only one option for 04:07:"));
    Serial.println(F("04:07 - 4.07am. Why am I standing? My shoulders feel cold and I'm shivering. I become aware that I'm standing in the middle of the room. I immediately look at the bedroom door. Closed, with no signs of a break-in. Why did I get up? - Miha Mazzini, Guarding Hanna: A Novel"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING Why am I");
          // display.setCursor(5, 17);
      // display.println("standing? My shoulders feel cold and I'm");
          // display.setCursor(5, 29);
      // display.println("shivering. I become aware that I'm");
          // display.setCursor(5, 41);
      // display.println("standing in the middle of the room. I");
          // display.setCursor(5, 53);
      // display.println("immediately look at the bedroom door.");
          // display.setCursor(5, 65);
      // display.println("Closed, with no signs of a break-in. Why");
          // display.setCursor(5, 5);
      // display.println("4.07am.");
          // display.setCursor(32, 192);
      // display.println("- Guarding Hanna: A Novel");
      return;

    // Codegen for 04:08 for 1 quotations:
    case 248:
      Serial.println(F("Only one option for 04:08:"));
    Serial.println(F("04:08 - It was at 4:08 a.m. beneath the cool metal of a jungle gym that all Andrew's dreams came true. He kissed his one true love and swore up and down that it would last forever to this exhausted companion throughout their long trek home. - Seth O'Connell, Dying in the Twilight of Summer"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was at TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("beneath the cool metal of a jungle gym");
          // display.setCursor(5, 29);
      // display.println("that all Andrew's dreams came true.");
          // display.setCursor(5, 41);
      // display.println("He kissed his one true love and");
          // display.setCursor(5, 53);
      // display.println("swore up and down that it would last");
          // display.setCursor(5, 65);
      // display.println("forever to this exhausted companion");
          // display.setCursor(57, 5);
      // display.println("4:08 a.m.");
          // display.setCursor(95, 192);
      // display.println("- Seth O'Connell");
      return;

    // Codegen for 04:09 for 0 quotations:
    case 249:
      Serial.println(F("No quotes for 04:09"));
      return;

    // Codegen for 04:10 for 0 quotations:
    case 250:
      Serial.println(F("No quotes for 04:10"));
      return;

    // Codegen for 04:11 for 1 quotations:
    case 251:
      Serial.println(F("Only one option for 04:11:"));
    Serial.println(F("04:11 - The next morning I awaken at exactly eleven minutes after four, having slept straight through my normal middle-of-the-night insomniac waking at three. - Karen Karbo, The Stuff of Life"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The next morning I awaken at");
          // display.setCursor(5, 17);
      // display.println("exactly");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, having slept straight through");
          // display.setCursor(5, 41);
      // display.println("my normal middle-of-the-night");
          // display.setCursor(13, 17);
      // display.println("eleven minutes after four");
          // display.setCursor(74, 192);
      // display.println("- The Stuff of Life");
      return;

    // Codegen for 04:12 for 2 quotations:
    case 252:
      option = random(0, 2);
      Serial.print(F("2 options for 04:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:12 - Finally, she signalled with her light that she'd made it to the top. I signalled back, then shined the light downward to see how far the water had risen. I couldn't make out a thing. My watch read four-twelve in the morning. Not yet dawn. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Finally, she signalled with her");
                // display.setCursor(5, 17);
      // display.println("light that she'd made it to the top. I");
                // display.setCursor(5, 29);
      // display.println("signalled back, then shined the light");
                // display.setCursor(5, 41);
      // display.println("downward to see how far the water had");
                // display.setCursor(5, 53);
      // display.println("risen. I couldn't make out a thing. My");
                // display.setCursor(5, 65);
      // display.println("watch read TIMESTRING in");
                // display.setCursor(40, 65);
      // display.println("four-twelve");
                // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
          return;
        case 1:
          Serial.println(F("04:12 - Karen felt the bed move beneath Harry's weight. Lying on her side she opened her eyes to see digital numbers in the dark, 4:12 in pale green. Behind her Harry continued to move, settling in. She watched the numbers change to 4:13. - Elmore Leonard, Get Shorty"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Karen felt the bed move beneath");
                // display.setCursor(5, 17);
      // display.println("Harry's weight. Lying on her side she");
                // display.setCursor(5, 29);
      // display.println("opened her eyes to see digital numbers");
                // display.setCursor(5, 41);
      // display.println("in the dark, TIMESTRING in");
                // display.setCursor(5, 53);
      // display.println("pale green. Behind her Harry");
                // display.setCursor(5, 65);
      // display.println("continued to move, settling in. She");
                // display.setCursor(66, 41);
      // display.println("4:12");
                // display.setCursor(11, 192);
      // display.println("- Elmore Leonard, Get Shorty");
          return;
      } // end switch (option)

    // Codegen for 04:13 for 1 quotations:
    case 253:
      Serial.println(F("Only one option for 04:13:"));
    Serial.println(F("04:13 - Karen felt the bed move beneath Harry's weight. Lying on her side she opened her eyes to see digital numbers in the dark, 4:12 in pale green. Behind her Harry continued to move, settling in. She watched the numbers change to 4:13. - Elmore Leonard, Get Shorty"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Karen felt the bed move beneath");
          // display.setCursor(5, 17);
      // display.println("Harry's weight. Lying on her side she");
          // display.setCursor(5, 29);
      // display.println("opened her eyes to see digital numbers");
          // display.setCursor(5, 41);
      // display.println("in the dark, 4:12 in pale green.");
          // display.setCursor(5, 53);
      // display.println("Behind her Harry continued to move,");
          // display.setCursor(5, 65);
      // display.println("settling in. She watched the numbers");
          // display.setCursor(27, 77);
      // display.println("4:13");
          // display.setCursor(11, 192);
      // display.println("- Elmore Leonard, Get Shorty");
      return;

    // Codegen for 04:14 for 1 quotations:
    case 254:
      Serial.println(F("Only one option for 04:14:"));
    Serial.println(F("04:14 - At 4:14 a.m., the two men returned to the Jeep. After the passenger replaced the cans in the back of the Jeep, the driver backed out of the driveway and headed east. The last images found on the film appeared to be flames or smoke. - David H Swendsen, A Real Nightmare"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, the two");
          // display.setCursor(5, 17);
      // display.println("men returned to the Jeep. After the");
          // display.setCursor(5, 29);
      // display.println("passenger replaced the cans in the back of");
          // display.setCursor(5, 41);
      // display.println("the Jeep, the driver backed out of");
          // display.setCursor(5, 53);
      // display.println("the driveway and headed east. The");
          // display.setCursor(5, 65);
      // display.println("last images found on the film");
          // display.setCursor(20, 5);
      // display.println("4:14 a.m.");
          // display.setCursor(81, 192);
      // display.println("- A Real Nightmare");
      return;

    // Codegen for 04:15 for 1 quotations:
    case 255:
      Serial.println(F("Only one option for 04:15:"));
    Serial.println(F("04:15 - Alice wants to warn her that a defect runs in the family, like flat feet or diabetes: they're all in danger of ending up alone by their own stubborn choice. The ugly kitchen clock says four-fifteen. - Barbara Kingsolver, Pigs in Heaven"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Alice wants to warn her that a");
          // display.setCursor(5, 17);
      // display.println("defect runs in the family, like flat");
          // display.setCursor(5, 29);
      // display.println("feet or diabetes: they're all in");
          // display.setCursor(5, 41);
      // display.println("danger of ending up alone by their own");
          // display.setCursor(5, 53);
      // display.println("stubborn choice. The ugly kitchen clock");
          // display.setCursor(10, 65);
      // display.println("four-fifteen");
          // display.setCursor(95, 192);
      // display.println("- Pigs in Heaven");
      return;

    // Codegen for 04:16 for 2 quotations:
    case 256:
      option = random(0, 2);
      Serial.print(F("2 options for 04:16. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:16 - I stooped to pick up my watch from the floor. Four-sixteen. Another hour until dawn. - Haruki Murakami, Hard Boiled Wonderland and the End of the World"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I stooped to pick up my watch from");
                // display.setCursor(5, 17);
      // display.println("the floor.");
                // display.setCursor(52, 17);
      // display.println("Four-sixteen");
                // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
          return;
        case 1:
          Serial.println(F("04:16 - They pulled into the visitor's carpark at four sixteen am. He knew it was four sixteen because the entrance to the maternity unit sported a digital clock beneath the signage. - Maree Anderson, Freaks in the City: Book Two of the Freaks Series"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("They pulled into the visitor's");
                // display.setCursor(5, 17);
      // display.println("carpark at TIMESTRING am.");
                // display.setCursor(5, 29);
      // display.println("He knew it was");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING because the entrance to the");
                // display.setCursor(5, 53);
      // display.println("maternity unit sported a digital clock");
                // display.setCursor(74, 29);
      // display.println("four sixteen");
                // display.setCursor(95, 192);
      // display.println("- Maree Anderson");
          return;
      } // end switch (option)

    // Codegen for 04:17 for 1 quotations:
    case 257:
      Serial.println(F("Only one option for 04:17:"));
    Serial.println(F("04:17 - He awoke at 4.17am in a sweat. He had been dreaming of Africa again, and then the dream had continued in the U.S. when he was a young man. But Inbata had been there, watching him. - Douglas Phinney, The Vile"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He awoke at TIMESTRING in");
          // display.setCursor(5, 17);
      // display.println("a sweat. He had been dreaming of");
          // display.setCursor(5, 29);
      // display.println("Africa again, and then the dream had");
          // display.setCursor(5, 41);
      // display.println("continued in the U.S. when he was a young");
          // display.setCursor(5, 53);
      // display.println("man. But Inbata had been there,");
          // display.setCursor(71, 5);
      // display.println("4.17am");
          // display.setCursor(18, 192);
      // display.println("- Douglas Phinney, The Vile");
      return;

    // Codegen for 04:18 for 1 quotations:
    case 258:
      Serial.println(F("Only one option for 04:18:"));
    Serial.println(F("04:18 - I grabbed the alarm clock, threw it on my lap, and slapped the red and black buttons with both hands. The ringing didn't stop. The telephone! The clock read four-eighteen. It was dark outside. Four-eighteen a.m. I got out of bed and picked up the receiver. \"Hello?\" - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I grabbed the alarm clock, threw");
          // display.setCursor(5, 17);
      // display.println("it on my lap, and slapped the red and");
          // display.setCursor(5, 29);
      // display.println("black buttons with both hands. The");
          // display.setCursor(5, 41);
      // display.println("ringing didn't stop. The telephone!");
          // display.setCursor(5, 53);
      // display.println("The clock read");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING. It was dark outside.");
          // display.setCursor(5, 77);
      // display.println("Four-eighteen a.m. I got out of bed and picked");
          // display.setCursor(74, 53);
      // display.println("four-eighteen");
          // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
      return;

    // Codegen for 04:19 for 0 quotations:
    case 259:
      Serial.println(F("No quotes for 04:19"));
      return;

    // Codegen for 04:20 for 0 quotations:
    case 260:
      Serial.println(F("No quotes for 04:20"));
      return;

    // Codegen for 04:21 for 0 quotations:
    case 261:
      Serial.println(F("No quotes for 04:21"));
      return;

    // Codegen for 04:22 for 1 quotations:
    case 262:
      Serial.println(F("Only one option for 04:22:"));
    Serial.println(F("04:22 - He hurt me to the point where I wanted to tell him something. My watch said 4.22 now. It had stopped. It was smashed. - Len Deighton, The Ipcress File"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He hurt me to the point where I");
          // display.setCursor(5, 17);
      // display.println("wanted to tell him something. My watch");
          // display.setCursor(5, 29);
      // display.println("said TIMESTRING now. It had");
          // display.setCursor(10, 29);
      // display.println("4.22");
          // display.setCursor(81, 192);
      // display.println("- The Ipcress File");
      return;

    // Codegen for 04:23 for 2 quotations:
    case 263:
      option = random(0, 2);
      Serial.print(F("2 options for 04:23. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:23 - 4:23, Monday morning, Iceland Square. A number of people in the vicinity of Bjornsongatan are awakened by loud screams. - John Ajvide Lindqvist, Let The Right One In"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING, Monday");
                // display.setCursor(5, 17);
      // display.println("morning, Iceland Square. A number of");
                // display.setCursor(5, 29);
      // display.println("people in the vicinity of");
                // display.setCursor(5, 5);
      // display.println("4:23");
                // display.setCursor(53, 192);
      // display.println("- Let The Right One In");
          return;
        case 1:
          Serial.println(F("04:23 - Her chip pulsed the time. 04:23:04. It had been a long day. - William Gibson, Neuromancer "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Her chip pulsed the time.");
                // display.setCursor(157, 5);
      // display.println("04:23");
                // display.setCursor(116, 192);
      // display.println("- Neuromancer");
          return;
      } // end switch (option)

    // Codegen for 04:24 for 0 quotations:
    case 264:
      Serial.println(F("No quotes for 04:24"));
      return;

    // Codegen for 04:25 for 1 quotations:
    case 265:
      Serial.println(F("Only one option for 04:25:"));
    Serial.println(F("04:25 - As I dressed I glanced at my watch. It was no wonder that no one was stirring. It was twenty-five minutes past four. - Sir Arthur Conan Doyle, The Adventures of Sherlock Holmes"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("As I dressed I glanced at my");
          // display.setCursor(5, 17);
      // display.println("watch. It was no wonder that no one was");
          // display.setCursor(5, 29);
      // display.println("stirring. It was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("twenty-five minutes past four");
          // display.setCursor(39, 192);
      // display.println("- Sir Arthur Conan Doyle");
      return;

    // Codegen for 04:26 for 0 quotations:
    case 266:
      Serial.println(F("No quotes for 04:26"));
      return;

    // Codegen for 04:27 for 0 quotations:
    case 267:
      Serial.println(F("No quotes for 04:27"));
      return;

    // Codegen for 04:28 for 0 quotations:
    case 268:
      Serial.println(F("No quotes for 04:28"));
      return;

    // Codegen for 04:29 for 0 quotations:
    case 269:
      Serial.println(F("No quotes for 04:29"));
      return;

    // Codegen for 04:30 for 3 quotations:
    case 270:
      option = random(0, 3);
      Serial.print(F("3 options for 04:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:30 - Chloe had not given it a chance, I argued with myself, knowing the hopelessness of these inner courts announcing hollow verdicts at four thirty in the morning. - Alain de Botton, Essays on Love "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Chloe had not given it a chance, I");
                // display.setCursor(5, 17);
      // display.println("argued with myself, knowing the");
                // display.setCursor(5, 29);
      // display.println("hopelessness of these inner courts");
                // display.setCursor(5, 41);
      // display.println("announcing hollow verdicts at");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 53);
      // display.println("four thirty");
                // display.setCursor(95, 192);
      // display.println("- Essays on Love");
          return;
        case 1:
          Serial.println(F("04:30 - Hester Thrale undulates in in a false fox jacket at 2330 as usual even though she has to be up at like 0430 for the breakfast shift at the Provident Nursing Home and sometimes eats breakfast with Gately, both their faces nodding perilously close to their Frosted Flakes. - David Foster Wallace, Infinite Jest"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Hester Thrale undulates in in a");
                // display.setCursor(5, 17);
      // display.println("false fox jacket at 2330 as usual even");
                // display.setCursor(5, 29);
      // display.println("though she has to be up at like");
                // display.setCursor(5, 41);
      // display.println("0TIMESTRING for the breakfast shift at the");
                // display.setCursor(5, 53);
      // display.println("Provident Nursing Home and sometimes");
                // display.setCursor(5, 65);
      // display.println("eats breakfast with Gately, both");
                // display.setCursor(5, 77);
      // display.println("their faces nodding perilously close");
                // display.setCursor(145, 29);
      // display.println("430");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 2:
          Serial.println(F("04:30 - Hester Thrale undulates in in a false fox jacket at 2330 as usual even though she has to be up at like 0430 for the breakfast shift at the Provident Nursing Home and sometimes eats breakfast with Gately - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Hester Thrale undulates in in a");
                // display.setCursor(5, 17);
      // display.println("false fox jacket at 2330 as usual even");
                // display.setCursor(5, 29);
      // display.println("though she has to be up at like");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING for the breakfast shift at the");
                // display.setCursor(5, 53);
      // display.println("Provident Nursing Home and sometimes");
                // display.setCursor(145, 29);
      // display.println("0430");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
      } // end switch (option)

    // Codegen for 04:31 for 1 quotations:
    case 271:
      Serial.println(F("Only one option for 04:31:"));
    Serial.println(F("04:31 - An earthquake hit Los Angeles at 4:31 this morning and the images began arriving via CNN right away. - Douglas Coupland, Microserfs"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("An earthquake hit Los Angeles at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING this morning and");
          // display.setCursor(5, 29);
      // display.println("the images began arriving via CNN");
          // display.setCursor(5, 17);
      // display.println("4:31");
          // display.setCursor(123, 192);
      // display.println("- Microserfs");
      return;

    // Codegen for 04:32 for 1 quotations:
    case 272:
      Serial.println(F("Only one option for 04:32:"));
    Serial.println(F("04:32 - On his first day of kindergarten, Peter Houghton woke up at 4:32 a.m. He padded into his parents' room and asked if it was time yet to take the school bus. - Jodi Picoult, Nineteen Minutes"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("On his first day of");
          // display.setCursor(5, 17);
      // display.println("kindergarten, Peter Houghton woke up at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING He padded");
          // display.setCursor(5, 41);
      // display.println("into his parents' room and asked if it");
          // display.setCursor(5, 29);
      // display.println("4:32 a.m.");
          // display.setCursor(81, 192);
      // display.println("- Nineteen Minutes");
      return;

    // Codegen for 04:33 for 0 quotations:
    case 273:
      Serial.println(F("No quotes for 04:33"));
      return;

    // Codegen for 04:34 for 0 quotations:
    case 274:
      Serial.println(F("No quotes for 04:34"));
      return;

    // Codegen for 04:35 for 1 quotations:
    case 275:
      Serial.println(F("Only one option for 04:35:"));
    Serial.println(F("04:35 - No manner of exhaustion can keep a child asleep much later than six a.m. on Christmas Day. Colby awoke at 4:35. - C Robert Cargill, Dreams and Shadows"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("No manner of exhaustion can keep");
          // display.setCursor(5, 17);
      // display.println("a child asleep much later than six");
          // display.setCursor(5, 29);
      // display.println("a.m. on Christmas Day. Colby awoke at");
          // display.setCursor(5, 41);
      // display.println("4:35");
          // display.setCursor(67, 192);
      // display.println("- Dreams and Shadows");
      return;

    // Codegen for 04:36 for 1 quotations:
    case 276:
      Serial.println(F("Only one option for 04:36:"));
    Serial.println(F("04:36 - At 4:36 that morning, alone in my hotel room, it had been a much better scene. Spencer had blanched, confounded by the inescapable logic of my accusation. A few drops of perspiration had formed on his upper lip. A tiny vein had started to throb in his temple. - Ross Thomas, The Brass Go-Between"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING that morning,");
          // display.setCursor(5, 17);
      // display.println("alone in my hotel room, it had been a");
          // display.setCursor(5, 29);
      // display.println("much better scene. Spencer had");
          // display.setCursor(5, 41);
      // display.println("blanched, confounded by the inescapable");
          // display.setCursor(5, 53);
      // display.println("logic of my accusation. A few drops of");
          // display.setCursor(5, 65);
      // display.println("perspiration had formed on his upper lip. A");
          // display.setCursor(5, 77);
      // display.println("tiny vein had started to throb in his");
          // display.setCursor(20, 5);
      // display.println("4:36");
          // display.setCursor(53, 192);
      // display.println("- The Brass Go-Between");
      return;

    // Codegen for 04:37 for 0 quotations:
    case 277:
      Serial.println(F("No quotes for 04:37"));
      return;

    // Codegen for 04:38 for 1 quotations:
    case 278:
      Serial.println(F("Only one option for 04:38:"));
    Serial.println(F("04:38 - At 4.38 a.m. as the sun is coming up over Gorley Woods, I hear a strange rustling in the grass beside me. I peer closely but can see nothing. - Jonathan Barrow, The Queue"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING as the");
          // display.setCursor(5, 17);
      // display.println("sun is coming up over Gorley Woods, I");
          // display.setCursor(5, 29);
      // display.println("hear a strange rustling in the grass");
          // display.setCursor(5, 41);
      // display.println("beside me. I peer closely but can see");
          // display.setCursor(20, 5);
      // display.println("4.38 a.m.");
          // display.setCursor(11, 192);
      // display.println("- Jonathan Barrow, The Queue");
      return;

    // Codegen for 04:39 for 0 quotations:
    case 279:
      Serial.println(F("No quotes for 04:39"));
      return;

    // Codegen for 04:40 for 1 quotations:
    case 280:
      Serial.println(F("Only one option for 04:40:"));
    Serial.println(F("04:40 - I settled into a daily routine. Wake up at 4.40am, shower, get on the train north by ten after five. - Tina Fey, Bossypants"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I settled into a daily routine.");
          // display.setCursor(5, 17);
      // display.println("Wake up at TIMESTRING,");
          // display.setCursor(5, 29);
      // display.println("shower, get on the train north by ten");
          // display.setCursor(40, 17);
      // display.println("4.40am");
          // display.setCursor(53, 192);
      // display.println("- Tina Fey, Bossypants");
      return;

    // Codegen for 04:41 for 1 quotations:
    case 281:
      Serial.println(F("Only one option for 04:41:"));
    Serial.println(F("04:41 - At 4:41 Crane's voice crackled through the walkie-talkie as if he'd read their thoughts of mutiny. “Everyone into the elevator. Now!” Only moments before the call he and C.J. had finished what they hoped would be a successful diversion. - Roland S. Jefferson, Damaged Goods: A Novel"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING Crane's voice");
          // display.setCursor(5, 17);
      // display.println("crackled through the walkie-talkie as");
          // display.setCursor(5, 29);
      // display.println("if he'd read their thoughts of");
          // display.setCursor(5, 41);
      // display.println("mutiny. “Everyone into the elevator.");
          // display.setCursor(5, 53);
      // display.println("Now!” Only moments before the call he");
          // display.setCursor(5, 65);
      // display.println("and C.J. had finished what they");
          // display.setCursor(5, 77);
      // display.println("hoped would be a successful");
          // display.setCursor(20, 5);
      // display.println("4:41");
          // display.setCursor(39, 192);
      // display.println("- Damaged Goods: A Novel");
      return;

    // Codegen for 04:42 for 0 quotations:
    case 282:
      Serial.println(F("No quotes for 04:42"));
      return;

    // Codegen for 04:43 for 1 quotations:
    case 283:
      Serial.println(F("Only one option for 04:43:"));
    Serial.println(F("04:43 - The time is four forty-three in the mornin an it's almost light oot there. - Suhayl Saadi, Pyschoraag"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The time is");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING in the mornin an it's almost");
          // display.setCursor(71, 5);
      // display.println("four forty-three");
          // display.setCursor(25, 192);
      // display.println("- Suhayl Saadi, Pyschoraag");
      return;

    // Codegen for 04:44 for 0 quotations:
    case 284:
      Serial.println(F("No quotes for 04:44"));
      return;

    // Codegen for 04:45 for 1 quotations:
    case 285:
      Serial.println(F("Only one option for 04:45:"));
    Serial.println(F("04:45 - One of these mornings she'll be lying dead beside me and I won't even notice, he thinks. Or maybe it'll be me. Daybreak will reveal that one of us has been left alone. He checks the clock on the table next to the bed. The hands glow and register 4:45 a.m. - Henning Mankell, Faceless Killers "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("One of these mornings she'll be");
          // display.setCursor(5, 17);
      // display.println("lying dead beside me and I won't even");
          // display.setCursor(5, 29);
      // display.println("notice, he thinks. Or maybe it'll be me.");
          // display.setCursor(5, 41);
      // display.println("Daybreak will reveal that one of us has");
          // display.setCursor(5, 53);
      // display.println("been left alone. He checks the clock");
          // display.setCursor(5, 65);
      // display.println("on the table next to the bed. The");
          // display.setCursor(5, 77);
      // display.println("hands glow and register");
          // display.setCursor(119, 77);
      // display.println("4:45 a.m.");
          // display.setCursor(81, 192);
      // display.println("- Faceless Killers");
      return;

    // Codegen for 04:46 for 1 quotations:
    case 286:
      Serial.println(F("Only one option for 04:46:"));
    Serial.println(F("04:46 - The phone rang again at four-forty-six. \"Hello,\" I said. \"Hello,\" came a woman's voice. \"Sorry about the time before. There's a disturbance in the sound field. Sometimes the sound goes away.\" \"The sound goes away?\" \"Yes,\" she said. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The phone rang again at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING.");
          // display.setCursor(5, 29);
      // display.println("\"Hello,\" I said. \"Hello,\" came a");
          // display.setCursor(5, 41);
      // display.println("woman's voice. \"Sorry about the time");
          // display.setCursor(5, 53);
      // display.println("before. There's a disturbance in the");
          // display.setCursor(5, 65);
      // display.println("sound field. Sometimes the sound goes");
          // display.setCursor(5, 77);
      // display.println("away.\" \"The sound goes away?\"");
          // display.setCursor(5, 17);
      // display.println("four-forty-six");
          // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
      return;

    // Codegen for 04:47 for 0 quotations:
    case 287:
      Serial.println(F("No quotes for 04:47"));
      return;

    // Codegen for 04:48 for 1 quotations:
    case 288:
      Serial.println(F("Only one option for 04:48:"));
    Serial.println(F("04:48 - At 4:48 the happy hour when clarity visits warm darkness which soaks my eyes I know no sin - Sarah Kane, 4:48 Psychosis"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING the happy");
          // display.setCursor(5, 17);
      // display.println("hour when clarity visits warm");
          // display.setCursor(20, 5);
      // display.println("4:48");
          // display.setCursor(11, 192);
      // display.println("- Sarah Kane, 4:48 Psychosis");
      return;

    // Codegen for 04:49 for 0 quotations:
    case 289:
      Serial.println(F("No quotes for 04:49"));
      return;

    // Codegen for 04:50 for 1 quotations:
    case 290:
      Serial.println(F("Only one option for 04:50:"));
    Serial.println(F("04:50 - Even the hands of his watch and the hands of all the thirteen clocks were frozen. They had all frozen at the same time, on a snowy night, seven years before, and after that it was always ten minutes to five in the castle. - James Thurber, The 13 Clocks"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Even the hands of his watch and");
          // display.setCursor(5, 17);
      // display.println("the hands of all the thirteen clocks");
          // display.setCursor(5, 29);
      // display.println("were frozen. They had all frozen at");
          // display.setCursor(5, 41);
      // display.println("the same time, on a snowy night,");
          // display.setCursor(5, 53);
      // display.println("seven years before, and after that it");
          // display.setCursor(5, 65);
      // display.println("was always");
          // display.setCursor(52, 65);
      // display.println("ten minutes to five");
          // display.setCursor(102, 192);
      // display.println("- The 13 Clocks");
      return;

    // Codegen for 04:51 for 0 quotations:
    case 291:
      Serial.println(F("No quotes for 04:51"));
      return;

    // Codegen for 04:52 for 0 quotations:
    case 292:
      Serial.println(F("No quotes for 04:52"));
      return;

    // Codegen for 04:53 for 0 quotations:
    case 293:
      Serial.println(F("No quotes for 04:53"));
      return;

    // Codegen for 04:54 for 1 quotations:
    case 294:
      Serial.println(F("Only one option for 04:54:"));
    Serial.println(F("04:54 - Six minutes to five. Six minutes to go. Suddenly I felt quite clearheaded. There was an unexpected light in the cell; the boundaries were drawn, the roles well defined. - Elie Wiesel, Dawn: A Novel"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. Six minutes to go. Suddenly I");
          // display.setCursor(5, 29);
      // display.println("felt quite clearheaded. There was an");
          // display.setCursor(5, 41);
      // display.println("unexpected light in the cell; the");
          // display.setCursor(5, 53);
      // display.println("boundaries were drawn, the roles well");
          // display.setCursor(5, 5);
      // display.println("Six minutes to five");
          // display.setCursor(11, 192);
      // display.println("- Elie Wiesel, Dawn: A Novel");
      return;

    // Codegen for 04:55 for 1 quotations:
    case 295:
      Serial.println(F("Only one option for 04:55:"));
    Serial.println(F("04:55 - 4:55 - Mank holding phone. Turns to Caddell - 'Who is this?' Caddell: 'Jim.' (shrugs) 'I think he's our man in Cincinnati.' - Hunter S. Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING - Mank holding");
          // display.setCursor(5, 17);
      // display.println("phone. Turns to Caddell - 'Who is");
          // display.setCursor(5, 29);
      // display.println("this?' Caddell: 'Jim.' (shrugs) 'I");
          // display.setCursor(5, 5);
      // display.println("4:55");
          // display.setCursor(67, 192);
      // display.println("- Hunter S. Thompson");
      return;

    // Codegen for 04:56 for 0 quotations:
    case 296:
      Serial.println(F("No quotes for 04:56"));
      return;

    // Codegen for 04:57 for 1 quotations:
    case 297:
      Serial.println(F("Only one option for 04:57:"));
    Serial.println(F("04:57 - The second said the same thing a few minutes before five, and mentioned eternity... I'm sure I'll meet you in the other world. Four minutes later she left a last, fleeting message: My love. Fernando. It's Suzana. Then, it seemed, she had shot herself. - Peter Robb, A Death in Brazil: A Book of Omissions"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The second said the same thing a");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, and mentioned eternity... I'm");
          // display.setCursor(5, 41);
      // display.println("sure I'll meet you in the other world.");
          // display.setCursor(5, 53);
      // display.println("Four minutes later she left a last,");
          // display.setCursor(5, 65);
      // display.println("fleeting message: My love. Fernando.");
          // display.setCursor(5, 77);
      // display.println("It's Suzana. Then, it seemed, she had");
          // display.setCursor(5, 17);
      // display.println("few minutes before five");
          // display.setCursor(123, 192);
      // display.println("- Peter Robb");
      return;

    // Codegen for 04:58 for 1 quotations:
    case 298:
      Serial.println(F("Only one option for 04:58:"));
    Serial.println(F("04:58 - He wants to look death in the face. Two minutes to five. I took a handkerchief out of my pocket, but John Dawson ordered me to put it back. An Englishman dies with his eyes open. He wants to look death in the face. - Elie Wiesel, Dawn: A Novel"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He wants to look death in the");
          // display.setCursor(5, 17);
      // display.println("face.");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. I took a handkerchief out of my");
          // display.setCursor(5, 41);
      // display.println("pocket, but John Dawson ordered me to");
          // display.setCursor(5, 53);
      // display.println("put it back. An Englishman dies with");
          // display.setCursor(5, 65);
      // display.println("his eyes open. He wants to look death");
          // display.setCursor(11, 17);
      // display.println("Two minutes to five");
          // display.setCursor(11, 192);
      // display.println("- Elie Wiesel, Dawn: A Novel");
      return;

    // Codegen for 04:59 for 1 quotations:
    case 299:
      Serial.println(F("Only one option for 04:59:"));
    Serial.println(F("04:59 - The whole place smells like death no matter what the fuck you do. Gately gets to the shelter at 04:59 and just shuts his head off as if his head had a control switch. - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The whole place smells like");
          // display.setCursor(5, 17);
      // display.println("death no matter what the fuck you do.");
          // display.setCursor(5, 29);
      // display.println("Gately gets to the shelter at");
          // display.setCursor(5, 41);
      // display.println("0TIMESTRING and just shuts his head off as");
          // display.setCursor(143, 29);
      // display.println("4:59");
          // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
      return;

    // Codegen for 05:00 for 7 quotations:
    case 300:
      option = random(0, 7);
      Serial.print(F("7 options for 05:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:00 - Five o'clock had hardly struck on the morning of the 19th of January, when Bessie brought a candle into my closet and found me already up and nearly dressed. - Charlotte Brontë, Jane Eyre "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING had");
                // display.setCursor(5, 17);
      // display.println("hardly struck on the morning of the");
                // display.setCursor(5, 29);
      // display.println("19th of January, when Bessie brought");
                // display.setCursor(5, 41);
      // display.println("a candle into my closet and found");
                // display.setCursor(5, 5);
      // display.println("Five o'clock");
                // display.setCursor(130, 192);
      // display.println("- Jane Eyre");
          return;
        case 1:
          Serial.println(F("05:00 - It was in the township of Dunwich, in a large and hardly inhabited farmhouse set against a hillside 4 miles from the village and a mile and a half from any other dwelling, that Wilbur Whately was born at 5 a.m. on Sunday, 2 February, 1913. - H.P. Lovecraft, The Dunwich Horror "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was in the township of");
                // display.setCursor(5, 17);
      // display.println("Dunwich, in a large and hardly inhabited");
                // display.setCursor(5, 29);
      // display.println("farmhouse set against a hillside 4 miles");
                // display.setCursor(5, 41);
      // display.println("from the village and a mile and a half");
                // display.setCursor(5, 53);
      // display.println("from any other dwelling, that Wilbur");
                // display.setCursor(5, 65);
      // display.println("Whately was born at TIMESTRING");
                // display.setCursor(79, 65);
      // display.println("5 a.m.");
                // display.setCursor(67, 192);
      // display.println("- The Dunwich Horror");
          return;
        case 2:
          Serial.println(F("05:00 - Just after five o'clock on this chill September morning, the fishmonger's cart, containing Kirsten and Emilia and such possessions as they have been able to assemble in the time allowed to them, is driven out of the gates of Rosenborg? - Rose Tremain, Music and Silence "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Just after");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING on this chill September");
                // display.setCursor(5, 29);
      // display.println("morning, the fishmonger's cart,");
                // display.setCursor(5, 41);
      // display.println("containing Kirsten and Emilia and such");
                // display.setCursor(5, 53);
      // display.println("possessions as they have been able to");
                // display.setCursor(5, 65);
      // display.println("assemble in the time allowed to them, is");
                // display.setCursor(70, 5);
      // display.println("five o'clock");
                // display.setCursor(74, 192);
      // display.println("- Music and Silence");
          return;
        case 3:
          Serial.println(F("05:00 - One! said Hark. \"Two!\" cried Zorn of Zorna. \"Three!\" the Duke's voice almost whispered. \"Four!\" sighed Saralinda. \"Five!\" the Golux crowed, and pointed at the table. - James Thurber, The 13 Clocks"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("One! said Hark. \"Two!\" cried");
                // display.setCursor(5, 17);
      // display.println("Zorn of Zorna. \"Three!\" the Duke's");
                // display.setCursor(5, 29);
      // display.println("voice almost whispered. \"Four!\"");
                // display.setCursor(5, 41);
      // display.println("sighed Saralinda.");
                // display.setCursor(5, 53);
      // display.println("\"TIMESTRING!\" the Golux crowed, and pointed");
                // display.setCursor(83, 41);
      // display.println("Five");
                // display.setCursor(102, 192);
      // display.println("- The 13 Clocks");
          return;
        case 4:
          Serial.println(F("05:00 - The day came slow, till five o'clock. Then sprang before the hills. Like hindered rubies, or the light. A sudden musket spills - Emily Dickinson, The Day Came Slow, Till Five O' Clock"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The day came slow, till");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING. Then");
                // display.setCursor(5, 29);
      // display.println("sprang before the hills. Like hindered");
                // display.setCursor(5, 41);
      // display.println("rubies, or the light. A sudden musket");
                // display.setCursor(5, 17);
      // display.println("five o'clock");
                // display.setCursor(88, 192);
      // display.println("- Emily Dickinson");
          return;
        case 5:
          Serial.println(F("05:00 - There are worse things than not being able to sleep for thinking about them. It is 5 a.m. All the worse things come stalking in and stand icily about the bed looking worse and worse and worse. - Fleur Adcock, Things "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("There are worse things than not");
                // display.setCursor(5, 17);
      // display.println("being able to sleep for thinking about");
                // display.setCursor(5, 29);
      // display.println("them. It is TIMESTRING All the");
                // display.setCursor(5, 41);
      // display.println("worse things come stalking in and");
                // display.setCursor(5, 53);
      // display.println("stand icily about the bed looking");
                // display.setCursor(41, 29);
      // display.println("5 a.m.");
                // display.setCursor(46, 192);
      // display.println("- Fleur Adcock, Things ");
          return;
        case 6:
          Serial.println(F("05:00 - What causes young people to \"come out,\" but the noble ambition of matrimony? What sends them trooping to watering-places? What keeps them dancing till five o'clock in the morning through a whole mortal season? - William Makepeace Thackeray, Vanity Fair "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What causes young people to");
                // display.setCursor(5, 17);
      // display.println("\"come out,\" but the noble ambition");
                // display.setCursor(5, 29);
      // display.println("of matrimony? What sends them");
                // display.setCursor(5, 41);
      // display.println("trooping to watering-places? What");
                // display.setCursor(5, 53);
      // display.println("keeps them dancing till");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING in the morning through a whole");
                // display.setCursor(119, 53);
      // display.println("five o'clock");
                // display.setCursor(116, 192);
      // display.println("- Vanity Fair");
          return;
      } // end switch (option)

    // Codegen for 05:01 for 2 quotations:
    case 301:
      option = random(0, 2);
      Serial.print(F("2 options for 05:01. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:01 - Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. - Agatha Christie, The clocks "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Oh yes. His clocks were set at");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, four minutes past five and");
                // display.setCursor(5, 41);
      // display.println("seven minutes past five. That was the");
                // display.setCursor(5, 53);
      // display.println("combination number of a safe, 515457. The");
                // display.setCursor(5, 65);
      // display.println("safe was concealed behind a");
                // display.setCursor(5, 17);
      // display.println("one minute past five");
                // display.setCursor(123, 192);
      // display.println("- The clocks");
          return;
        case 1:
          Serial.println(F("05:01 - Just after five o'clock on this chill September morning, the fishmonger's cart, containing Kirsten and Emilia and such possessions as they have been able to assemble in the time allowed to them, is driven out of the gates of Rosenborg? - Rose Tremain, Music and Silence"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Just");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING on this chill September");
                // display.setCursor(5, 29);
      // display.println("morning, the fishmonger's cart,");
                // display.setCursor(5, 41);
      // display.println("containing Kirsten and Emilia and such");
                // display.setCursor(5, 53);
      // display.println("possessions as they have been able to");
                // display.setCursor(5, 65);
      // display.println("assemble in the time allowed to them, is");
                // display.setCursor(34, 5);
      // display.println("after five o'clock");
                // display.setCursor(74, 192);
      // display.println("- Music and Silence");
          return;
      } // end switch (option)

    // Codegen for 05:02 for 1 quotations:
    case 302:
      Serial.println(F("Only one option for 05:02:"));
    Serial.println(F("05:02 - It was 5:02 a.m., December 14. In another fifty-eight minutes he would set sail for America. He did not want to leave his bride; he did not want to go. - Brenda Joyce, The Prize"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING,");
          // display.setCursor(5, 17);
      // display.println("December 14. In another fifty-eight");
          // display.setCursor(5, 29);
      // display.println("minutes he would set sail for America.");
          // display.setCursor(5, 41);
      // display.println("He did not want to leave his bride;");
          // display.setCursor(42, 5);
      // display.println("5:02 a.m.");
          // display.setCursor(32, 192);
      // display.println("- Brenda Joyce, The Prize");
      return;

    // Codegen for 05:03 for 1 quotations:
    case 303:
      Serial.println(F("Only one option for 05:03:"));
    Serial.println(F("05:03 - It was 5:03 a.m. It didn't matter. She wasn't going to get back to sleep. She threw off her covers and, swearing at herself, Caleb and Mr. Griffin, she headed into the shower. - Heather Graham, Unhallowed ground"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING It");
          // display.setCursor(5, 17);
      // display.println("didn't matter. She wasn't going to get");
          // display.setCursor(5, 29);
      // display.println("back to sleep. She threw off her");
          // display.setCursor(5, 41);
      // display.println("covers and, swearing at herself, Caleb");
          // display.setCursor(5, 53);
      // display.println("and Mr. Griffin, she headed into the");
          // display.setCursor(42, 5);
      // display.println("5:03 a.m.");
          // display.setCursor(74, 192);
      // display.println("- Unhallowed ground");
      return;

    // Codegen for 05:04 for 2 quotations:
    case 304:
      option = random(0, 2);
      Serial.print(F("2 options for 05:04. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:04 - Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. - Agatha Christie, The clocks "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Oh yes. His clocks were set at one");
                // display.setCursor(5, 17);
      // display.println("minute past five,");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING and seven minutes past five.");
                // display.setCursor(5, 53);
      // display.println("That was the combination number of a");
                // display.setCursor(5, 65);
      // display.println("safe, 515457. The safe was concealed");
                // display.setCursor(5, 77);
      // display.println("behind a reproduction of the Mona");
                // display.setCursor(5, 29);
      // display.println("four minutes past five");
                // display.setCursor(123, 192);
      // display.println("- The clocks");
          return;
        case 1:
          Serial.println(F("05:04 - 5.04 a.m. on the substandard clock radio. Because why do people always say the day starts now? Really it starts in the middle of the night at a fraction of a second past midnight. - Ali Smith, The Accidental "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING on the");
                // display.setCursor(5, 17);
      // display.println("substandard clock radio. Because why do");
                // display.setCursor(5, 29);
      // display.println("people always say the day starts now?");
                // display.setCursor(5, 41);
      // display.println("Really it starts in the middle of the");
                // display.setCursor(5, 53);
      // display.println("night at a fraction of a second past");
                // display.setCursor(5, 5);
      // display.println("5.04 a.m.");
                // display.setCursor(11, 192);
      // display.println("- Ali Smith, The Accidental ");
          return;
      } // end switch (option)

    // Codegen for 05:05 for 1 quotations:
    case 305:
      Serial.println(F("Only one option for 05:05:"));
    Serial.println(F("05:05 - The baby, a boy, is born at five past five in the morning. - Jhumpa Lahiri, The Namesake"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The baby, a boy, is born at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING in");
          // display.setCursor(5, 17);
      // display.println("five past five");
          // display.setCursor(4, 192);
      // display.println("- Jhumpa Lahiri, The Namesake");
      return;

    // Codegen for 05:06 for 1 quotations:
    case 306:
      Serial.println(F("Only one option for 05:06:"));
    Serial.println(F("05:06 - 5:06 a.m. I wake up strangely energized, my stomach growling. Upstairs, the overstocked fridge offers me its bounty of sympathy food. - Jonathon Tropper, This is Where I Leave you"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING I wake up");
          // display.setCursor(5, 17);
      // display.println("strangely energized, my stomach");
          // display.setCursor(5, 29);
      // display.println("growling. Upstairs, the overstocked");
          // display.setCursor(5, 41);
      // display.println("fridge offers me its bounty of");
          // display.setCursor(5, 5);
      // display.println("5:06 a.m.");
          // display.setCursor(18, 192);
      // display.println("- This is Where I Leave you");
      return;

    // Codegen for 05:07 for 1 quotations:
    case 307:
      Serial.println(F("Only one option for 05:07:"));
    Serial.println(F("05:07 - Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. - Agatha Christie, The clocks "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Oh yes. His clocks were set at one");
          // display.setCursor(5, 17);
      // display.println("minute past five, four minutes past");
          // display.setCursor(5, 29);
      // display.println("five and");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING. That was the combination");
          // display.setCursor(5, 53);
      // display.println("number of a safe, 515457. The safe was");
          // display.setCursor(5, 65);
      // display.println("concealed behind a reproduction of the");
          // display.setCursor(32, 29);
      // display.println("seven minutes past five");
          // display.setCursor(123, 192);
      // display.println("- The clocks");
      return;

    // Codegen for 05:08 for 1 quotations:
    case 308:
      Serial.println(F("Only one option for 05:08:"));
    Serial.println(F("05:08 - Ambrose and I will marry at Fort McHenry at 5:08 EDST this coming Saturday, Rosh Hashanah! - John Barth, Letters"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Ambrose and I will marry at Fort");
          // display.setCursor(5, 17);
      // display.println("McHenry at TIMESTRING EDST this");
          // display.setCursor(28, 17);
      // display.println("5:08");
          // display.setCursor(60, 192);
      // display.println("- John Barth, Letters");
      return;

    // Codegen for 05:09 for 1 quotations:
    case 309:
      Serial.println(F("Only one option for 05:09:"));
    Serial.println(F("05:09 - ...proved but fictive and transitory when inquiry of the station attendants educed the information that the two earliest trains to be obtained were the 5:09 to Dunkerque and the 5:37 for Ostend. - Louis Joseph Vance, The Black Bag"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("...proved but fictive and");
          // display.setCursor(5, 17);
      // display.println("transitory when inquiry of the station");
          // display.setCursor(5, 29);
      // display.println("attendants educed the information that");
          // display.setCursor(5, 41);
      // display.println("the two earliest trains to be");
          // display.setCursor(5, 53);
      // display.println("obtained were the TIMESTRING to");
          // display.setCursor(65, 53);
      // display.println("5:09");
          // display.setCursor(102, 192);
      // display.println("- The Black Bag");
      return;

    // Codegen for 05:10 for 2 quotations:
    case 310:
      option = random(0, 2);
      Serial.print(F("2 options for 05:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:10 - If this is not enough to kill me, I have more left in the bottle. Ten minutes past five. \"You have just gone, after giving me my composing draught.\" - Wilkie Collins, The Law and the Lady "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("If this is not enough to kill me, I");
                // display.setCursor(5, 17);
      // display.println("have more left in the bottle.");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING. \"You have just gone, after");
                // display.setCursor(5, 29);
      // display.println("Ten minutes past five");
                // display.setCursor(53, 192);
      // display.println("- The Law and the Lady");
          return;
        case 1:
          Serial.println(F("05:10 - I settled into a daily routine. Wake up at 4:40am, shower, get on the train north by ten after five. - Tina Fey, Bossypants"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I settled into a daily routine.");
                // display.setCursor(5, 17);
      // display.println("Wake up at 4:40am, shower, get on the");
                // display.setCursor(5, 29);
      // display.println("train north by");
                // display.setCursor(62, 29);
      // display.println("ten after five");
                // display.setCursor(53, 192);
      // display.println("- Tina Fey, Bossypants");
          return;
      } // end switch (option)

    // Codegen for 05:11 for 1 quotations:
    case 311:
      Serial.println(F("Only one option for 05:11:"));
    Serial.println(F("05:11 - Today was Tuesday, the fifteenth of August; the sun had risen at eleven minutes past five this morning and would set at two minutes before seven this evening. - Donald E Westlake, The Hot Rock"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Today was Tuesday, the fifteenth");
          // display.setCursor(5, 17);
      // display.println("of August; the sun had risen at");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING this morning and would set at");
          // display.setCursor(5, 53);
      // display.println("two minutes before seven this");
          // display.setCursor(5, 29);
      // display.println("eleven minutes past five");
          // display.setCursor(109, 192);
      // display.println("- The Hot Rock");
      return;

    // Codegen for 05:12 for 1 quotations:
    case 312:
      Serial.println(F("Only one option for 05:12:"));
    Serial.println(F("05:12 - At twelve minutes and six seconds past five o'clock on the morning of April 18th, 1906, the San francisco peninsula began to shiver in the grip of an earthquake... - Herbert Asbury, Slummer's Paradise"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING on the morning of April 18th,");
          // display.setCursor(5, 41);
      // display.println("1906, the San francisco peninsula");
          // display.setCursor(5, 53);
      // display.println("began to shiver in the grip of an");
          // display.setCursor(5, 17);
      // display.println("twelve minutes and six seconds past five o'clock");
          // display.setCursor(67, 192);
      // display.println("- Slummer's Paradise");
      return;

    // Codegen for 05:13 for 1 quotations:
    case 313:
      Serial.println(F("Only one option for 05:13:"));
    Serial.println(F("05:13 - Lying on my side in bed, I stared at my alarm clock until it became a blemish, its red hue glowing like a welcome sign beckoning me into the depths of hell's crimson-colored cavities. 5:13 am. To describe this Monday as a blue Monday was an understatement. - Nakia D Johnson, Uptempo"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Lying on my side in bed, I stared");
          // display.setCursor(5, 17);
      // display.println("at my alarm clock until it became a");
          // display.setCursor(5, 29);
      // display.println("blemish, its red hue glowing like a");
          // display.setCursor(5, 41);
      // display.println("welcome sign beckoning me into the");
          // display.setCursor(5, 53);
      // display.println("depths of hell's crimson-colored");
          // display.setCursor(5, 65);
      // display.println("cavities. TIMESTRING To");
          // display.setCursor(5, 77);
      // display.println("describe this Monday as a blue Monday was");
          // display.setCursor(15, 65);
      // display.println("5:13 am.");
          // display.setCursor(25, 192);
      // display.println("- Nakia D Johnson, Uptempo");
      return;

    // Codegen for 05:14 for 1 quotations:
    case 314:
      Serial.println(F("Only one option for 05:14:"));
    Serial.println(F("05:14 - The time was 5.14am, a very strange time indeed for the sheriff to have seen what he claimed he saw as he made his early-morning rounds, first patrolling back and forth along the deserted, snowbound streets of Kingdom City... - Thomas H Cook, Into the Web"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The time was TIMESTRING,");
          // display.setCursor(5, 17);
      // display.println("a very strange time indeed for the");
          // display.setCursor(5, 29);
      // display.println("sheriff to have seen what he claimed he");
          // display.setCursor(5, 41);
      // display.println("saw as he made his early-morning");
          // display.setCursor(5, 53);
      // display.println("rounds, first patrolling back and");
          // display.setCursor(5, 65);
      // display.println("forth along the deserted, snowbound");
          // display.setCursor(78, 5);
      // display.println("5.14am");
          // display.setCursor(4, 192);
      // display.println("- Thomas H Cook, Into the Web");
      return;

    // Codegen for 05:15 for 2 quotations:
    case 315:
      option = random(0, 2);
      Serial.print(F("2 options for 05:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:15 - By the first week of May, Ralph was waking up to birdsong at 5:15 a.m. He tried earplugs for a few nights, although he doubted from the outset that they would work. - Stephen King, Insomnia "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By the first week of May, Ralph");
                // display.setCursor(5, 17);
      // display.println("was waking up to birdsong at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING He tried");
                // display.setCursor(5, 41);
      // display.println("earplugs for a few nights, although he");
                // display.setCursor(5, 53);
      // display.println("doubted from the outset that they would");
                // display.setCursor(5, 29);
      // display.println("5:15 a.m.");
                // display.setCursor(32, 192);
      // display.println("- Stephen King, Insomnia ");
          return;
        case 1:
          Serial.println(F("05:15 - Weird conversation with Brown, a tired & confused old man who's been jerked out of bed at 5:15. - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Weird conversation with Brown, a");
                // display.setCursor(5, 17);
      // display.println("tired & confused old man who's been");
                // display.setCursor(86, 29);
      // display.println("5:15");
                // display.setCursor(74, 192);
      // display.println("- Hunter S Thompson");
          return;
      } // end switch (option)

    // Codegen for 05:16 for 2 quotations:
    case 316:
      option = random(0, 2);
      Serial.print(F("2 options for 05:16. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:16 - 5:16 - Mank on phone to Secretary of State Brown: 'Mr Brown, we're profoundly disturbed about this situation in the 21st. We can't get a single result out of there. - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING - Mank on phone");
                // display.setCursor(5, 17);
      // display.println("to Secretary of State Brown: 'Mr");
                // display.setCursor(5, 29);
      // display.println("Brown, we're profoundly disturbed");
                // display.setCursor(5, 41);
      // display.println("about this situation in the 21st. We");
                // display.setCursor(5, 53);
      // display.println("can't get a single result out of");
                // display.setCursor(5, 5);
      // display.println("5:16");
                // display.setCursor(74, 192);
      // display.println("- Hunter S Thompson");
          return;
        case 1:
          Serial.println(F("05:16 - It is completely light outside now; you can see for miles. Except there is nothing to see here; trees and fields and that kind of thing. 5:16 a.m on the substandard clock radio. She is really awake. - Ali Smith, The Accidental "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It is completely light outside");
                // display.setCursor(5, 17);
      // display.println("now; you can see for miles. Except");
                // display.setCursor(5, 29);
      // display.println("there is nothing to see here; trees");
                // display.setCursor(5, 41);
      // display.println("and fields and that kind of thing.");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING on the");
                // display.setCursor(5, 65);
      // display.println("substandard clock radio. She is really");
                // display.setCursor(5, 53);
      // display.println("5:16 a.m");
                // display.setCursor(11, 192);
      // display.println("- Ali Smith, The Accidental ");
          return;
      } // end switch (option)

    // Codegen for 05:17 for 0 quotations:
    case 317:
      Serial.println(F("No quotes for 05:17"));
      return;

    // Codegen for 05:18 for 0 quotations:
    case 318:
      Serial.println(F("No quotes for 05:18"));
      return;

    // Codegen for 05:19 for 0 quotations:
    case 319:
      Serial.println(F("No quotes for 05:19"));
      return;

    // Codegen for 05:20 for 1 quotations:
    case 320:
      Serial.println(F("Only one option for 05:20:"));
    Serial.println(F("05:20 - He saw on the floor his cigarette reduced to a long thin cylinder of ash: it had smoked itself. It was five twenty, dawn was breaking behind the shed of empty barrels, the thermometer pointed to 210 degrees. - Primo Levi, The Periodic Table"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He saw on the floor his cigarette");
          // display.setCursor(5, 17);
      // display.println("reduced to a long thin cylinder of ash:");
          // display.setCursor(5, 29);
      // display.println("it had smoked itself. It was");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING, dawn");
          // display.setCursor(5, 53);
      // display.println("was breaking behind the shed of");
          // display.setCursor(5, 65);
      // display.println("empty barrels, the thermometer");
          // display.setCursor(5, 41);
      // display.println("five twenty");
          // display.setCursor(67, 192);
      // display.println("- The Periodic Table");
      return;

    // Codegen for 05:21 for 0 quotations:
    case 321:
      Serial.println(F("No quotes for 05:21"));
      return;

    // Codegen for 05:22 for 0 quotations:
    case 322:
      Serial.println(F("No quotes for 05:22"));
      return;

    // Codegen for 05:23 for 1 quotations:
    case 323:
      Serial.println(F("Only one option for 05:23:"));
    Serial.println(F("05:23 - If I could count precisely to sixty between two passing orange minutes on her digital clock, starting at 5.23am and ending exactly as it melted into 5:24, then when she woke she would love me and not say this had been a terrible mistake. - Arthur Phillips, The Tragedy of Arthur"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("If I could count precisely to");
          // display.setCursor(5, 17);
      // display.println("sixty between two passing orange");
          // display.setCursor(5, 29);
      // display.println("minutes on her digital clock, starting");
          // display.setCursor(5, 41);
      // display.println("at TIMESTRING and ending");
          // display.setCursor(5, 53);
      // display.println("exactly as it melted into 5:24, then");
          // display.setCursor(5, 65);
      // display.println("when she woke she would love me and");
          // display.setCursor(5, 77);
      // display.println("not say this had been a terrible");
          // display.setCursor(8, 41);
      // display.println("5.23am");
          // display.setCursor(46, 192);
      // display.println("- The Tragedy of Arthur");
      return;

    // Codegen for 05:24 for 1 quotations:
    case 324:
      Serial.println(F("Only one option for 05:24:"));
    Serial.println(F("05:24 - If I could count precisely to sixty between two passing orange minutes on her digital clock, starting at 523am. and ending exactly as it melted into 5:24, then when she woke she would love me and not say this had been a terrible mistake. - Arthur Phillips, The Tragedy of Arthur"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("If I could count precisely to");
          // display.setCursor(5, 17);
      // display.println("sixty between two passing orange");
          // display.setCursor(5, 29);
      // display.println("minutes on her digital clock, starting");
          // display.setCursor(5, 41);
      // display.println("at 523am. and ending exactly as it");
          // display.setCursor(5, 53);
      // display.println("melted into TIMESTRING, then when");
          // display.setCursor(5, 65);
      // display.println("she woke she would love me and not say");
          // display.setCursor(41, 53);
      // display.println("5:24");
          // display.setCursor(46, 192);
      // display.println("- The Tragedy of Arthur");
      return;

    // Codegen for 05:25 for 1 quotations:
    case 325:
      Serial.println(F("Only one option for 05:25:"));
    Serial.println(F("05:25 - George's train home from New Street leaves at 5.25. On the return journey, there are rarely schoolboys. - Julian Barnes, Arthur and George"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("George's train home from New");
          // display.setCursor(5, 17);
      // display.println("Street leaves at TIMESTRING. On");
          // display.setCursor(5, 29);
      // display.println("the return journey, there are");
          // display.setCursor(70, 17);
      // display.println("5.25");
          // display.setCursor(74, 192);
      // display.println("- Arthur and George");
      return;

    // Codegen for 05:26 for 1 quotations:
    case 326:
      Serial.println(F("Only one option for 05:26:"));
    Serial.println(F("05:26 - I think this is actually bump number 1,970. And the boy keeps plugging away at the same speed. There isn’t a sound from them. Not a moan. Poor them. Poor me. I look at the clock. 05:26. - Hallgrímur Helgason, 101 Reykjavik"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I think this is actually bump");
          // display.setCursor(5, 17);
      // display.println("number 1,970. And the boy keeps");
          // display.setCursor(5, 29);
      // display.println("plugging away at the same speed. There");
          // display.setCursor(5, 41);
      // display.println("isn’t a sound from them. Not a moan.");
          // display.setCursor(5, 53);
      // display.println("Poor them. Poor me. I look at the");
          // display.setCursor(12, 65);
      // display.println("05:26");
          // display.setCursor(102, 192);
      // display.println("- 101 Reykjavik");
      return;

    // Codegen for 05:27 for 0 quotations:
    case 327:
      Serial.println(F("No quotes for 05:27"));
      return;

    // Codegen for 05:28 for 1 quotations:
    case 328:
      Serial.println(F("Only one option for 05:28:"));
    Serial.println(F("05:28 - I pulled into the Aoyama supermarket parking garage at five-twenty-eight. The sky to the east was getting light. I entered the store carrying my bag. Almost no one was in the place. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I pulled into the Aoyama");
          // display.setCursor(5, 17);
      // display.println("supermarket parking garage at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING.");
          // display.setCursor(5, 41);
      // display.println("The sky to the east was getting");
          // display.setCursor(5, 53);
      // display.println("light. I entered the store carrying my");
          // display.setCursor(5, 29);
      // display.println("five-twenty-eight");
          // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
      return;

    // Codegen for 05:29 for 0 quotations:
    case 329:
      Serial.println(F("No quotes for 05:29"));
      return;

    // Codegen for 05:30 for 3 quotations:
    case 330:
      option = random(0, 3);
      Serial.print(F("3 options for 05:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:30 - As Walter Eastman is preoccupied himself, he has not had time, or more to the point, inclination, to notice aberrant behaviour. For instance, it is half-past five in the summer morning. - Timothy Mo, An Insular Possession "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As Walter Eastman is preoccupied");
                // display.setCursor(5, 17);
      // display.println("himself, he has not had time, or more to");
                // display.setCursor(5, 29);
      // display.println("the point, inclination, to notice");
                // display.setCursor(5, 41);
      // display.println("aberrant behaviour. For instance, it is");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING in");
                // display.setCursor(5, 53);
      // display.println("half-past five");
                // display.setCursor(46, 192);
      // display.println("- An Insular Possession");
          return;
        case 1:
          Serial.println(F("05:30 - It was by this time half-past five, and the sun was on the point of rising; but I found the kitchen still dark and silent. - Charlotte Brontë, Jane Eyre "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was by this time");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and");
                // display.setCursor(5, 29);
      // display.println("the sun was on the point of rising;");
                // display.setCursor(5, 41);
      // display.println("but I found the kitchen still dark");
                // display.setCursor(5, 17);
      // display.println("half-past five");
                // display.setCursor(130, 192);
      // display.println("- Jane Eyre");
          return;
        case 2:
          Serial.println(F("05:30 - On the day they were going to kill him, Santiago Nasar got up at five-thirty in the morning to wait for the boat the bishop was coming on. - Gabriel García Márquez, Chronicle of a Death Foretold "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On the day they were going to kill");
                // display.setCursor(5, 17);
      // display.println("him, Santiago Nasar got up at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 41);
      // display.println("morning to wait for the boat the bishop");
                // display.setCursor(5, 29);
      // display.println("five-thirty");
                // display.setCursor(39, 192);
      // display.println("- Gabriel García Márquez");
          return;
      } // end switch (option)

    // Codegen for 05:31 for 1 quotations:
    case 331:
      Serial.println(F("Only one option for 05:31:"));
    Serial.println(F("05:31 - 5:31 - Mank on phone to lawyer: 'Jesus, I think we gotta go in there and get those ballots! Impound 'em! Every damn one!' - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING - Mank on phone");
          // display.setCursor(5, 17);
      // display.println("to lawyer: 'Jesus, I think we gotta");
          // display.setCursor(5, 29);
      // display.println("go in there and get those ballots!");
          // display.setCursor(5, 5);
      // display.println("5:31");
          // display.setCursor(74, 192);
      // display.println("- Hunter S Thompson");
      return;

    // Codegen for 05:32 for 0 quotations:
    case 332:
      Serial.println(F("No quotes for 05:32"));
      return;

    // Codegen for 05:33 for 0 quotations:
    case 333:
      Serial.println(F("No quotes for 05:33"));
      return;

    // Codegen for 05:34 for 1 quotations:
    case 334:
      Serial.println(F("Only one option for 05:34:"));
    Serial.println(F("05:34 - I asked \"What time is sunrise?\" A second's silence while the crestfallen Bush absorbed his rebuke, and then another voice answered: \"Five-thirty-four, sir.\" - C.S. Forester, The Commodore"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I asked \"What time is");
          // display.setCursor(5, 17);
      // display.println("sunrise?\" A second's silence while the");
          // display.setCursor(5, 29);
      // display.println("crestfallen Bush absorbed his rebuke, and");
          // display.setCursor(5, 41);
      // display.println("then another voice answered:");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("Five-thirty-four");
          // display.setCursor(102, 192);
      // display.println("- The Commodore");
      return;

    // Codegen for 05:35 for 2 quotations:
    case 335:
      option = random(0, 2);
      Serial.print(F("2 options for 05:35. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:35 - 5:35 - All phones ringing now, the swing shift has shot the gap - now the others are waking up. - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING - All phones");
                // display.setCursor(5, 17);
      // display.println("ringing now, the swing shift has shot");
                // display.setCursor(5, 29);
      // display.println("the gap - now the others are waking");
                // display.setCursor(5, 5);
      // display.println("5:35");
                // display.setCursor(74, 192);
      // display.println("- Hunter S Thompson");
          return;
        case 1:
          Serial.println(F("05:35 - I squinted at the clock. 'It says twenty-five before six,' I said and rolled away from him. - Luke Rhinehart, the dice man "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I squinted at the clock. 'It says");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING,' I said and rolled away from");
                // display.setCursor(5, 17);
      // display.println("twenty-five before six");
                // display.setCursor(109, 192);
      // display.println("- the dice man");
          return;
      } // end switch (option)

    // Codegen for 05:36 for 0 quotations:
    case 336:
      Serial.println(F("No quotes for 05:36"));
      return;

    // Codegen for 05:37 for 1 quotations:
    case 337:
      Serial.println(F("Only one option for 05:37:"));
    Serial.println(F("05:37 - Richard glanced at the clock on the microwave - 5:37 - almost twelve hours, almost one half-day since he'd dialed 911. - AM Homes, This Book Will Save Your Life"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Richard glanced at the clock on");
          // display.setCursor(5, 17);
      // display.println("the microwave - TIMESTRING -");
          // display.setCursor(5, 29);
      // display.println("almost twelve hours, almost one");
          // display.setCursor(81, 17);
      // display.println("5:37");
          // display.setCursor(137, 192);
      // display.println("- AM Homes");
      return;

    // Codegen for 05:38 for 1 quotations:
    case 338:
      Serial.println(F("Only one option for 05:38:"));
    Serial.println(F("05:38 - Kovac, said Johnny sleepily. It was very rare for the quantum computer and not Sol to wake him up. \"What’s going on? What time is it?\" \"Good morning, Johnny,\" said the ship. \"It is 5.38 a.m.\" \"What?\" said Johnny. - Keith Mansfield, Johnny Mackintosh: Battle for Earth "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Kovac, said Johnny sleepily. It");
          // display.setCursor(5, 17);
      // display.println("was very rare for the quantum");
          // display.setCursor(5, 29);
      // display.println("computer and not Sol to wake him up.");
          // display.setCursor(5, 41);
      // display.println("\"What’s going on? What time is it?\"");
          // display.setCursor(5, 53);
      // display.println("\"Good morning, Johnny,\" said the");
          // display.setCursor(5, 65);
      // display.println("ship. \"It is TIMESTRING\"");
          // display.setCursor(55, 65);
      // display.println("5.38 a.m.");
          // display.setCursor(88, 192);
      // display.println("- Keith Mansfield");
      return;

    // Codegen for 05:39 for 0 quotations:
    case 339:
      Serial.println(F("No quotes for 05:39"));
      return;

    // Codegen for 05:40 for 1 quotations:
    case 340:
      Serial.println(F("Only one option for 05:40:"));
    Serial.println(F("05:40 - Twenty minutes to six. 'Rob's boys were already on the platform, barrows ready. - Bruce Robinson, The Peculiar Memories of Thomas Penman"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. 'Rob's boys were already on the");
          // display.setCursor(5, 5);
      // display.println("Twenty minutes to six");
          // display.setCursor(95, 192);
      // display.println("- Bruce Robinson");
      return;

    // Codegen for 05:41 for 0 quotations:
    case 341:
      Serial.println(F("No quotes for 05:41"));
      return;

    // Codegen for 05:42 for 0 quotations:
    case 342:
      Serial.println(F("No quotes for 05:42"));
      return;

    // Codegen for 05:43 for 1 quotations:
    case 343:
      Serial.println(F("Only one option for 05:43:"));
    Serial.println(F("05:43 - 5.43 - Mank on phone to 'Mary' in Washington; 'It now appears quite clear that we'll lead the state - without the 21st.' - Hunter S. Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING - Mank on phone");
          // display.setCursor(5, 17);
      // display.println("to 'Mary' in Washington; 'It now");
          // display.setCursor(5, 29);
      // display.println("appears quite clear that we'll lead the");
          // display.setCursor(5, 5);
      // display.println("5.43");
          // display.setCursor(67, 192);
      // display.println("- Hunter S. Thompson");
      return;

    // Codegen for 05:44 for 0 quotations:
    case 344:
      Serial.println(F("No quotes for 05:44"));
      return;

    // Codegen for 05:45 for 1 quotations:
    case 345:
      Serial.println(F("Only one option for 05:45:"));
    Serial.println(F("05:45 - At 5:45 a power-transformer on a pole beside the abandoned Tracker Brothers’ Truck Depot exploded in a flash of purple light, spraying twisted chunks of metal onto the shingled roof. - Stephen King, IT"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING a");
          // display.setCursor(5, 17);
      // display.println("power-transformer on a pole beside the abandoned");
          // display.setCursor(5, 29);
      // display.println("Tracker Brothers’ Truck Depot exploded");
          // display.setCursor(5, 41);
      // display.println("in a flash of purple light,");
          // display.setCursor(5, 53);
      // display.println("spraying twisted chunks of metal onto");
          // display.setCursor(20, 5);
      // display.println("5:45");
          // display.setCursor(81, 192);
      // display.println("- Stephen King, IT");
      return;

    // Codegen for 05:46 for 1 quotations:
    case 346:
      Serial.println(F("Only one option for 05:46:"));
    Serial.println(F("05:46 - Herbert could feel nothing. He wrote a legal-sounding phrase to the effect that the sentence had been carried out at 5.46am, adding, 'without a snag'. The burial party had cursed him quietly as they'd hacked at the thick roots and tight soil. - William Brodrick, A Whispered Name"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Herbert could feel nothing. He");
          // display.setCursor(5, 17);
      // display.println("wrote a legal-sounding phrase to the");
          // display.setCursor(5, 29);
      // display.println("effect that the sentence had been");
          // display.setCursor(5, 41);
      // display.println("carried out at TIMESTRING,");
          // display.setCursor(5, 53);
      // display.println("adding, 'without a snag'. The burial");
          // display.setCursor(5, 65);
      // display.println("party had cursed him quietly as they'd");
          // display.setCursor(5, 77);
      // display.println("hacked at the thick roots and tight");
          // display.setCursor(50, 41);
      // display.println("5.46am");
          // display.setCursor(81, 192);
      // display.println("- A Whispered Name");
      return;

    // Codegen for 05:47 for 0 quotations:
    case 347:
      Serial.println(F("No quotes for 05:47"));
      return;

    // Codegen for 05:48 for 0 quotations:
    case 348:
      Serial.println(F("No quotes for 05:48"));
      return;

    // Codegen for 05:49 for 0 quotations:
    case 349:
      Serial.println(F("No quotes for 05:49"));
      return;

    // Codegen for 05:50 for 0 quotations:
    case 350:
      Serial.println(F("No quotes for 05:50"));
      return;

    // Codegen for 05:51 for 0 quotations:
    case 351:
      Serial.println(F("No quotes for 05:51"));
      return;

    // Codegen for 05:52 for 1 quotations:
    case 352:
      Serial.println(F("Only one option for 05:52:"));
    Serial.println(F("05:52 - At 5.52am paramedics from the St. Petersburg Fire Department and SunStar Medic One ambulance service responded to a medical emergency call at 12201 Ninth Street North, St. Petersburg, apartment 2210. - Mark Fuhrman, Silent Witness"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING paramedics");
          // display.setCursor(5, 17);
      // display.println("from the St. Petersburg Fire");
          // display.setCursor(5, 29);
      // display.println("Department and SunStar Medic One");
          // display.setCursor(5, 41);
      // display.println("ambulance service responded to a medical");
          // display.setCursor(5, 53);
      // display.println("emergency call at 12201 Ninth Street");
          // display.setCursor(5, 65);
      // display.println("North, St. Petersburg, apartment");
          // display.setCursor(20, 5);
      // display.println("5.52am");
          // display.setCursor(95, 192);
      // display.println("- Silent Witness");
      return;

    // Codegen for 05:53 for 0 quotations:
    case 353:
      Serial.println(F("No quotes for 05:53"));
      return;

    // Codegen for 05:54 for 0 quotations:
    case 354:
      Serial.println(F("No quotes for 05:54"));
      return;

    // Codegen for 05:55 for 1 quotations:
    case 355:
      Serial.println(F("Only one option for 05:55:"));
    Serial.println(F("05:55 - It was 5.55am and raining hard when I pedalled up to the bike stand just outside the forecourt of the station and dashed inside. I raced past the bookstall, where all the placards of the Yorkshire Post (a morning paper) read 'York Horror' - Andrew Martin, The Lost Luggage Porter"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING and");
          // display.setCursor(5, 17);
      // display.println("raining hard when I pedalled up to the");
          // display.setCursor(5, 29);
      // display.println("bike stand just outside the");
          // display.setCursor(5, 41);
      // display.println("forecourt of the station and dashed");
          // display.setCursor(5, 53);
      // display.println("inside. I raced past the bookstall,");
          // display.setCursor(5, 65);
      // display.println("where all the placards of the");
          // display.setCursor(5, 77);
      // display.println("Yorkshire Post (a morning paper) read");
          // display.setCursor(42, 5);
      // display.println("5.55am");
          // display.setCursor(32, 192);
      // display.println("- The Lost Luggage Porter");
      return;

    // Codegen for 05:56 for 0 quotations:
    case 356:
      Serial.println(F("No quotes for 05:56"));
      return;

    // Codegen for 05:57 for 0 quotations:
    case 357:
      Serial.println(F("No quotes for 05:57"));
      return;

    // Codegen for 05:58 for 1 quotations:
    case 358:
      Serial.println(F("Only one option for 05:58:"));
    Serial.println(F("05:58 - Annika Giannini woke with a start. She saw that it was 5.58 a.m. - Stieg Larsson, The Girl who Kicked the Hornet's Nest"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Annika Giannini woke with a");
          // display.setCursor(5, 17);
      // display.println("start. She saw that it was");
          // display.setCursor(122, 17);
      // display.println("5.58 a.m.");
          // display.setCursor(102, 192);
      // display.println("- Stieg Larsson");
      return;

    // Codegen for 05:59 for 0 quotations:
    case 359:
      Serial.println(F("No quotes for 05:59"));
      return;

    // Codegen for 06:00 for 7 quotations:
    case 360:
      option = random(0, 7);
      Serial.print(F("7 options for 06:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:00 - What’s the time? I ask, and telling him so that he knows, \"My mother likes 'peace and quiet' to sleep late on Saturday mornings.\" \"She does, does she? It’s six o'clock. I couldn’t sleep.\" - Patsy Hickman, The Saints "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What’s the time? I ask, and");
                // display.setCursor(5, 17);
      // display.println("telling him so that he knows, \"My");
                // display.setCursor(5, 29);
      // display.println("mother likes 'peace and quiet' to");
                // display.setCursor(5, 41);
      // display.println("sleep late on Saturday mornings.\"");
                // display.setCursor(5, 53);
      // display.println("\"She does, does she? It’s");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING. I");
                // display.setCursor(5, 65);
      // display.println("six o'clock");
                // display.setCursor(11, 192);
      // display.println("- Patsy Hickman, The Saints ");
          return;
        case 1:
          Serial.println(F("06:00 - But every morning, even if there's been a nighttime session and he has only slept two hours, he gets up at six and reads his paper while he drinks a strong cup of coffee. In this way Papa constructs himself every day. - Muriel Barbery, The Elegance of the Hedgehog "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("But every morning, even if");
                // display.setCursor(5, 17);
      // display.println("there's been a nighttime session and he");
                // display.setCursor(5, 29);
      // display.println("has only slept two hours, he gets up");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING and reads his");
                // display.setCursor(5, 53);
      // display.println("paper while he drinks a strong cup of");
                // display.setCursor(5, 65);
      // display.println("coffee. In this way Papa constructs");
                // display.setCursor(5, 41);
      // display.println("at six");
                // display.setCursor(95, 192);
      // display.println("- Muriel Barbery");
          return;
        case 2:
          Serial.println(F("06:00 - I had risen half-an-hour before her entrance, and had washed my face, and put on my clothes by the light of a half-moon just setting, whose rays streamed through the narrow window near my crib. I was to leave Gateshead that day by a coach which passed the lodge gates at six a.m. - Charlotte Brontë, Jane Eyre"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I had risen half-an-hour before");
                // display.setCursor(5, 17);
      // display.println("her entrance, and had washed my");
                // display.setCursor(5, 29);
      // display.println("face, and put on my clothes by the");
                // display.setCursor(5, 41);
      // display.println("light of a half-moon just setting,");
                // display.setCursor(5, 53);
      // display.println("whose rays streamed through the");
                // display.setCursor(5, 65);
      // display.println("narrow window near my crib. I was to");
                // display.setCursor(5, 77);
      // display.println("leave Gateshead that day by a coach");
                // display.setCursor(5, 89);
      // display.println("which passed the lodge gates");
                // display.setCursor(5, 101);
      // display.println("at six a.m.");
                // display.setCursor(4, 192);
      // display.println("- Charlotte Brontë, Jane Eyre");
          return;
        case 3:
          Serial.println(F("06:00 - Lying awake in my attic room, I hear a clock strike six downstairs. It was fairly light and people were beginning to walk up and down the stairs... - Knut Hamsun, Hunger "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Lying awake in my attic room, I");
                // display.setCursor(5, 17);
      // display.println("hear a clock strike TIMESTRING");
                // display.setCursor(5, 29);
      // display.println("downstairs. It was fairly light and people");
                // display.setCursor(5, 41);
      // display.println("were beginning to walk up and down the");
                // display.setCursor(97, 17);
      // display.println("six");
                // display.setCursor(53, 192);
      // display.println("- Knut Hamsun, Hunger ");
          return;
        case 4:
          Serial.println(F("06:00 - On the 15th of September 1840, about six o'clock in the morning, the Ville-de-Montereau, ready to depart, pouring out great whirls of smoke by the quai Saint-Bernard. - Gustave Flaubert, L'Education sentimentale "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On the 15th of September 1840,");
                // display.setCursor(5, 17);
      // display.println("about TIMESTRING in the");
                // display.setCursor(5, 29);
      // display.println("morning, the Ville-de-Montereau, ready");
                // display.setCursor(5, 41);
      // display.println("to depart, pouring out great");
                // display.setCursor(5, 53);
      // display.println("whirls of smoke by the quai");
                // display.setCursor(11, 17);
      // display.println("six o'clock");
                // display.setCursor(25, 192);
      // display.println("- L'Education sentimentale");
          return;
        case 5:
          Serial.println(F("06:00 - Rise from bed ............... . 6.00 A.M. - F. Scott Fitzgerald, The Great Gatsby "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Rise from bed ............... .");
                // display.setCursor(5, 17);
      // display.println("6.00 A.M.");
                // display.setCursor(81, 192);
      // display.println("- The Great Gatsby");
          return;
        case 6:
          Serial.println(F("06:00 - The ball went on for a long time, until six in the morning; all were exhausted and wishing they had been in bed for at least three hours - Giuseppe Tomasi di Lampedusa, The Leopard "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The ball went on for a long time,");
                // display.setCursor(5, 17);
      // display.println("until");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING; all were exhausted and wishing");
                // display.setCursor(5, 41);
      // display.println("they had been in bed for at least");
                // display.setCursor(11, 17);
      // display.println("six in the morning");
                // display.setCursor(116, 192);
      // display.println("- The Leopard");
          return;
      } // end switch (option)

    // Codegen for 06:01 for 0 quotations:
    case 361:
      Serial.println(F("No quotes for 06:01"));
      return;

    // Codegen for 06:02 for 1 quotations:
    case 362:
      Serial.println(F("Only one option for 06:02:"));
    Serial.println(F("06:02 - Bimingham New Street 5.25. Walsall 5.55. This train does not stop at Birchills, for reasons George has never been able to ascertain. Then it is Bloxwich 6.02, Wyrley & Churchbridge 6.09. At 6.10 he nods to Mr Merriman the stationmaster. - Julian Barnes, Arthur and George"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Bimingham New Street 5.25.");
          // display.setCursor(5, 17);
      // display.println("Walsall 5.55. This train does not stop");
          // display.setCursor(5, 29);
      // display.println("at Birchills, for reasons George");
          // display.setCursor(5, 41);
      // display.println("has never been able to ascertain.");
          // display.setCursor(5, 53);
      // display.println("Then it is Bloxwich TIMESTRING,");
          // display.setCursor(5, 65);
      // display.println("Wyrley & Churchbridge 6.09. At 6.10 he");
          // display.setCursor(5, 77);
      // display.println("nods to Mr Merriman the");
          // display.setCursor(97, 53);
      // display.println("6.02");
          // display.setCursor(74, 192);
      // display.println("- Arthur and George");
      return;

    // Codegen for 06:03 for 0 quotations:
    case 363:
      Serial.println(F("No quotes for 06:03"));
      return;

    // Codegen for 06:04 for 0 quotations:
    case 364:
      Serial.println(F("No quotes for 06:04"));
      return;

    // Codegen for 06:05 for 1 quotations:
    case 365:
      Serial.println(F("Only one option for 06:05:"));
    Serial.println(F("06:05 - A second man went in and found the shop empty, as he thought, at five minutes past six. That puts the time at between 5:30 and 6:05. - Agatha Christie, The ABC Murders"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A second man went in and found the");
          // display.setCursor(5, 17);
      // display.println("shop empty, as he thought, at");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING. That puts the time at between");
          // display.setCursor(5, 29);
      // display.println("five minutes past six");
          // display.setCursor(88, 192);
      // display.println("- The ABC Murders");
      return;

    // Codegen for 06:06 for 1 quotations:
    case 366:
      Serial.println(F("Only one option for 06:06:"));
    Serial.println(F("06:06 - At 6:06, every toilet on Merit Street suddenly exploded in a geyser of shit and raw sewage as some unimaginable reversal took place in the pipes which fed the holding tanks of the new waste-treatment plant in the Barrens. - Stephen King, IT"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, every toilet");
          // display.setCursor(5, 17);
      // display.println("on Merit Street suddenly exploded");
          // display.setCursor(5, 29);
      // display.println("in a geyser of shit and raw sewage as");
          // display.setCursor(5, 41);
      // display.println("some unimaginable reversal took");
          // display.setCursor(5, 53);
      // display.println("place in the pipes which fed the");
          // display.setCursor(5, 65);
      // display.println("holding tanks of the new");
          // display.setCursor(20, 5);
      // display.println("6:06");
          // display.setCursor(81, 192);
      // display.println("- Stephen King, IT");
      return;

    // Codegen for 06:07 for 0 quotations:
    case 367:
      Serial.println(F("No quotes for 06:07"));
      return;

    // Codegen for 06:08 for 1 quotations:
    case 368:
      Serial.println(F("Only one option for 06:08:"));
    Serial.println(F("06:08 - At six oh-eight a.m. two men wearing ragged trench coats approached the Casino. The shorter of the men burst into flames. - Ilona Andrews, Magic Bleeds"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING two men wearing ragged trench");
          // display.setCursor(5, 29);
      // display.println("coats approached the Casino. The");
          // display.setCursor(20, 5);
      // display.println("six oh-eight a.m.");
          // display.setCursor(4, 192);
      // display.println("- Ilona Andrews, Magic Bleeds");
      return;

    // Codegen for 06:09 for 0 quotations:
    case 369:
      Serial.println(F("No quotes for 06:09"));
      return;

    // Codegen for 06:10 for 1 quotations:
    case 370:
      Serial.println(F("Only one option for 06:10:"));
    Serial.println(F("06:10 - The bus left the station at ten past six - and she sat proud, like an accustomed traveller, apart from her father, John Henry, and Berenice. But after a while a serious doubt came in her, which even the answers of the bus-driver could not quite satisfy. - Carson McCullers, The Member of the Wedding"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The bus left the station at");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING - and");
          // display.setCursor(5, 29);
      // display.println("she sat proud, like an accustomed");
          // display.setCursor(5, 41);
      // display.println("traveller, apart from her father, John");
          // display.setCursor(5, 53);
      // display.println("Henry, and Berenice. But after a while");
          // display.setCursor(5, 65);
      // display.println("a serious doubt came in her, which");
          // display.setCursor(5, 77);
      // display.println("even the answers of the bus-driver");
          // display.setCursor(5, 17);
      // display.println("ten past six");
          // display.setCursor(18, 192);
      // display.println("- The Member of the Wedding");
      return;

    // Codegen for 06:11 for 0 quotations:
    case 371:
      Serial.println(F("No quotes for 06:11"));
      return;

    // Codegen for 06:12 for 0 quotations:
    case 372:
      Serial.println(F("No quotes for 06:12"));
      return;

    // Codegen for 06:13 for 1 quotations:
    case 373:
      Serial.println(F("Only one option for 06:13:"));
    Serial.println(F("06:13 - It's 06:13 .........Ma says I ought to be wrapped up in Rug already, Old Nick might possibly come. - Emma Donoghue, Room "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It's TIMESTRING");
          // display.setCursor(5, 17);
      // display.println(".........Ma says I ought to be wrapped up in");
          // display.setCursor(5, 29);
      // display.println("Rug already, Old Nick might");
          // display.setCursor(34, 5);
      // display.println("06:13");
          // display.setCursor(53, 192);
      // display.println("- Emma Donoghue, Room ");
      return;

    // Codegen for 06:14 for 0 quotations:
    case 374:
      Serial.println(F("No quotes for 06:14"));
      return;

    // Codegen for 06:15 for 4 quotations:
    case 375:
      option = random(0, 4);
      Serial.print(F("4 options for 06:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:15 - Dumbbell exercise and wall-scaling ..... . 6.15-6.30 - F. Scott Fitzgerald, The Great Gatsby "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Dumbbell exercise and");
                // display.setCursor(62, 17);
      // display.println("6.15");
                // display.setCursor(81, 192);
      // display.println("- The Great Gatsby");
          return;
        case 1:
          Serial.println(F("06:15 - Father expected his shaving-water to be ready at a quarter past six. Just seven minutes late, Dorothy took the can upstairs and knocked at her father's door. - George Orwell, A Clergyman's Daughter"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Father expected his");
                // display.setCursor(5, 17);
      // display.println("shaving-water to be ready at a");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING.");
                // display.setCursor(5, 41);
      // display.println("Just seven minutes late, Dorothy");
                // display.setCursor(5, 53);
      // display.println("took the can upstairs and knocked at");
                // display.setCursor(5, 29);
      // display.println("quarter past six");
                // display.setCursor(39, 192);
      // display.println("- A Clergyman's Daughter");
          return;
        case 2:
          Serial.println(F("06:15 - It was 6.15 am. Just starting to get light. A small knot of older teenagers were leaning against a nearby wall. They looked as though they had been out all night.Two of the guys stared at us. Their eyes hard and threatening. - Sophie McKenzie, Girl Missing"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING Just");
                // display.setCursor(5, 17);
      // display.println("starting to get light. A small knot of");
                // display.setCursor(5, 29);
      // display.println("older teenagers were leaning against");
                // display.setCursor(5, 41);
      // display.println("a nearby wall. They looked as");
                // display.setCursor(5, 53);
      // display.println("though they had been out all night.Two");
                // display.setCursor(5, 65);
      // display.println("of the guys stared at us. Their eyes");
                // display.setCursor(42, 5);
      // display.println("6.15 am.");
                // display.setCursor(109, 192);
      // display.println("- Girl Missing");
          return;
        case 3:
          Serial.println(F("06:15 - It was 6.15 am. Just starting to get light. A small knot of older teenagers were leaning against a nearby wall. They looked as though they had been out all night.Two of the guys stared at us. Their eyes hard and threatening. - Sophie McKenzie, Girl Missing "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING Just");
                // display.setCursor(5, 17);
      // display.println("starting to get light. A small knot of");
                // display.setCursor(5, 29);
      // display.println("older teenagers were leaning against");
                // display.setCursor(5, 41);
      // display.println("a nearby wall. They looked as");
                // display.setCursor(5, 53);
      // display.println("though they had been out all night.Two");
                // display.setCursor(5, 65);
      // display.println("of the guys stared at us. Their eyes");
                // display.setCursor(42, 5);
      // display.println("6.15 am.");
                // display.setCursor(109, 192);
      // display.println("- Girl Missing");
          return;
      } // end switch (option)

    // Codegen for 06:16 for 0 quotations:
    case 376:
      Serial.println(F("No quotes for 06:16"));
      return;

    // Codegen for 06:17 for 1 quotations:
    case 377:
      Serial.println(F("Only one option for 06:17:"));
    Serial.println(F("06:17 - Dizzy, come on.' He turned slowly, coaxing the animal down on to the pillow. The clock read six-seventeen. A second cat, Miles, purred on contentedly from the patch in the covers where Resnick's legs had made a deep V. - John Harvey, Lonely Hearts"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Dizzy, come on.' He turned");
          // display.setCursor(5, 17);
      // display.println("slowly, coaxing the animal down on to");
          // display.setCursor(5, 29);
      // display.println("the pillow. The clock read");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING. A");
          // display.setCursor(5, 53);
      // display.println("second cat, Miles, purred on");
          // display.setCursor(5, 65);
      // display.println("contentedly from the patch in the covers");
          // display.setCursor(5, 77);
      // display.println("where Resnick's legs had made a deep");
          // display.setCursor(5, 41);
      // display.println("six-seventeen");
          // display.setCursor(11, 192);
      // display.println("- John Harvey, Lonely Hearts");
      return;

    // Codegen for 06:18 for 0 quotations:
    case 378:
      Serial.println(F("No quotes for 06:18"));
      return;

    // Codegen for 06:19 for 1 quotations:
    case 379:
      Serial.println(F("Only one option for 06:19:"));
    Serial.println(F("06:19 - 6.19 am, 8th June 2004, the jet of your pupil set in the gold of your eye. - Carol Ann Duffy, Venus"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING, 8th June");
          // display.setCursor(5, 17);
      // display.println("2004, the jet of your pupil set in the");
          // display.setCursor(5, 5);
      // display.println("6.19 am");
          // display.setCursor(39, 192);
      // display.println("- Carol Ann Duffy, Venus");
      return;

    // Codegen for 06:20 for 1 quotations:
    case 380:
      Serial.println(F("Only one option for 06:20:"));
    Serial.println(F("06:20 - It was 6:20 a.m., and my parents and I were standing, stunned and haf-awake, in the parking lot of a Howard Johnson's in Iowa. - Austin Grossman, Soon I Will Be Invincible"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING, and");
          // display.setCursor(5, 17);
      // display.println("my parents and I were standing,");
          // display.setCursor(5, 29);
      // display.println("stunned and haf-awake, in the parking");
          // display.setCursor(42, 5);
      // display.println("6:20 a.m.");
          // display.setCursor(18, 192);
      // display.println("- Soon I Will Be Invincible");
      return;

    // Codegen for 06:21 for 0 quotations:
    case 381:
      Serial.println(F("No quotes for 06:21"));
      return;

    // Codegen for 06:22 for 0 quotations:
    case 382:
      Serial.println(F("No quotes for 06:22"));
      return;

    // Codegen for 06:23 for 0 quotations:
    case 383:
      Serial.println(F("No quotes for 06:23"));
      return;

    // Codegen for 06:24 for 0 quotations:
    case 384:
      Serial.println(F("No quotes for 06:24"));
      return;

    // Codegen for 06:25 for 2 quotations:
    case 385:
      option = random(0, 2);
      Serial.print(F("2 options for 06:25. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:25 - Simon is happy to travel scum class when he's on his own and even sometimes deliberately aims for the 6.25. But today the .25 is delayed to 6.44. - Mark Lawson, The Deaths"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Simon is happy to travel scum");
                // display.setCursor(5, 17);
      // display.println("class when he's on his own and even");
                // display.setCursor(5, 29);
      // display.println("sometimes deliberately aims for the");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING. But today the .25 is delayed to");
                // display.setCursor(173, 29);
      // display.println("6.25");
                // display.setCursor(32, 192);
      // display.println("- Mark Lawson, The Deaths");
          return;
        case 1:
          Serial.println(F("06:25 - The Professor looked at his watch. I looked at my watch. Six-twenty-five. Well past daybreak. Morning papers delivered. - Haruki Murakami, Hard Boiled Wonderland and the End of the World"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Professor looked at his");
                // display.setCursor(5, 17);
      // display.println("watch. I looked at my watch.");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING.");
                // display.setCursor(5, 41);
      // display.println("Well past daybreak. Morning papers");
                // display.setCursor(5, 29);
      // display.println("Six-twenty-five");
                // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
          return;
      } // end switch (option)

    // Codegen for 06:26 for 0 quotations:
    case 386:
      Serial.println(F("No quotes for 06:26"));
      return;

    // Codegen for 06:27 for 2 quotations:
    case 387:
      option = random(0, 2);
      Serial.print(F("2 options for 06:27. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:27 - 06:27:52 by the chip in her optic nerve; Case had been following her progress through Villa Straylight for over an hour, letting the endorphin analogue she'd taken blot out his hangover. - William Gibson, Neuromancer "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING:52 by the chip");
                // display.setCursor(5, 17);
      // display.println("in her optic nerve; Case had been");
                // display.setCursor(5, 29);
      // display.println("following her progress through Villa");
                // display.setCursor(5, 41);
      // display.println("Straylight for over an hour, letting the");
                // display.setCursor(5, 53);
      // display.println("endorphin analogue she'd taken blot out");
                // display.setCursor(5, 5);
      // display.println("06:27");
                // display.setCursor(116, 192);
      // display.println("- Neuromancer");
          return;
        case 1:
          Serial.println(F("06:27 - Early in the morning, late in the century, Cricklewood Broadway. At 0627 hours on January 1, 1975, Alfred Archibald Jones was dressed in corduroy and sat in a fume-filled Cavalier Musketeer Estate, facedown on the steering wheel - Zadie Smith, White Teeth "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Early in the morning, late in the");
                // display.setCursor(5, 17);
      // display.println("century, Cricklewood Broadway. At");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING on");
                // display.setCursor(5, 41);
      // display.println("January 1, 1975, Alfred Archibald");
                // display.setCursor(5, 53);
      // display.println("Jones was dressed in corduroy and sat");
                // display.setCursor(5, 65);
      // display.println("in a fume-filled Cavalier");
                // display.setCursor(5, 77);
      // display.println("Musketeer Estate, facedown on the");
                // display.setCursor(5, 29);
      // display.println("0627 hours");
                // display.setCursor(18, 192);
      // display.println("- Zadie Smith, White Teeth ");
          return;
      } // end switch (option)

    // Codegen for 06:28 for 0 quotations:
    case 388:
      Serial.println(F("No quotes for 06:28"));
      return;

    // Codegen for 06:29 for 1 quotations:
    case 389:
      Serial.println(F("Only one option for 06:29:"));
    Serial.println(F("06:29 - I sat up. There was a rug over me. I threw that off and got my feet on the floor. I scowled at a clock. The clock said a minute short of six-thirty. - Raymond Chandler, The Big Sleep"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I sat up. There was a rug over me. I");
          // display.setCursor(5, 17);
      // display.println("threw that off and got my feet on the");
          // display.setCursor(5, 29);
      // display.println("floor. I scowled at a clock. The clock");
          // display.setCursor(5, 41);
      // display.println("said");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("a minute short of six-thirty");
          // display.setCursor(102, 192);
      // display.println("- The Big Sleep");
      return;

    // Codegen for 06:30 for 7 quotations:
    case 390:
      option = random(0, 7);
      Serial.print(F("7 options for 06:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:30 - Inside now MJ ordered. She pushed the three of us into the hotel room, thern shut the soor. I glanced at the clock by the bed. 6.30 am. Why were they waking Mum and Dad up this early? - Sophie McKenzie, Girl Missing "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Inside now MJ ordered. She");
                // display.setCursor(5, 17);
      // display.println("pushed the three of us into the hotel");
                // display.setCursor(5, 29);
      // display.println("room, thern shut the soor. I glanced");
                // display.setCursor(5, 41);
      // display.println("at the clock by the bed.");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING Why were they waking Mum and Dad");
                // display.setCursor(132, 41);
      // display.println("6.30 am.");
                // display.setCursor(109, 192);
      // display.println("- Girl Missing");
          return;
        case 1:
          Serial.println(F("06:30 - Daniel still held the door-knob. He was ready to close the door the second he was told to. \"What time is it?\" said his father in a drugged voice. \"Oh my God, it's six-thirty,\" his mother said. - E.L. Doctorow, The Book of Daniel"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Daniel still held the door-knob.");
                // display.setCursor(5, 17);
      // display.println("He was ready to close the door the");
                // display.setCursor(5, 29);
      // display.println("second he was told to. \"What time is");
                // display.setCursor(5, 41);
      // display.println("it?\" said his father in a drugged");
                // display.setCursor(5, 53);
      // display.println("voice. \"Oh my God, it's");
                // display.setCursor(114, 53);
      // display.println("six-thirty");
                // display.setCursor(67, 192);
      // display.println("- The Book of Daniel");
          return;
        case 2:
          Serial.println(F("06:30 - It was six-thirty. When the baby's cry came, they could not pick it out, and Sam, eagerly thrusting his face amongst their ears, said, \"Listen, there, there, that's the new baby.\" He was red with delight and success. - Christina Stead, The Man Who Loved Children "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING.");
                // display.setCursor(5, 17);
      // display.println("When the baby's cry came, they could");
                // display.setCursor(5, 29);
      // display.println("not pick it out, and Sam, eagerly");
                // display.setCursor(5, 41);
      // display.println("thrusting his face amongst their ears,");
                // display.setCursor(5, 53);
      // display.println("said, \"Listen, there, there, that's");
                // display.setCursor(5, 65);
      // display.println("the new baby.\" He was red with");
                // display.setCursor(42, 5);
      // display.println("six-thirty");
                // display.setCursor(11, 192);
      // display.println("- The Man Who Loved Children");
          return;
        case 3:
          Serial.println(F("06:30 - Then he got back in the truck. The bar clock said six-thirty...By eight-thirty he’d decided that it that was it would take to make the cab arrive then that’s what he would do and he started the engine. - Cormac McCarthy, Cities of the Plain"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Then he got back in the truck. The");
                // display.setCursor(5, 17);
      // display.println("bar clock said");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING...By eight-thirty he’d decided");
                // display.setCursor(5, 41);
      // display.println("that it that was it would take to make");
                // display.setCursor(5, 53);
      // display.println("the cab arrive then that’s what he");
                // display.setCursor(74, 17);
      // display.println("six-thirty");
                // display.setCursor(60, 192);
      // display.println("- Cities of the Plain");
          return;
        case 4:
          Serial.println(F("06:30 - The footsteps had retreated. Through her wide-open window the brilliant rays of the morning sun were flooding her room with light. She looked up at the clock; it was half-past six—too early for any of the household to be already astir. - Baroness Orczy, The Scarlet Pimpernel "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The footsteps had retreated.");
                // display.setCursor(5, 17);
      // display.println("Through her wide-open window the");
                // display.setCursor(5, 29);
      // display.println("brilliant rays of the morning sun were");
                // display.setCursor(5, 41);
      // display.println("flooding her room with light. She looked");
                // display.setCursor(5, 53);
      // display.println("up at the clock; it was");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING—too");
                // display.setCursor(5, 77);
      // display.println("early for any of the household to be");
                // display.setCursor(5, 65);
      // display.println("half-past six");
                // display.setCursor(46, 192);
      // display.println("- The Scarlet Pimpernel");
          return;
        case 5:
          Serial.println(F("06:30 - Six-thirty was clearly a preposterous time and he, the client, obviously hadn't meant it seriously. A civilised six-thirty for twelve noon was almost certainly what he had in mind, and if he wanted to cut up rough about it - Douglas Adams, The Long Dark Tea-time of the Soul "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Six-thirty was clearly a");
                // display.setCursor(5, 17);
      // display.println("preposterous time and he, the client,");
                // display.setCursor(5, 29);
      // display.println("obviously hadn't meant it seriously. A");
                // display.setCursor(5, 41);
      // display.println("civilised TIMESTRING for");
                // display.setCursor(5, 53);
      // display.println("twelve noon was almost certainly what");
                // display.setCursor(5, 65);
      // display.println("he had in mind, and if he wanted to");
                // display.setCursor(15, 41);
      // display.println("six-thirty");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 6:
          Serial.println(F("06:30 - As late as 1914 I knew the carrier of Croydon-cum-Clopton, twelve miles from Cambridge; his cart started at 6.30 in the morning and got back at about ten at night. Though he was not old, he could neither read nor write - Gwen Raverat, Period Piece "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As late as 1914 I knew the carrier");
                // display.setCursor(5, 17);
      // display.println("of Croydon-cum-Clopton, twelve");
                // display.setCursor(5, 29);
      // display.println("miles from Cambridge; his cart");
                // display.setCursor(5, 41);
      // display.println("started at");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING and got back at about ten at");
                // display.setCursor(5, 65);
      // display.println("night. Though he was not old, he could");
                // display.setCursor(28, 41);
      // display.println("6.30 in the morning");
                // display.setCursor(4, 192);
      // display.println("- Gwen Raverat, Period Piece ");
          return;
      } // end switch (option)

    // Codegen for 06:31 for 0 quotations:
    case 391:
      Serial.println(F("No quotes for 06:31"));
      return;

    // Codegen for 06:32 for 1 quotations:
    case 392:
      Serial.println(F("Only one option for 06:32:"));
    Serial.println(F("06:32 - The familiar radium numerals on my left wrist confirmed the clock tower. It was twenty-eight minutes to seven. I seemed to be filling a set of loud maroon pajamas which were certainly not mine. My vis-a-vis was wearing a little number in yellow. - Dana Chambers, Too Like the Lightning"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The familiar radium numerals on");
          // display.setCursor(5, 17);
      // display.println("my left wrist confirmed the clock");
          // display.setCursor(5, 29);
      // display.println("tower. It was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING. I seemed to be filling a set of");
          // display.setCursor(5, 65);
      // display.println("loud maroon pajamas which were");
          // display.setCursor(5, 77);
      // display.println("certainly not mine. My vis-a-vis was");
          // display.setCursor(5, 41);
      // display.println("twenty-eight minutes to seven");
          // display.setCursor(39, 192);
      // display.println("- Too Like the Lightning");
      return;

    // Codegen for 06:33 for 1 quotations:
    case 393:
      Serial.println(F("Only one option for 06:33:"));
    Serial.println(F("06:33 - Woke 6.33 a.m. Last session with Anderson. He made it plain he's seen enough of me, and from now on I'm better alone. To sleep 8:00? (These count-downs terrify me.) He paused, then added: Goodbye, Eniwetok. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Woke TIMESTRING Last");
          // display.setCursor(5, 17);
      // display.println("session with Anderson. He made it plain");
          // display.setCursor(5, 29);
      // display.println("he's seen enough of me, and from now");
          // display.setCursor(5, 41);
      // display.println("on I'm better alone. To sleep 8:00?");
          // display.setCursor(5, 53);
      // display.println("(These count-downs terrify me.) He");
          // display.setCursor(34, 5);
      // display.println("6.33 a.m.");
          // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
      return;

    // Codegen for 06:34 for 0 quotations:
    case 394:
      Serial.println(F("No quotes for 06:34"));
      return;

    // Codegen for 06:35 for 1 quotations:
    case 395:
      Serial.println(F("Only one option for 06:35:"));
    Serial.println(F("06:35 - My watch lay on the dressing-table close by; glancing at it, I saw that the time was twenty-five minutes to seven. I had been told that the family breakfasted at nine, so I had nearly two-and-a-half hours of leisure. - J.S. Fletcher, Ravensdene Court"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("My watch lay on the");
          // display.setCursor(5, 17);
      // display.println("dressing-table close by; glancing at it, I saw");
          // display.setCursor(5, 29);
      // display.println("that the time was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING. I had been told that the family");
          // display.setCursor(5, 65);
      // display.println("breakfasted at nine, so I had nearly");
          // display.setCursor(5, 41);
      // display.println("twenty-five minutes to seven");
          // display.setCursor(81, 192);
      // display.println("- Ravensdene Court");
      return;

    // Codegen for 06:36 for 1 quotations:
    case 396:
      Serial.println(F("Only one option for 06:36:"));
    Serial.println(F("06:36 - Kaldren pursues me like luminescent shadow. He has chalked up on the gateway '96,688,365,498,702'. Should confuse the mail man. Woke 9:05. To sleep 6:36. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Kaldren pursues me like");
          // display.setCursor(5, 17);
      // display.println("luminescent shadow. He has chalked up on the");
          // display.setCursor(5, 29);
      // display.println("gateway '96,688,365,498,702'. Should");
          // display.setCursor(5, 41);
      // display.println("confuse the mail man. Woke 9:05. To");
          // display.setCursor(11, 53);
      // display.println("6:36");
          // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
      return;

    // Codegen for 06:37 for 1 quotations:
    case 397:
      Serial.println(F("Only one option for 06:37:"));
    Serial.println(F("06:37 - The dashboard clock said 6.37am Town frowned, and checked his wristwatch, which blinked that it was 1.58pm. Great, he thought. I was either up on that tree for eight hours, or for minus a minute. - Neil Gaiman, American Gods"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The dashboard clock said");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING Town frowned, and checked his");
          // display.setCursor(5, 29);
      // display.println("wristwatch, which blinked that it was");
          // display.setCursor(5, 41);
      // display.println("1.58pm. Great, he thought. I was either");
          // display.setCursor(5, 53);
      // display.println("up on that tree for eight hours, or");
          // display.setCursor(156, 5);
      // display.println("6.37am");
          // display.setCursor(11, 192);
      // display.println("- Neil Gaiman, American Gods");
      return;

    // Codegen for 06:38 for 1 quotations:
    case 398:
      Serial.println(F("Only one option for 06:38:"));
    Serial.println(F("06:38 - The clock on the dashboard said it was 6.38am. He left the keys in the car, and walked toward the tree. - Neil Gaiman, American Gods"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The clock on the dashboard said");
          // display.setCursor(5, 17);
      // display.println("it was TIMESTRING He left");
          // display.setCursor(5, 29);
      // display.println("the keys in the car, and walked");
          // display.setCursor(30, 17);
      // display.println("6.38am.");
          // display.setCursor(11, 192);
      // display.println("- Neil Gaiman, American Gods");
      return;

    // Codegen for 06:39 for 0 quotations:
    case 399:
      Serial.println(F("No quotes for 06:39"));
      return;

    // Codegen for 06:40 for 1 quotations:
    case 400:
      Serial.println(F("Only one option for 06:40:"));
    Serial.println(F("06:40 - At eleven o'clock the phone rang, and still the figure did not respond, any more than it has responded when the phone had rung at twenty-five to seven in the morning, and again at twenty to seven - Douglas Adams, The Long Dark Tea-Time of the Soul"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At eleven o'clock the phone");
          // display.setCursor(5, 17);
      // display.println("rang, and still the figure did not");
          // display.setCursor(5, 29);
      // display.println("respond, any more than it has responded");
          // display.setCursor(5, 41);
      // display.println("when the phone had rung at");
          // display.setCursor(5, 53);
      // display.println("twenty-five to seven in the morning, and");
          // display.setCursor(26, 65);
      // display.println("twenty to seven");
          // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
      return;

    // Codegen for 06:41 for 0 quotations:
    case 401:
      Serial.println(F("No quotes for 06:41"));
      return;

    // Codegen for 06:42 for 0 quotations:
    case 402:
      Serial.println(F("No quotes for 06:42"));
      return;

    // Codegen for 06:43 for 1 quotations:
    case 403:
      Serial.println(F("Only one option for 06:43:"));
    Serial.println(F("06:43 - To London on the 6.43am. Jessica is back from her holiday. Things are looking up, she called me Chris, instead of Minister, when we talked on the phone this afternoon. - Chris Mullin, A View From the Foothills"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("To London on the");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING Jessica is back from her");
          // display.setCursor(5, 29);
      // display.println("holiday. Things are looking up, she");
          // display.setCursor(5, 41);
      // display.println("called me Chris, instead of Minister,");
          // display.setCursor(5, 53);
      // display.println("when we talked on the phone this");
          // display.setCursor(100, 5);
      // display.println("6.43am.");
          // display.setCursor(18, 192);
      // display.println("- A View From the Foothills");
      return;

    // Codegen for 06:44 for 1 quotations:
    case 404:
      Serial.println(F("Only one option for 06:44:"));
    Serial.println(F("06:44 - Simon is happy to travel scum class when he's on his own and even sometimes deliberately aims for the 6.25. But today the .25 is delayed to 6.44. - Mark Lawson, The Deaths"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Simon is happy to travel scum");
          // display.setCursor(5, 17);
      // display.println("class when he's on his own and even");
          // display.setCursor(5, 29);
      // display.println("sometimes deliberately aims for the");
          // display.setCursor(5, 41);
      // display.println("6.25. But today the .25 is delayed to");
          // display.setCursor(5, 53);
      // display.println("6.44");
          // display.setCursor(32, 192);
      // display.println("- Mark Lawson, The Deaths");
      return;

    // Codegen for 06:45 for 2 quotations:
    case 405:
      option = random(0, 2);
      Serial.print(F("2 options for 06:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:45 - As the clock pointed to a quarter to seven, the dog woke and shook himself. After waiting in vain for the footman, who was accustomed to let him out, the animal wandered restlessly from one closed door to another on the ground floor - Wilkie Collins, No Name "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As the clock pointed to a");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 29);
      // display.println("the dog woke and shook himself.");
                // display.setCursor(5, 41);
      // display.println("After waiting in vain for the footman,");
                // display.setCursor(5, 53);
      // display.println("who was accustomed to let him out,");
                // display.setCursor(5, 65);
      // display.println("the animal wandered restlessly");
                // display.setCursor(5, 77);
      // display.println("from one closed door to another on the");
                // display.setCursor(5, 17);
      // display.println("quarter to seven");
                // display.setCursor(25, 192);
      // display.println("- Wilkie Collins, No Name ");
          return;
        case 1:
          Serial.println(F("06:45 - He was still hurriedly thinking all this through, unable to decide to get out of the bed, when the clock struck quarter to seven. There was a cautious knock at the door near his head. \"Gregor\", somebody called - it was his mother - Franz Kafka, Metamorphosis"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He was still hurriedly thinking");
                // display.setCursor(5, 17);
      // display.println("all this through, unable to decide");
                // display.setCursor(5, 29);
      // display.println("to get out of the bed, when the clock");
                // display.setCursor(5, 41);
      // display.println("struck TIMESTRING.");
                // display.setCursor(5, 53);
      // display.println("There was a cautious knock at the door");
                // display.setCursor(5, 65);
      // display.println("near his head. \"Gregor\", somebody");
                // display.setCursor(12, 41);
      // display.println("quarter to seven");
                // display.setCursor(11, 192);
      // display.println("- Franz Kafka, Metamorphosis");
          return;
      } // end switch (option)

    // Codegen for 06:46 for 2 quotations:
    case 406:
      option = random(0, 2);
      Serial.print(F("2 options for 06:46. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:46 - At one minute after the quarter to seven I heard the rattle of the cans outside. I opened the front door, and there was my man, singling out my cans from a bunch he carried and whistling through his teeth. - John Buchan, The Thirty-Nine Steps"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING I heard the rattle of the cans");
                // display.setCursor(5, 41);
      // display.println("outside. I opened the front door, and");
                // display.setCursor(5, 53);
      // display.println("there was my man, singling out my cans");
                // display.setCursor(5, 65);
      // display.println("from a bunch he carried and whistling");
                // display.setCursor(5, 17);
      // display.println("one minute after the quarter to seven");
                // display.setCursor(46, 192);
      // display.println("- The Thirty-Nine Steps");
          return;
        case 1:
          Serial.println(F("06:46 - Six-thirty passed, then six-forty, but still he did not come. The fool had chosen this day of all days to be late. At one minute after the quarter to seven I heard the rattle of the cans outside. - John Buchan, The Thirty-Nine Steps "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Six-thirty passed, then");
                // display.setCursor(5, 17);
      // display.println("six-forty, but still he did not come. The");
                // display.setCursor(5, 29);
      // display.println("fool had chosen this day of all days");
                // display.setCursor(5, 41);
      // display.println("to be late. At");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING I heard the rattle of the cans");
                // display.setCursor(5, 53);
      // display.println("one minute after the quarter to seven");
                // display.setCursor(46, 192);
      // display.println("- The Thirty-Nine Steps");
          return;
      } // end switch (option)

    // Codegen for 06:47 for 0 quotations:
    case 407:
      Serial.println(F("No quotes for 06:47"));
      return;

    // Codegen for 06:48 for 0 quotations:
    case 408:
      Serial.println(F("No quotes for 06:48"));
      return;

    // Codegen for 06:49 for 1 quotations:
    case 409:
      Serial.println(F("Only one option for 06:49:"));
    Serial.println(F("06:49 - Night ends, 6:49. Meet in the coffee shop at 7:30; press conference at 10:00. - Hunter S. Thompson, Fear and Loathing: On the Campaign Trail '72"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Night ends, TIMESTRING.");
          // display.setCursor(5, 17);
      // display.println("Meet in the coffee shop at 7:30; press");
          // display.setCursor(77, 5);
      // display.println("6:49");
          // display.setCursor(67, 192);
      // display.println("- Hunter S. Thompson");
      return;

    // Codegen for 06:50 for 1 quotations:
    case 410:
      Serial.println(F("Only one option for 06:50:"));
    Serial.println(F("06:50 - Will, my fiancé, was coming from Boston on the six-fifty train - the dawn train, the only train that still stopped in the small Ohio city where I lived. - Mary Robison, Pretty Ice"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Will, my fiancé, was coming from");
          // display.setCursor(5, 17);
      // display.println("Boston on the TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("train - the dawn train, the only train");
          // display.setCursor(5, 41);
      // display.println("that still stopped in the small Ohio");
          // display.setCursor(49, 17);
      // display.println("six-fifty");
          // display.setCursor(25, 192);
      // display.println("- Mary Robison, Pretty Ice");
      return;

    // Codegen for 06:51 for 0 quotations:
    case 411:
      Serial.println(F("No quotes for 06:51"));
      return;

    // Codegen for 06:52 for 0 quotations:
    case 412:
      Serial.println(F("No quotes for 06:52"));
      return;

    // Codegen for 06:53 for 0 quotations:
    case 413:
      Serial.println(F("No quotes for 06:53"));
      return;

    // Codegen for 06:54 for 0 quotations:
    case 414:
      Serial.println(F("No quotes for 06:54"));
      return;

    // Codegen for 06:55 for 1 quotations:
    case 415:
      Serial.println(F("Only one option for 06:55:"));
    Serial.println(F("06:55 - At 6:55 am Lisa parked and took the lift from the frozen underground car park up to level 1 of Green Oaks Shopping Centre. - Catherine O'Flynn, What was Lost"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING Lisa");
          // display.setCursor(5, 17);
      // display.println("parked and took the lift from the");
          // display.setCursor(5, 29);
      // display.println("frozen underground car park up to");
          // display.setCursor(20, 5);
      // display.println("6:55 am");
          // display.setCursor(102, 192);
      // display.println("- What was Lost");
      return;

    // Codegen for 06:56 for 0 quotations:
    case 416:
      Serial.println(F("No quotes for 06:56"));
      return;

    // Codegen for 06:57 for 0 quotations:
    case 417:
      Serial.println(F("No quotes for 06:57"));
      return;

    // Codegen for 06:58 for 0 quotations:
    case 418:
      Serial.println(F("No quotes for 06:58"));
      return;

    // Codegen for 06:59 for 1 quotations:
    case 419:
      Serial.println(F("Only one option for 06:59:"));
    Serial.println(F("06:59 - It was 6.59 a.m. on Maundy Thursday as Blomkvist and Berger let themselves into the \"Millennium\" offices. - Stieg Larsson, The Girl who Played with Fire"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was TIMESTRING on");
          // display.setCursor(5, 17);
      // display.println("Maundy Thursday as Blomkvist and");
          // display.setCursor(5, 29);
      // display.println("Berger let themselves into the");
          // display.setCursor(42, 5);
      // display.println("6.59 a.m.");
          // display.setCursor(102, 192);
      // display.println("- Stieg Larsson");
      return;

    // Codegen for 07:00 for 4 quotations:
    case 420:
      option = random(0, 4);
      Serial.print(F("4 options for 07:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:00 - Seven o'clock, already, he said to himself when the clock struck again, \"seven o'clock, and there's still a fog like this.\" - Franz Kafka, Metamorphosis "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Seven o'clock, already, he said");
                // display.setCursor(5, 17);
      // display.println("to himself when the clock struck");
                // display.setCursor(5, 29);
      // display.println("again, \"TIMESTRING,");
                // display.setCursor(12, 29);
      // display.println("seven o'clock");
                // display.setCursor(4, 192);
      // display.println("- Franz Kafka, Metamorphosis ");
          return;
        case 1:
          Serial.println(F("07:00 - At seven o’clock in the morning, Rubashov was awakened by a bugle, but he did not get up. Soon he heard sounds in the corridor. He imagined that someone was to be tortured, and he dreaded hearing the first screams of pain. - Arthur Koestler, Darkness at Noon "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING in");
                // display.setCursor(5, 17);
      // display.println("the morning, Rubashov was awakened");
                // display.setCursor(5, 29);
      // display.println("by a bugle, but he did not get up.");
                // display.setCursor(5, 41);
      // display.println("Soon he heard sounds in the corridor.");
                // display.setCursor(5, 53);
      // display.println("He imagined that someone was to be");
                // display.setCursor(5, 65);
      // display.println("tortured, and he dreaded hearing the");
                // display.setCursor(20, 5);
      // display.println("seven o’clock");
                // display.setCursor(81, 192);
      // display.println("- Darkness at Noon");
          return;
        case 2:
          Serial.println(F("07:00 - I had left directions that I was to be called at seven; for it was plain that I must see Wemmick before seeing any one else - Charles Dickens, Great Expectations"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I had left directions that I was");
                // display.setCursor(5, 17);
      // display.println("to be called TIMESTRING;");
                // display.setCursor(5, 29);
      // display.println("for it was plain that I must see");
                // display.setCursor(66, 17);
      // display.println("at seven");
                // display.setCursor(67, 192);
      // display.println("- Great Expectations");
          return;
        case 3:
          Serial.println(F("07:00 - She locked herself in, made no reply to my bonjour through the door; she was up at seven o'clock, the samovar was taken in to her from the kitchen. - Fyodor Dostoyevsky, Crime and Punishment "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She locked herself in, made no");
                // display.setCursor(5, 17);
      // display.println("reply to my bonjour through the door;");
                // display.setCursor(5, 29);
      // display.println("she was up at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING, the samovar was taken in to her");
                // display.setCursor(61, 29);
      // display.println("seven o'clock");
                // display.setCursor(53, 192);
      // display.println("- Crime and Punishment");
          return;
      } // end switch (option)

    // Codegen for 07:01 for 0 quotations:
    case 421:
      Serial.println(F("No quotes for 07:01"));
      return;

    // Codegen for 07:02 for 1 quotations:
    case 422:
      Serial.println(F("Only one option for 07:02:"));
    Serial.println(F("07:02 - 07:02:18 One and a half hours. 'Case,' she said, 'I wanna favour.' - William Gibson, Neuromancer"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING:18 One and a");
          // display.setCursor(5, 17);
      // display.println("half hours. 'Case,' she said, 'I");
          // display.setCursor(5, 5);
      // display.println("07:02");
          // display.setCursor(4, 192);
      // display.println("- William Gibson, Neuromancer");
      return;

    // Codegen for 07:03 for 1 quotations:
    case 423:
      Serial.println(F("Only one option for 07:03:"));
    Serial.println(F("07:03 - 7:03am General Tanz woke up as though aroused by a mental alarm-clock. - Hans Hellmut Kirst, The Night of the Generals"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING General Tanz");
          // display.setCursor(5, 17);
      // display.println("woke up as though aroused by a mental");
          // display.setCursor(5, 5);
      // display.println("7:03am");
          // display.setCursor(18, 192);
      // display.println("- The Night of the Generals");
      return;

    // Codegen for 07:04 for 1 quotations:
    case 424:
      Serial.println(F("Only one option for 07:04:"));
    Serial.println(F("07:04 - Sunday evening at almost the same hour (to be precise, at about 7:04 p.m.) she rings the front door bell at the home of Walter Moeding, Crime Commissioner, who is at that moment engaged, for professional rather than private reasons, in disguising himself as a sheikh. - Heinrich Böll, The Lost Honour of Katharina Blum"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Sunday evening at almost the");
          // display.setCursor(5, 17);
      // display.println("same hour (to be precise, at about");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING) she rings");
          // display.setCursor(5, 41);
      // display.println("the front door bell at the home of");
          // display.setCursor(5, 53);
      // display.println("Walter Moeding, Crime Commissioner,");
          // display.setCursor(5, 65);
      // display.println("who is at that moment engaged, for");
          // display.setCursor(5, 77);
      // display.println("professional rather than private reasons,");
          // display.setCursor(5, 29);
      // display.println("7:04 p.m.");
          // display.setCursor(102, 192);
      // display.println("- Heinrich Böll");
      return;

    // Codegen for 07:05 for 3 quotations:
    case 425:
      option = random(0, 3);
      Serial.print(F("3 options for 07:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:05 - He decided he'd wait until five minutes after seven o'clock, and then he'd call in, take the day off, and make every effort in the book to locate someone reliable. - Raymond Carver, Where I'm Calling From "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He decided he'd wait until");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, and then he'd call in, take the");
                // display.setCursor(5, 41);
      // display.println("day off, and make every effort in the");
                // display.setCursor(5, 17);
      // display.println("five minutes after seven o'clock");
                // display.setCursor(39, 192);
      // display.println("- Where I'm Calling From");
          return;
        case 1:
          Serial.println(F("07:05 - Outside my window the sky hung low and gray. It looked like snow, which added to my malaise. The clock read five after seven. I punched the remote control and watched the morning news as I lay in bed. - Haruki Murakami, Dance Dance Dance"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Outside my window the sky hung");
                // display.setCursor(5, 17);
      // display.println("low and gray. It looked like snow,");
                // display.setCursor(5, 29);
      // display.println("which added to my malaise. The clock");
                // display.setCursor(5, 41);
      // display.println("read TIMESTRING.");
                // display.setCursor(5, 53);
      // display.println("I punched the remote control and");
                // display.setCursor(10, 41);
      // display.println("five after seven");
                // display.setCursor(74, 192);
      // display.println("- Dance Dance Dance");
          return;
        case 2:
          Serial.println(F("07:05 - Ryan missed the dawn. He boarded a TWA 747 that left Dulles on time, at 7:05 A.M. The sky was overcast, and when the aircraft burst through the cloud layer into sunlight, Ryan did something he had never done before. - Tom Clancy, The Hunt for Red October "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Ryan missed the dawn. He boarded");
                // display.setCursor(5, 17);
      // display.println("a TWA 747 that left Dulles on time,");
                // display.setCursor(5, 29);
      // display.println("at TIMESTRING The sky");
                // display.setCursor(5, 41);
      // display.println("was overcast, and when the aircraft");
                // display.setCursor(5, 53);
      // display.println("burst through the cloud layer into");
                // display.setCursor(5, 65);
      // display.println("sunlight, Ryan did something he had never");
                // display.setCursor(8, 29);
      // display.println("7:05 A.M.");
                // display.setCursor(25, 192);
      // display.println("- The Hunt for Red October");
          return;
      } // end switch (option)

    // Codegen for 07:06 for 1 quotations:
    case 426:
      Serial.println(F("Only one option for 07:06:"));
    Serial.println(F("07:06 - But Percy subscribed to that old axiom about how you should get right back on the horse that had thrown you, because here he came through the door at six minutes past seven, resplendent in his blue uniform with his sidearm - Stephen King, The Green Mile "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("But Percy subscribed to that old");
          // display.setCursor(5, 17);
      // display.println("axiom about how you should get right");
          // display.setCursor(5, 29);
      // display.println("back on the horse that had thrown you,");
          // display.setCursor(5, 41);
      // display.println("because here he came through the door at");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, resplendent in his blue");
          // display.setCursor(5, 53);
      // display.println("six minutes past seven");
          // display.setCursor(95, 192);
      // display.println("- The Green Mile");
      return;

    // Codegen for 07:07 for 0 quotations:
    case 427:
      Serial.println(F("No quotes for 07:07"));
      return;

    // Codegen for 07:08 for 1 quotations:
    case 428:
      Serial.println(F("Only one option for 07:08:"));
    Serial.println(F("07:08 - Reacher had no watch but he figured when he saw Gregory it must have been between eight and nine minutes after seven o'clock. - Lee Child, The Hard Way"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Reacher had no watch but he");
          // display.setCursor(5, 17);
      // display.println("figured when he saw Gregory it must have");
          // display.setCursor(5, 29);
      // display.println("been");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("between eight and nine minutes after seven o'clock");
          // display.setCursor(32, 192);
      // display.println("- Lee Child, The Hard Way");
      return;

    // Codegen for 07:09 for 2 quotations:
    case 429:
      option = random(0, 2);
      Serial.print(F("2 options for 07:09. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:09 - Seven o 'clock! as if it were afraid that nobody would. The morning house lay empty. The clock ticked on, repeating and repeating its sounds into the emptiness. Seven-nine, breakfast time, seven-nine! - Ray Bradbury, There Will Come Soft Rains "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Seven o 'clock! as if it were");
                // display.setCursor(5, 17);
      // display.println("afraid that nobody would. The morning");
                // display.setCursor(5, 29);
      // display.println("house lay empty. The clock ticked on,");
                // display.setCursor(5, 41);
      // display.println("repeating and repeating its sounds into");
                // display.setCursor(5, 53);
      // display.println("the emptiness. Seven-nine,");
                // display.setCursor(51, 65);
      // display.println("seven-nine");
                // display.setCursor(11, 192);
      // display.println("- There Will Come Soft Rains");
          return;
        case 1:
          Serial.println(F("07:09 - Seven-nine, breakfast time, seven-nine! - Ray Bradbury, There Will Come Soft Rains"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Seven-nine, breakfast time,");
                // display.setCursor(5, 17);
      // display.println("seven-nine");
                // display.setCursor(11, 192);
      // display.println("- There Will Come Soft Rains");
          return;
      } // end switch (option)

    // Codegen for 07:10 for 2 quotations:
    case 430:
      option = random(0, 2);
      Serial.print(F("2 options for 07:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:10 - A search in Bradshaw informed me that a train left St Pancras at 7.10, which would land me at any Galloway station in the late afternoon. - John Buchan, The Thirty-Nine Steps"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("A search in Bradshaw informed me");
                // display.setCursor(5, 17);
      // display.println("that a train left St Pancras at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, which would land me at any");
                // display.setCursor(163, 17);
      // display.println("7.10");
                // display.setCursor(46, 192);
      // display.println("- The Thirty-Nine Steps");
          return;
        case 1:
          Serial.println(F("07:10 - The time was 7:10 in the morning. The manoeuvre would start at 7:12. She looked apprehensively at the giant clock at the railway station. - Mini Nair, The Fourth Passenger "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The time was TIMESTRING in");
                // display.setCursor(5, 17);
      // display.println("the morning. The manoeuvre would");
                // display.setCursor(5, 29);
      // display.println("start at 7:12. She looked");
                // display.setCursor(5, 41);
      // display.println("apprehensively at the giant clock at the");
                // display.setCursor(78, 5);
      // display.println("7:10");
                // display.setCursor(53, 192);
      // display.println("- The Fourth Passenger");
          return;
      } // end switch (option)

    // Codegen for 07:11 for 0 quotations:
    case 431:
      Serial.println(F("No quotes for 07:11"));
      return;

    // Codegen for 07:12 for 1 quotations:
    case 432:
      Serial.println(F("Only one option for 07:12:"));
    Serial.println(F("07:12 - He taught me that if I had to meet someone for an appointment, I must refuse to follow the 'stupid human habit' of arbitrarily choosing a time based on fifteen-minute intervals. 'Never meet people at 7:45 or 6:30, Jasper, but pick times like 7:12 and 8:03!' - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He taught me that if I had to meet");
          // display.setCursor(5, 17);
      // display.println("someone for an appointment, I must");
          // display.setCursor(5, 29);
      // display.println("refuse to follow the 'stupid human");
          // display.setCursor(5, 41);
      // display.println("habit' of arbitrarily choosing a time");
          // display.setCursor(5, 53);
      // display.println("based on fifteen-minute intervals.");
          // display.setCursor(5, 65);
      // display.println("'Never meet people at 7:45 or 6:30,");
          // display.setCursor(5, 77);
      // display.println("Jasper, but pick times like");
          // display.setCursor(129, 77);
      // display.println("7:12");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 07:13 for 1 quotations:
    case 433:
      Serial.println(F("Only one option for 07:13:"));
    Serial.println(F("07:13 - It was all the more surprising and indeed alarming a little later, said Austerlitz, when I looked out of the corridor window of my carriage just before the train left at seven-thirteen, to find it dawning upon me with perfect certainty - WG Sebald, Austerlitz"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was all the more surprising");
          // display.setCursor(5, 17);
      // display.println("and indeed alarming a little later,");
          // display.setCursor(5, 29);
      // display.println("said Austerlitz, when I looked out of");
          // display.setCursor(5, 41);
      // display.println("the corridor window of my carriage");
          // display.setCursor(5, 53);
      // display.println("just before the train left at");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, to");
          // display.setCursor(5, 77);
      // display.println("find it dawning upon me with perfect");
          // display.setCursor(5, 65);
      // display.println("seven-thirteen");
          // display.setCursor(46, 192);
      // display.println("- WG Sebald, Austerlitz");
      return;

    // Codegen for 07:14 for 1 quotations:
    case 434:
      Serial.println(F("Only one option for 07:14:"));
    Serial.println(F("07:14 - At 7.14 Harry knew he was alive. He knew that because the pain could be felt in every nerve fibre. - Jo Nesbo, The Redeemer"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING Harry knew he");
          // display.setCursor(5, 17);
      // display.println("was alive. He knew that because the");
          // display.setCursor(5, 29);
      // display.println("pain could be felt in every nerve");
          // display.setCursor(20, 5);
      // display.println("7.14");
          // display.setCursor(39, 192);
      // display.println("- Jo Nesbo, The Redeemer");
      return;

    // Codegen for 07:15 for 3 quotations:
    case 435:
      option = random(0, 3);
      Serial.print(F("3 options for 07:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:15 - At 7:15 A.M., January 25th, we started flying northwestward under McTighe's pilotage with ten men, seven dogs, a sledge, a fuel and food supply, and other items including the plane's wireless outfit. - H.P. Lovecraft, At the Mountains of Madness "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING,");
                // display.setCursor(5, 17);
      // display.println("January 25th, we started flying");
                // display.setCursor(5, 29);
      // display.println("northwestward under McTighe's pilotage with");
                // display.setCursor(5, 41);
      // display.println("ten men, seven dogs, a sledge, a fuel");
                // display.setCursor(5, 53);
      // display.println("and food supply, and other items");
                // display.setCursor(20, 5);
      // display.println("7:15 A.M.");
                // display.setCursor(4, 192);
      // display.println("- At the Mountains of Madness");
          return;
        case 1:
          Serial.println(F("07:15 - Mary Kent had got out of bed and put on her dressing gown, having just checked her husband's watch: it was 7.15. A confused conversation ensued, in which each woman seemed to assume Saville was with the other. - Kate Summerscale, The Suspicions of Mr Whicher "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mary Kent had got out of bed and");
                // display.setCursor(5, 17);
      // display.println("put on her dressing gown, having");
                // display.setCursor(5, 29);
      // display.println("just checked her husband's watch: it");
                // display.setCursor(5, 41);
      // display.println("was TIMESTRING. A confused");
                // display.setCursor(5, 53);
      // display.println("conversation ensued, in which each woman");
                // display.setCursor(5, 65);
      // display.println("seemed to assume Saville was with the");
                // display.setCursor(9, 41);
      // display.println("7.15");
                // display.setCursor(81, 192);
      // display.println("- Kate Summerscale");
          return;
        case 2:
          Serial.println(F("07:15 - He was a late riser, as a rule, and as the clock on the mantelpiece showed me that it was only a quarter-past seven, I blinked up at him in some surprise, and perhaps just a little resentment, for I was myself regular in my habits. - Arthur Conan Doyle, The Adventure of the Speckled Band "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He was a late riser, as a rule, and");
                // display.setCursor(5, 17);
      // display.println("as the clock on the mantelpiece");
                // display.setCursor(5, 29);
      // display.println("showed me that it was only a");
                // display.setCursor(5, 41);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING, I blinked up at him in some");
                // display.setCursor(5, 65);
      // display.println("surprise, and perhaps just a little");
                // display.setCursor(5, 77);
      // display.println("resentment, for I was myself regular in my");
                // display.setCursor(5, 41);
      // display.println("quarter-past seven");
                // display.setCursor(67, 192);
      // display.println("- Arthur Conan Doyle");
          return;
      } // end switch (option)

    // Codegen for 07:16 for 0 quotations:
    case 436:
      Serial.println(F("No quotes for 07:16"));
      return;

    // Codegen for 07:17 for 1 quotations:
    case 437:
      Serial.println(F("Only one option for 07:17:"));
    Serial.println(F("07:17 - As of 7.17am local time on 30 June 1908, Padzhitnoff had been working for nearly a year as a contract employee of the Okhrana, receiving five hundred rubles a month, a sum which hovered at the exorbitant end of spy-budget outlays for those years. - Thomas Pynchon, Against the Day"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("As of TIMESTRING local");
          // display.setCursor(5, 17);
      // display.println("time on 30 June 1908, Padzhitnoff had");
          // display.setCursor(5, 29);
      // display.println("been working for nearly a year as a");
          // display.setCursor(5, 41);
      // display.println("contract employee of the Okhrana,");
          // display.setCursor(5, 53);
      // display.println("receiving five hundred rubles a month, a");
          // display.setCursor(5, 65);
      // display.println("sum which hovered at the exorbitant");
          // display.setCursor(5, 77);
      // display.println("end of spy-budget outlays for those");
          // display.setCursor(35, 5);
      // display.println("7.17am");
          // display.setCursor(88, 192);
      // display.println("- Against the Day");
      return;

    // Codegen for 07:18 for 0 quotations:
    case 438:
      Serial.println(F("No quotes for 07:18"));
      return;

    // Codegen for 07:19 for 1 quotations:
    case 439:
      Serial.println(F("Only one option for 07:19:"));
    Serial.println(F("07:19 - I opened the sunroof and turned up the CD player volume to combat fatigue, and at 7.19am on Saturday, with the caffeine still running all around my brain, Jackson Browne and I pulled into Moree. - Graeme Simsion, The Rosie Project"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I opened the sunroof and turned");
          // display.setCursor(5, 17);
      // display.println("up the CD player volume to combat");
          // display.setCursor(5, 29);
      // display.println("fatigue, and at TIMESTRING on");
          // display.setCursor(5, 41);
      // display.println("Saturday, with the caffeine still");
          // display.setCursor(5, 53);
      // display.println("running all around my brain, Jackson");
          // display.setCursor(51, 29);
      // display.println("7.19am");
          // display.setCursor(74, 192);
      // display.println("- The Rosie Project");
      return;

    // Codegen for 07:20 for 2 quotations:
    case 440:
      option = random(0, 2);
      Serial.print(F("2 options for 07:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:20 - And this was my timetable when I lived at home with Father and I thought that Mother was dead from a heart attack (this was the timetable for a Monday and also it is an approximation). 7.20 a.m. Wake up - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("And this was my timetable when I");
                // display.setCursor(5, 17);
      // display.println("lived at home with Father and I");
                // display.setCursor(5, 29);
      // display.println("thought that Mother was dead from a");
                // display.setCursor(5, 41);
      // display.println("heart attack (this was the timetable");
                // display.setCursor(5, 53);
      // display.println("for a Monday and also it is an");
                // display.setCursor(21, 65);
      // display.println("7.20 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 1:
          Serial.println(F("07:20 - He who had been a boy very credulous of life was no longer greatly interested in the possible and improbable adventures of each new day. He escaped from reality till the alarm-clock rang, at seven-twenty. - Sinclair Lewis, Babbitt"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He who had been a boy very");
                // display.setCursor(5, 17);
      // display.println("credulous of life was no longer greatly");
                // display.setCursor(5, 29);
      // display.println("interested in the possible and improbable");
                // display.setCursor(5, 41);
      // display.println("adventures of each new day. He escaped from");
                // display.setCursor(5, 53);
      // display.println("reality till the alarm-clock rang, at");
                // display.setCursor(5, 65);
      // display.println("seven-twenty");
                // display.setCursor(32, 192);
      // display.println("- Sinclair Lewis, Babbitt");
          return;
      } // end switch (option)

    // Codegen for 07:21 for 0 quotations:
    case 441:
      Serial.println(F("No quotes for 07:21"));
      return;

    // Codegen for 07:22 for 0 quotations:
    case 442:
      Serial.println(F("No quotes for 07:22"));
      return;

    // Codegen for 07:23 for 0 quotations:
    case 443:
      Serial.println(F("No quotes for 07:23"));
      return;

    // Codegen for 07:24 for 0 quotations:
    case 444:
      Serial.println(F("No quotes for 07:24"));
      return;

    // Codegen for 07:25 for 1 quotations:
    case 445:
      Serial.println(F("Only one option for 07:25:"));
    Serial.println(F("07:25 - 7.25 a.m. clean teeth and wash face - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING clean");
          // display.setCursor(5, 5);
      // display.println("7.25 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 07:26 for 0 quotations:
    case 446:
      Serial.println(F("No quotes for 07:26"));
      return;

    // Codegen for 07:27 for 1 quotations:
    case 447:
      Serial.println(F("Only one option for 07:27:"));
    Serial.println(F("07:27 - His appointment with the doctor was for 8.45. It was 7.27. - Henning Mankell, The Return of the Dancing Master"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("His appointment with the doctor");
          // display.setCursor(5, 17);
      // display.println("was for 8.45. It was");
          // display.setCursor(104, 17);
      // display.println("7.27");
          // display.setCursor(88, 192);
      // display.println("- Henning Mankell");
      return;

    // Codegen for 07:28 for 0 quotations:
    case 448:
      Serial.println(F("No quotes for 07:28"));
      return;

    // Codegen for 07:29 for 1 quotations:
    case 449:
      Serial.println(F("Only one option for 07:29:"));
    Serial.println(F("07:29 - At 7.29 in the morning of 1 July, the cinematographer finds himself filming silence itself. - Elizabeth Speller, At Break of Day"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING in the");
          // display.setCursor(5, 17);
      // display.println("morning of 1 July, the cinematographer");
          // display.setCursor(5, 29);
      // display.println("finds himself filming silence");
          // display.setCursor(20, 5);
      // display.println("7.29");
          // display.setCursor(88, 192);
      // display.println("- At Break of Day");
      return;

    // Codegen for 07:30 for 2 quotations:
    case 450:
      option = random(0, 2);
      Serial.print(F("2 options for 07:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:30 - At half-past seven the next morning he rang the bell of 21 Blenheim Avenue. - William Trevor, After Rain"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("the next morning he rang the bell of");
                // display.setCursor(20, 5);
      // display.println("half-past seven");
                // display.setCursor(11, 192);
      // display.println("- William Trevor, After Rain");
          return;
        case 1:
          Serial.println(F("07:30 - Precisely at half past seven the station-master came into the traffic office. He weighed almost sixteen stone, but women always said that he was incredibly light on his feet when he danced. - Bohumil Hrabal, Closely Observed Trains "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Precisely at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING the station-master came into");
                // display.setCursor(5, 29);
      // display.println("the traffic office. He weighed");
                // display.setCursor(5, 41);
      // display.println("almost sixteen stone, but women always");
                // display.setCursor(5, 53);
      // display.println("said that he was incredibly light on");
                // display.setCursor(84, 5);
      // display.println("half past seven");
                // display.setCursor(32, 192);
      // display.println("- Closely Observed Trains");
          return;
      } // end switch (option)

    // Codegen for 07:31 for 0 quotations:
    case 451:
      Serial.println(F("No quotes for 07:31"));
      return;

    // Codegen for 07:32 for 1 quotations:
    case 452:
      Serial.println(F("Only one option for 07:32:"));
    Serial.println(F("07:32 - At 7:32, he suffered a fatal stroke. - Stephen King, IT"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, he suffered");
          // display.setCursor(20, 5);
      // display.println("7:32");
          // display.setCursor(81, 192);
      // display.println("- Stephen King, IT");
      return;

    // Codegen for 07:33 for 0 quotations:
    case 453:
      Serial.println(F("No quotes for 07:33"));
      return;

    // Codegen for 07:34 for 1 quotations:
    case 454:
      Serial.println(F("Only one option for 07:34:"));
    Serial.println(F("07:34 - 7:34. Monday morning, Blackeberg. The burglar alarm at the ICA grocery store on Arvid Morne's way is set off. - John Ajvide Lindqvist, Let The Right One In"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING Monday");
          // display.setCursor(5, 17);
      // display.println("morning, Blackeberg. The burglar alarm");
          // display.setCursor(5, 29);
      // display.println("at the ICA grocery store on Arvid");
          // display.setCursor(5, 5);
      // display.println("7:34.");
          // display.setCursor(53, 192);
      // display.println("- Let The Right One In");
      return;

    // Codegen for 07:35 for 2 quotations:
    case 455:
      option = random(0, 2);
      Serial.print(F("2 options for 07:35. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:35 - At 7:35am Ishigami left his apartment as he did every weekday morning. - Higashino, Keigo, The Devotion of Duspect X"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING Ishigami");
                // display.setCursor(5, 17);
      // display.println("left his apartment as he did every");
                // display.setCursor(20, 5);
      // display.println("7:35am");
                // display.setCursor(18, 192);
      // display.println("- The Devotion of Duspect X");
          return;
        case 1:
          Serial.println(F("07:35 - I looked at my watch. Seven thirty-five. - Kathy Reichs, Bare Bones "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I looked at my watch.");
                // display.setCursor(5, 17);
      // display.println("Seven thirty-five");
                // display.setCursor(18, 192);
      // display.println("- Kathy Reichs, Bare Bones ");
          return;
      } // end switch (option)

    // Codegen for 07:36 for 1 quotations:
    case 456:
      Serial.println(F("Only one option for 07:36:"));
    Serial.println(F("07:36 - 7:36, sunrise. The hospital blinds were much better, darker than her own. - John Ajvide Lindqvist, Let The Right One In"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING, sunrise. The");
          // display.setCursor(5, 17);
      // display.println("hospital blinds were much better,");
          // display.setCursor(5, 5);
      // display.println("7:36");
          // display.setCursor(53, 192);
      // display.println("- Let The Right One In");
      return;

    // Codegen for 07:37 for 0 quotations:
    case 457:
      Serial.println(F("No quotes for 07:37"));
      return;

    // Codegen for 07:38 for 0 quotations:
    case 458:
      Serial.println(F("No quotes for 07:38"));
      return;

    // Codegen for 07:39 for 1 quotations:
    case 459:
      Serial.println(F("Only one option for 07:39:"));
    Serial.println(F("07:39 - Now, at the station, do you recall speaking to Mr Joseph Markew?' 'Yes, indeed. I was standing on the platform waiting for my usual train - the 7.39 - when he accosted me.' - Julian Barnes, Arthur & George"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Now, at the station, do you");
          // display.setCursor(5, 17);
      // display.println("recall speaking to Mr Joseph Markew?'");
          // display.setCursor(5, 29);
      // display.println("'Yes, indeed. I was standing on the");
          // display.setCursor(5, 41);
      // display.println("platform waiting for my usual train - the");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING - when he");
          // display.setCursor(5, 53);
      // display.println("7.39");
          // display.setCursor(88, 192);
      // display.println("- Arthur & George");
      return;

    // Codegen for 07:40 for 1 quotations:
    case 460:
      Serial.println(F("Only one option for 07:40:"));
    Serial.println(F("07:40 - 7.40 a.m. Have breakfast. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING Have");
          // display.setCursor(5, 5);
      // display.println("7.40 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 07:41 for 0 quotations:
    case 461:
      Serial.println(F("No quotes for 07:41"));
      return;

    // Codegen for 07:42 for 1 quotations:
    case 462:
      Serial.println(F("Only one option for 07:42:"));
    Serial.println(F("07:42 - Seven forty-two am., Mr Gasparian: I curse you. I curse your arms so they will wither and die and fall off your body... - Ilona Andrews, Magic Bleeds"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("am., Mr Gasparian: I curse you. I");
          // display.setCursor(5, 29);
      // display.println("curse your arms so they will wither");
          // display.setCursor(5, 5);
      // display.println("Seven forty-two");
          // display.setCursor(4, 192);
      // display.println("- Ilona Andrews, Magic Bleeds");
      return;

    // Codegen for 07:43 for 0 quotations:
    case 463:
      Serial.println(F("No quotes for 07:43"));
      return;

    // Codegen for 07:44 for 2 quotations:
    case 464:
      option = random(0, 2);
      Serial.print(F("2 options for 07:44. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:44 - She voices her thoughts: \"It's not exactly how you'd choose to go, is it? You'd rather die flying a kite with your grandchildren, or at a great party or something. Not on the seven forty-four.\" - Sarah Rayner, One moment, one morning "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She voices her thoughts: \"It's");
                // display.setCursor(5, 17);
      // display.println("not exactly how you'd choose to go,");
                // display.setCursor(5, 29);
      // display.println("is it? You'd rather die flying a");
                // display.setCursor(5, 41);
      // display.println("kite with your grandchildren, or at a");
                // display.setCursor(5, 53);
      // display.println("great party or something. Not on the");
                // display.setCursor(5, 65);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("seven forty-four");
                // display.setCursor(32, 192);
      // display.println("- One moment, one morning");
          return;
        case 1:
          Serial.println(F("07:44 - She voices her thoughts: \"It's not exactly how you'd choose to go, is it? You'd rather die flying a kite with your grandchildren, or at a great party or something. Not on the seven forty-four.\" - Sarah Rayner, One Moment, One Morning"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She voices her thoughts: \"It's");
                // display.setCursor(5, 17);
      // display.println("not exactly how you'd choose to go,");
                // display.setCursor(5, 29);
      // display.println("is it? You'd rather die flying a");
                // display.setCursor(5, 41);
      // display.println("kite with your grandchildren, or at a");
                // display.setCursor(5, 53);
      // display.println("great party or something. Not on the");
                // display.setCursor(5, 65);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("seven forty-four");
                // display.setCursor(32, 192);
      // display.println("- One Moment, One Morning");
          return;
      } // end switch (option)

    // Codegen for 07:45 for 2 quotations:
    case 465:
      option = random(0, 2);
      Serial.print(F("2 options for 07:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:45 - Mr Green left for work at a quarter to eight, as he did every morning. He walked down his front steps carrying his empty-looking leatherette briefcase with the noisy silver clasps, opened his car door, and ducked his head to climb into the driver's seat. - Suzanne Berne, A Crime in The Neighborhood"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mr Green left for work at a");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 29);
      // display.println("as he did every morning. He walked");
                // display.setCursor(5, 41);
      // display.println("down his front steps carrying his");
                // display.setCursor(5, 53);
      // display.println("empty-looking leatherette briefcase with");
                // display.setCursor(5, 65);
      // display.println("the noisy silver clasps, opened his");
                // display.setCursor(5, 77);
      // display.println("car door, and ducked his head to");
                // display.setCursor(5, 17);
      // display.println("quarter to eight");
                // display.setCursor(4, 192);
      // display.println("- A Crime in The Neighborhood");
          return;
        case 1:
          Serial.println(F("07:45 - Mr Green left for work at a quarter to eight, as he did every morning. He walked down his front steps carrying his empty-looking leatherette briefcase with the noisy silver clasps, opened his car door, and ducked his head to climb into the driver's seat. - Suzanne Berne, A crime in the neighborhood "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mr Green left for work at a");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 29);
      // display.println("as he did every morning. He walked");
                // display.setCursor(5, 41);
      // display.println("down his front steps carrying his");
                // display.setCursor(5, 53);
      // display.println("empty-looking leatherette briefcase with");
                // display.setCursor(5, 65);
      // display.println("the noisy silver clasps, opened his");
                // display.setCursor(5, 77);
      // display.println("car door, and ducked his head to");
                // display.setCursor(5, 17);
      // display.println("quarter to eight");
                // display.setCursor(4, 192);
      // display.println("- A crime in the neighborhood");
          return;
      } // end switch (option)

    // Codegen for 07:46 for 1 quotations:
    case 466:
      Serial.println(F("Only one option for 07:46:"));
    Serial.println(F("07:46 - The clock on his bedside table said 7.46 a.m. He cursed, jumped out of bed and dressed. He stuffed his toothbrush and toothpaste in his jacket pocket, and parked outside the station just before 8 a.m. In reception, Ebba beckoned to him. - Henning Mankell, The Dogs of Riga"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The clock on his bedside table");
          // display.setCursor(5, 17);
      // display.println("said TIMESTRING He");
          // display.setCursor(5, 29);
      // display.println("cursed, jumped out of bed and dressed.");
          // display.setCursor(5, 41);
      // display.println("He stuffed his toothbrush and");
          // display.setCursor(5, 53);
      // display.println("toothpaste in his jacket pocket, and");
          // display.setCursor(5, 65);
      // display.println("parked outside the station just before");
          // display.setCursor(5, 77);
      // display.println("8 a.m. In reception, Ebba");
          // display.setCursor(10, 17);
      // display.println("7.46 a.m.");
          // display.setCursor(81, 192);
      // display.println("- The Dogs of Riga");
      return;

    // Codegen for 07:47 for 0 quotations:
    case 467:
      Serial.println(F("No quotes for 07:47"));
      return;

    // Codegen for 07:48 for 0 quotations:
    case 468:
      Serial.println(F("No quotes for 07:48"));
      return;

    // Codegen for 07:49 for 0 quotations:
    case 469:
      Serial.println(F("No quotes for 07:49"));
      return;

    // Codegen for 07:50 for 1 quotations:
    case 470:
      Serial.println(F("Only one option for 07:50:"));
    Serial.println(F("07:50 - At about ten minutes to eight, Jim had squared the part of the work he had been doing - the window - so he decided not to start on the door or the skirting until after breakfast. - Robert Tressell, The Ragged Trousered Philanthropists"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At about");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, Jim had squared the part of the");
          // display.setCursor(5, 29);
      // display.println("work he had been doing - the window -");
          // display.setCursor(5, 41);
      // display.println("so he decided not to start on the");
          // display.setCursor(5, 53);
      // display.println("door or the skirting until after");
          // display.setCursor(56, 5);
      // display.println("ten minutes to eight");
          // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
      return;

    // Codegen for 07:51 for 1 quotations:
    case 471:
      Serial.println(F("Only one option for 07:51:"));
    Serial.println(F("07:51 - Vimes fished out the Gooseberry as a red-hot cabbage smacked into the road behind him. \"Good morning!\" he said brightly to the surprised imp. \"What is the time, please?\" \"Er...nine minutes to eight, Insert Name Here,\" said the imp. - Terry Pratchett, Thud! "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Vimes fished out the Gooseberry");
          // display.setCursor(5, 17);
      // display.println("as a red-hot cabbage smacked into");
          // display.setCursor(5, 29);
      // display.println("the road behind him. \"Good");
          // display.setCursor(5, 41);
      // display.println("morning!\" he said brightly to the");
          // display.setCursor(5, 53);
      // display.println("surprised imp. \"What is the time,");
          // display.setCursor(5, 65);
      // display.println("please?\"");
          // display.setCursor(5, 77);
      // display.println("\"Er...TIMESTRING, Insert Name Here,\" said the");
          // display.setCursor(15, 65);
      // display.println("nine minutes to eight");
          // display.setCursor(32, 192);
      // display.println("- Terry Pratchett, Thud! ");
      return;

    // Codegen for 07:52 for 0 quotations:
    case 472:
      Serial.println(F("No quotes for 07:52"));
      return;

    // Codegen for 07:53 for 1 quotations:
    case 473:
      Serial.println(F("Only one option for 07:53:"));
    Serial.println(F("07:53 - What time is it? \"Seven to eight. Won't be long now ...\" - Robert Goddard, Never go back"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("What time is it?");
          // display.setCursor(100, 5);
      // display.println("Seven to eight");
          // display.setCursor(102, 192);
      // display.println("- Never go back");
      return;

    // Codegen for 07:54 for 0 quotations:
    case 474:
      Serial.println(F("No quotes for 07:54"));
      return;

    // Codegen for 07:55 for 1 quotations:
    case 475:
      Serial.println(F("Only one option for 07:55:"));
    Serial.println(F("07:55 - at 7.55 this morning the circus ran away to join me. - Roger McGough, Tightrope, from Selected Poems 1967-1987"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("at TIMESTRING this morning");
          // display.setCursor(20, 5);
      // display.println("7.55");
          // display.setCursor(102, 192);
      // display.println("- Roger McGough");
      return;

    // Codegen for 07:56 for 2 quotations:
    case 476:
      option = random(0, 2);
      Serial.print(F("2 options for 07:56. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:56 - I sit by the window, crunching toast, sipping coffee, and leafing through the paper in a leisurely way. At last, after devouring three slices, two cups of coffee, and all the Saturday sections, I stretch my arms in a big yawn and glance at the clock. I don't believe it. It's only seven fifty-six. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I sit by the window, crunching");
                // display.setCursor(5, 17);
      // display.println("toast, sipping coffee, and leafing");
                // display.setCursor(5, 29);
      // display.println("through the paper in a leisurely way. At");
                // display.setCursor(5, 41);
      // display.println("last, after devouring three slices,");
                // display.setCursor(5, 53);
      // display.println("two cups of coffee, and all the");
                // display.setCursor(5, 65);
      // display.println("Saturday sections, I stretch my arms in a");
                // display.setCursor(5, 77);
      // display.println("big yawn and glance at the clock. I");
                // display.setCursor(5, 89);
      // display.println("don't believe it. It's only");
                // display.setCursor(5, 101);
      // display.println("seven fifty-six");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("07:56 - The Castle Gate - only the Castle Gate - and it was four minutes to eight. - Thomas Mann, Buddenbrooks"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Castle Gate - only the Castle");
                // display.setCursor(5, 17);
      // display.println("Gate - and it was");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("four minutes to eight");
                // display.setCursor(18, 192);
      // display.println("- Thomas Mann, Buddenbrooks");
          return;
      } // end switch (option)

    // Codegen for 07:57 for 0 quotations:
    case 477:
      Serial.println(F("No quotes for 07:57"));
      return;

    // Codegen for 07:58 for 0 quotations:
    case 478:
      Serial.println(F("No quotes for 07:58"));
      return;

    // Codegen for 07:59 for 1 quotations:
    case 479:
      Serial.println(F("Only one option for 07:59:"));
    Serial.println(F("07:59 - I'd spent fifty two days in 1958, but here it was 7.59 in the morning. - Stephen King, 11/22/63"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I'd spent fifty two days in 1958,");
          // display.setCursor(5, 17);
      // display.println("but here it was TIMESTRING in");
          // display.setCursor(75, 17);
      // display.println("7.59");
          // display.setCursor(39, 192);
      // display.println("- Stephen King, 11/22/63");
      return;

    // Codegen for 08:00 for 18 quotations:
    case 480:
      option = random(0, 18);
      Serial.print(F("18 options for 08:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:00 - I'm not crying, Maria said when Carter called from the desert at 8 a.m. \"I'm perfectly alright\". \"You don't sound perfectly alright\" - Joan Didion, Play it as is Lays "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I'm not crying, Maria said when");
                // display.setCursor(5, 17);
      // display.println("Carter called from the desert at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING \"I'm");
                // display.setCursor(5, 41);
      // display.println("perfectly alright\". \"You don't sound");
                // display.setCursor(5, 29);
      // display.println("8 a.m.");
                // display.setCursor(67, 192);
      // display.println("- Play it as is Lays");
          return;
        case 1:
          Serial.println(F("08:00 - 8.00 a.m. Put school clothes on - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Put school");
                // display.setCursor(5, 5);
      // display.println("8.00 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 2:
          Serial.println(F("08:00 - At 8 o'clock on Thursday morning Arthur didn't feel very good. - Douglas Adams, Hitch-Hikers Guide to the Galaxy "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING on");
                // display.setCursor(5, 17);
      // display.println("Thursday morning Arthur didn't feel");
                // display.setCursor(20, 5);
      // display.println("8 o'clock");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 3:
          Serial.println(F("08:00 - At eight o'clock on Thursday morning Arthur didn't feel very good. He woke up blearily, got up, wandered blearily round his room, opened a window, saw a bulldozer, found his slippers and stomped off to the bathroom to wash. - Douglas Adams, Hitch-hikers guide to the galaxy "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING on");
                // display.setCursor(5, 17);
      // display.println("Thursday morning Arthur didn't feel");
                // display.setCursor(5, 29);
      // display.println("very good. He woke up blearily, got");
                // display.setCursor(5, 41);
      // display.println("up, wandered blearily round his");
                // display.setCursor(5, 53);
      // display.println("room, opened a window, saw a");
                // display.setCursor(5, 65);
      // display.println("bulldozer, found his slippers and stomped");
                // display.setCursor(20, 5);
      // display.println("eight o'clock");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 4:
          Serial.println(F("08:00 - At eight o’clock, a shaft of daylight came to wake us. The thousand facets of the lava on the rock face picked it up as it passed, scattering like a shower of sparks. - Jules Verne, Journey to the Centre of the Earth "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING, a");
                // display.setCursor(5, 17);
      // display.println("shaft of daylight came to wake us. The");
                // display.setCursor(5, 29);
      // display.println("thousand facets of the lava on the rock");
                // display.setCursor(5, 41);
      // display.println("face picked it up as it passed,");
                // display.setCursor(5, 5);
      // display.println("At eight o’clock");
                // display.setCursor(116, 192);
      // display.println("- Jules Verne");
          return;
        case 5:
          Serial.println(F("08:00 - But for now it was still eight o'clock, and as I walked along the avenue under that brilliant blue sky, I was happy, my friends, as happy as any man who had ever lived. - Paul Auster, Brooklyn Follies"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("But for now it was still");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and");
                // display.setCursor(5, 29);
      // display.println("as I walked along the avenue under");
                // display.setCursor(5, 41);
      // display.println("that brilliant blue sky, I was happy,");
                // display.setCursor(5, 53);
      // display.println("my friends, as happy as any man who");
                // display.setCursor(5, 17);
      // display.println("eight o'clock");
                // display.setCursor(81, 192);
      // display.println("- Brooklyn Follies");
          return;
        case 6:
          Serial.println(F("08:00 - By eight o'clock Stillman would come out, always in his long brown overcoat, carrying a large, old-fashioned carpet bag. For two weeks this routine did not vary. - Paul Auster, City of Glass "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("Stillman would come out, always in his");
                // display.setCursor(5, 29);
      // display.println("long brown overcoat, carrying a");
                // display.setCursor(5, 41);
      // display.println("large, old-fashioned carpet bag. For");
                // display.setCursor(20, 5);
      // display.println("eight o'clock");
                // display.setCursor(4, 192);
      // display.println("- Paul Auster, City of Glass ");
          return;
        case 7:
          Serial.println(F("08:00 - He was woken by reception at eight the following morning to be told that everyone was waiting for him downstairs, the wrapper of a Mars bar was still folded in his fist. - Ian McEwan, Solar"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He was woken by reception");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING the");
                // display.setCursor(5, 29);
      // display.println("following morning to be told that");
                // display.setCursor(5, 41);
      // display.println("everyone was waiting for him");
                // display.setCursor(5, 53);
      // display.println("downstairs, the wrapper of a Mars bar was");
                // display.setCursor(5, 17);
      // display.println("at eight");
                // display.setCursor(74, 192);
      // display.println("- Ian McEwan, Solar");
          return;
        case 8:
          Serial.println(F("08:00 - I hear noise at the ward door, off up the hall out of my sight. That ward door starts opening at eight and opens and closes a thousand times a day, kashash, click. - Ken Kesey, One Flew Over the Cuckoo's Nest "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I hear noise at the ward door, off");
                // display.setCursor(5, 17);
      // display.println("up the hall out of my sight. That");
                // display.setCursor(5, 29);
      // display.println("ward door starts opening");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING and opens and closes a thousand");
                // display.setCursor(132, 29);
      // display.println("at eight");
                // display.setCursor(130, 192);
      // display.println("- Ken Kesey");
          return;
        case 9:
          Serial.println(F("08:00 - It was dated from Rosings, at eight o'clock in the morning, and was as follows: \"Be not alarmed, madam, on receiving this letter, by the apprehension of its containing any repetition\" - Jane Austen, Pride and Prejudice "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was dated from Rosings, at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING in the");
                // display.setCursor(5, 29);
      // display.println("morning, and was as follows: \"Be not");
                // display.setCursor(5, 41);
      // display.println("alarmed, madam, on receiving this");
                // display.setCursor(5, 53);
      // display.println("letter, by the apprehension of its");
                // display.setCursor(5, 17);
      // display.println("eight o'clock");
                // display.setCursor(60, 192);
      // display.println("- Pride and Prejudice");
          return;
        case 10:
          Serial.println(F("08:00 - Mr. Pumblechook and I breakfasted at eight o'clock in the parlour behind the shop, while the shopman took his mug of tea and hunch of bread-and-butter on a sack of peas in the front premises. - Charles Dickens, Great Expectations "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mr. Pumblechook and I");
                // display.setCursor(5, 17);
      // display.println("breakfasted at TIMESTRING");
                // display.setCursor(5, 29);
      // display.println("in the parlour behind the shop,");
                // display.setCursor(5, 41);
      // display.println("while the shopman took his mug of tea");
                // display.setCursor(5, 53);
      // display.println("and hunch of bread-and-butter on a");
                // display.setCursor(32, 17);
      // display.println("eight o'clock");
                // display.setCursor(67, 192);
      // display.println("- Great Expectations");
          return;
        case 11:
          Serial.println(F("08:00 - Mrs. Rochester! She did not exist: she would not be born till to-morrow, some time after eight o'clock a.m.; and I would wait to be assured she had come into the world alive, before I assigned to her all that property. - Charlotte Brontë, Jane Eyre "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mrs. Rochester! She did not");
                // display.setCursor(5, 17);
      // display.println("exist: she would not be born till");
                // display.setCursor(5, 29);
      // display.println("to-morrow, some time after");
                // display.setCursor(5, 41);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING; and I would wait to be assured");
                // display.setCursor(5, 65);
      // display.println("she had come into the world alive,");
                // display.setCursor(5, 77);
      // display.println("before I assigned to her all that");
                // display.setCursor(5, 41);
      // display.println("eight o'clock a.m.");
                // display.setCursor(130, 192);
      // display.println("- Jane Eyre");
          return;
        case 12:
          Serial.println(F("08:00 - So here I'll watch the night and wait To see the morning shine, When he will hear the stroke of eight And not the stroke of nine; - A E Housman, A shropshire Lad "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("So here I'll watch the night and");
                // display.setCursor(5, 17);
      // display.println("wait To see the morning shine, When he");
                // display.setCursor(5, 29);
      // display.println("will hear the stroke of");
                // display.setCursor(119, 29);
      // display.println("eight ");
                // display.setCursor(81, 192);
      // display.println("- A shropshire Lad");
          return;
        case 13:
          Serial.println(F("08:00 - Someone must have been telling lies about Joseph K. for without having done anything wrong he was arrested one fine morning. His landlady's cook, who always brought him breakfast at eight o'clock, failed to appear on this occasion. - Franz Kafka, The Trial "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Someone must have been telling");
                // display.setCursor(5, 17);
      // display.println("lies about Joseph K. for without");
                // display.setCursor(5, 29);
      // display.println("having done anything wrong he was");
                // display.setCursor(5, 41);
      // display.println("arrested one fine morning. His");
                // display.setCursor(5, 53);
      // display.println("landlady's cook, who always brought him");
                // display.setCursor(5, 65);
      // display.println("breakfast at TIMESTRING,");
                // display.setCursor(30, 65);
      // display.println("eight o'clock");
                // display.setCursor(32, 192);
      // display.println("- Franz Kafka, The Trial ");
          return;
        case 14:
          Serial.println(F("08:00 - The next morning I woke up at oh eight oh oh hours, my brothers, and as I still felt shagged and fagged and fashed and bashed and as my glazzies were stuck together real horrorshow with sleepglue, I thought I would not go to school . - Anthony Burgess, A Clockwork Orange "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The next morning I woke up at");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, my brothers, and as I still felt");
                // display.setCursor(5, 41);
      // display.println("shagged and fagged and fashed and");
                // display.setCursor(5, 53);
      // display.println("bashed and as my glazzies were stuck");
                // display.setCursor(5, 65);
      // display.println("together real horrorshow with");
                // display.setCursor(5, 77);
      // display.println("sleepglue, I thought I would not go to");
                // display.setCursor(5, 17);
      // display.println("oh eight oh oh hours");
                // display.setCursor(67, 192);
      // display.println("- A Clockwork Orange");
          return;
        case 15:
          Serial.println(F("08:00 - Three days after the quarrel, Prince Stepan Arkadyevitch Oblonsky--Stiva, as he was called in the fashionable world-- woke up at his usual hour, that is, at eight o'clock in the morning, not in his wife's bedroom, but on the leather-covered sofa in his study. - Leo Tolstoy, Anna Karenina "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Three days after the quarrel,");
                // display.setCursor(5, 17);
      // display.println("Prince Stepan Arkadyevitch");
                // display.setCursor(5, 29);
      // display.println("Oblonsky--Stiva, as he was called in the");
                // display.setCursor(5, 41);
      // display.println("fashionable world-- woke up at his usual");
                // display.setCursor(5, 53);
      // display.println("hour, that is, at");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING in the morning, not in his");
                // display.setCursor(5, 77);
      // display.println("wife's bedroom, but on the");
                // display.setCursor(77, 53);
      // display.println("eight o'clock");
                // display.setCursor(4, 192);
      // display.println("- Leo Tolstoy, Anna Karenina ");
          return;
        case 16:
          Serial.println(F("08:00 - The hands of the Dutch clock in the hall pointed to thirteen minutes past nine; those of the ormolu clock in the sitting-room to eleven minutes past ten; those of the carriage clock on the bookshelf to fourteen minutes to six. In other words, it was exactly eight - P.G. Wodehouse, Three Men and a Maid "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The hands of the Dutch clock in");
                // display.setCursor(5, 17);
      // display.println("the hall pointed to thirteen");
                // display.setCursor(5, 29);
      // display.println("minutes past nine; those of the ormolu");
                // display.setCursor(5, 41);
      // display.println("clock in the sitting-room to eleven");
                // display.setCursor(5, 53);
      // display.println("minutes past ten; those of the carriage");
                // display.setCursor(5, 65);
      // display.println("clock on the bookshelf to fourteen");
                // display.setCursor(5, 77);
      // display.println("minutes to six. In other words, it was");
                // display.setCursor(5, 89);
      // display.println("exactly eight");
                // display.setCursor(53, 192);
      // display.println("- Three Men and a Maid");
          return;
        case 17:
          Serial.println(F("08:00 - Too late. He must go on wanting what he had wanted yesterday. He dressed and rode down to the ground floor at eight for breakfast. - Thomas Mann, Death in Venice"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Too late. He must go on wanting");
                // display.setCursor(5, 17);
      // display.println("what he had wanted yesterday. He");
                // display.setCursor(5, 29);
      // display.println("dressed and rode down to the ground");
                // display.setCursor(5, 41);
      // display.println("floor TIMESTRING for");
                // display.setCursor(11, 41);
      // display.println("at eight");
                // display.setCursor(88, 192);
      // display.println("- Death in Venice");
          return;
      } // end switch (option)

    // Codegen for 08:01 for 1 quotations:
    case 481:
      Serial.println(F("Only one option for 08:01:"));
    Serial.println(F("08:01 - Eight-one, tick-tock, eight-one o'clock, off to school, off to work, run, run, eight-one! - Ray Bradbury, There Will Come Soft Rains"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Eight-one, tick-tock,");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING o'clock,");
          // display.setCursor(5, 29);
      // display.println("off to school, off to work, run, run,");
          // display.setCursor(5, 41);
      // display.println("eight-one");
          // display.setCursor(11, 192);
      // display.println("- There Will Come Soft Rains");
      return;

    // Codegen for 08:02 for 1 quotations:
    case 482:
      Serial.println(F("Only one option for 08:02:"));
    Serial.println(F("08:02 - ... bingeley ... Eight oh two eh em, Death of Corporal Littlebottombottom ... Eight oh three eh em ... Death of Sergeant Detritus ... Eight oh threethreethree eh em and seven seconds seconds - Terry Pratchett, Jingo"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... bingeley ...");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING eh em, Death of Corporal");
          // display.setCursor(5, 29);
      // display.println("Littlebottombottom ... Eight oh three eh em ...");
          // display.setCursor(5, 41);
      // display.println("Death of Sergeant Detritus ... Eight");
          // display.setCursor(5, 53);
      // display.println("oh threethreethree eh em and seven");
          // display.setCursor(106, 5);
      // display.println("Eight oh two");
          // display.setCursor(39, 192);
      // display.println("- Terry Pratchett, Jingo");
      return;

    // Codegen for 08:03 for 2 quotations:
    case 483:
      option = random(0, 2);
      Serial.print(F("2 options for 08:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:03 - ... bingeley ... Eight oh two eh em, Death of Corporal Littlebottombottom ... Eight oh three eh em ... Death of Sergeant Detritus ... Eight oh threethreethree eh em and seven seconds seconds - Terry Pratchett, Jingo"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... bingeley ... Eight oh two eh");
                // display.setCursor(5, 17);
      // display.println("em, Death of Corporal");
                // display.setCursor(5, 29);
      // display.println("Littlebottombottom ...");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING eh em ... Death of Sergeant");
                // display.setCursor(5, 53);
      // display.println("Detritus ...");
                // display.setCursor(5, 65);
      // display.println("TIMESTRINGthreethree eh em and seven seconds");
                // display.setCursor(36, 53);
      // display.println("Eight oh three");
                // display.setCursor(39, 192);
      // display.println("- Terry Pratchett, Jingo");
          return;
        case 1:
          Serial.println(F("08:03 - He taught me that if I had to meet someone for an appointment, I must refuse to follow the 'stupid human habit' of arbitrarily choosing a time based on fifteen-minute intervals. 'Never meet people at 7:45 or 6:30, Jasper, but pick times like 7:12 and 8:03!' - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He taught me that if I had to meet");
                // display.setCursor(5, 17);
      // display.println("someone for an appointment, I must");
                // display.setCursor(5, 29);
      // display.println("refuse to follow the 'stupid human");
                // display.setCursor(5, 41);
      // display.println("habit' of arbitrarily choosing a time");
                // display.setCursor(5, 53);
      // display.println("based on fifteen-minute intervals.");
                // display.setCursor(5, 65);
      // display.println("'Never meet people at 7:45 or 6:30,");
                // display.setCursor(5, 77);
      // display.println("Jasper, but pick times like 7:12 and");
                // display.setCursor(5, 89);
      // display.println("8:03");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
      } // end switch (option)

    // Codegen for 08:04 for 1 quotations:
    case 484:
      Serial.println(F("Only one option for 08:04:"));
    Serial.println(F("08:04 - ... every clerk had his particular schedule of hours, which coincided with a single pair of tram runs coming from the city: A had to come in at 8, B at 8:04, C at 8:08 and so on, and the same for quitting times - Primo Levi, The Periodic Table"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... every clerk had his");
          // display.setCursor(5, 17);
      // display.println("particular schedule of hours, which");
          // display.setCursor(5, 29);
      // display.println("coincided with a single pair of tram runs");
          // display.setCursor(5, 41);
      // display.println("coming from the city: A had to come in at");
          // display.setCursor(5, 53);
      // display.println("8, B at TIMESTRING, C at 8:08");
          // display.setCursor(5, 65);
      // display.println("and so on, and the same for quitting");
          // display.setCursor(31, 53);
      // display.println("8:04");
          // display.setCursor(67, 192);
      // display.println("- The Periodic Table");
      return;

    // Codegen for 08:05 for 1 quotations:
    case 485:
      Serial.println(F("Only one option for 08:05:"));
    Serial.println(F("08:05 - 8.05 a.m. Pack school bag - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING Pack");
          // display.setCursor(5, 5);
      // display.println("8.05 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 08:06 for 0 quotations:
    case 486:
      Serial.println(F("No quotes for 08:06"));
      return;

    // Codegen for 08:07 for 0 quotations:
    case 487:
      Serial.println(F("No quotes for 08:07"));
      return;

    // Codegen for 08:08 for 1 quotations:
    case 488:
      Serial.println(F("Only one option for 08:08:"));
    Serial.println(F("08:08 - ... every clerk had his particular schedule of hours, which coincided with a single pair of tram runs coming from the city: A had to come in at 8, B at 8:04, C at 8:08 and so on, and the same for quitting times - Primo Levi, The Periodic Table"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... every clerk had his");
          // display.setCursor(5, 17);
      // display.println("particular schedule of hours, which");
          // display.setCursor(5, 29);
      // display.println("coincided with a single pair of tram runs");
          // display.setCursor(5, 41);
      // display.println("coming from the city: A had to come in at");
          // display.setCursor(5, 53);
      // display.println("8, B at 8:04, C at TIMESTRING");
          // display.setCursor(5, 65);
      // display.println("and so on, and the same for quitting");
          // display.setCursor(90, 53);
      // display.println("8:08");
          // display.setCursor(67, 192);
      // display.println("- The Periodic Table");
      return;

    // Codegen for 08:09 for 1 quotations:
    case 489:
      Serial.println(F("Only one option for 08:09:"));
    Serial.println(F("08:09 - He followed the squeals down a hallway. A wall clock read 8:09 - 10:09 Dallas time. - James Ellroy, American Tabloid"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He followed the squeals down a");
          // display.setCursor(5, 17);
      // display.println("hallway. A wall clock read");
          // display.setCursor(116, 17);
      // display.println("8:09");
          // display.setCursor(81, 192);
      // display.println("- American Tabloid");
      return;

    // Codegen for 08:10 for 3 quotations:
    case 490:
      option = random(0, 3);
      Serial.print(F("3 options for 08:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:10 - 8.10 a.m. Read book or watch video - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Read book");
                // display.setCursor(5, 5);
      // display.println("8.10 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 1:
          Serial.println(F("08:10 - Amory rushed into the house and the rest followed with a limp mass that they laid on the sofa in the shoddy little front parlor. Sloane, with his shoulder punctured, was on another lounge. He was half delirious, and kept calling something about a chemistry lecture at 8:10. - F. Scott Fitzgerald, This Side of Paradise"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Amory rushed into the house and");
                // display.setCursor(5, 17);
      // display.println("the rest followed with a limp mass");
                // display.setCursor(5, 29);
      // display.println("that they laid on the sofa in the");
                // display.setCursor(5, 41);
      // display.println("shoddy little front parlor. Sloane,");
                // display.setCursor(5, 53);
      // display.println("with his shoulder punctured, was on");
                // display.setCursor(5, 65);
      // display.println("another lounge. He was half delirious,");
                // display.setCursor(5, 77);
      // display.println("and kept calling something about a");
                // display.setCursor(80, 89);
      // display.println("8:10");
                // display.setCursor(46, 192);
      // display.println("- This Side of Paradise");
          return;
        case 2:
          Serial.println(F("08:10 - Cell count down to 400,000. Woke 8:10. To sleep 7:15. (Appear to have lost my watch without realising it, had to drive into town to buy another.) - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Cell count down to 400,000. Woke");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING. To sleep 7:15.");
                // display.setCursor(5, 29);
      // display.println("(Appear to have lost my watch without");
                // display.setCursor(5, 41);
      // display.println("realising it, had to drive into town to buy");
                // display.setCursor(5, 17);
      // display.println("8:10");
                // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
          return;
      } // end switch (option)

    // Codegen for 08:11 for 1 quotations:
    case 491:
      Serial.println(F("Only one option for 08:11:"));
    Serial.println(F("08:11 - They both had very fetching hats, with one flower apiece, but the prettiness of their faces made you think it was more. For some reason they both wore white rosettes pinned to their dresses. I looked again at the clock: eight-eleven. - Andrew Martin, The Blackpool Highflyer "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("They both had very fetching");
          // display.setCursor(5, 17);
      // display.println("hats, with one flower apiece, but the");
          // display.setCursor(5, 29);
      // display.println("prettiness of their faces made you think it");
          // display.setCursor(5, 41);
      // display.println("was more. For some reason they both");
          // display.setCursor(5, 53);
      // display.println("wore white rosettes pinned to their");
          // display.setCursor(5, 65);
      // display.println("dresses. I looked again at the clock:");
          // display.setCursor(5, 77);
      // display.println("eight-eleven");
          // display.setCursor(32, 192);
      // display.println("- The Blackpool Highflyer");
      return;

    // Codegen for 08:12 for 1 quotations:
    case 492:
      Serial.println(F("Only one option for 08:12:"));
    Serial.println(F("08:12 - At 8:12 a.m., just before the moment of pff, all the business of the cellars was being transacted - garbage transferred from small cans into large ones; early wide-awake grandmas, rocky with insomnia, dumped wash into the big tubs - Grace Paley, In Time Which Made A Monkey Of Us All"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, just");
          // display.setCursor(5, 17);
      // display.println("before the moment of pff, all the");
          // display.setCursor(5, 29);
      // display.println("business of the cellars was being");
          // display.setCursor(5, 41);
      // display.println("transacted - garbage transferred from");
          // display.setCursor(5, 53);
      // display.println("small cans into large ones; early");
          // display.setCursor(5, 65);
      // display.println("wide-awake grandmas, rocky with");
          // display.setCursor(20, 5);
      // display.println("8:12 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Grace Paley");
      return;

    // Codegen for 08:13 for 1 quotations:
    case 493:
      Serial.println(F("Only one option for 08:13:"));
    Serial.println(F("08:13 - At 8:13 a.m. the alarm clock in the laboratory gave the ringing word. Eddie touched a button in the substructure of an ordinary glass coffeepot, from whose spout two tubes proceeded into the wall. - Grace Paley, In Time Which Made A Monkey Of Us All"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING the");
          // display.setCursor(5, 17);
      // display.println("alarm clock in the laboratory gave the");
          // display.setCursor(5, 29);
      // display.println("ringing word. Eddie touched a button in");
          // display.setCursor(5, 41);
      // display.println("the substructure of an ordinary");
          // display.setCursor(5, 53);
      // display.println("glass coffeepot, from whose spout two");
          // display.setCursor(20, 5);
      // display.println("8:13 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Grace Paley");
      return;

    // Codegen for 08:14 for 0 quotations:
    case 494:
      Serial.println(F("No quotes for 08:14"));
      return;

    // Codegen for 08:15 for 2 quotations:
    case 495:
      option = random(0, 2);
      Serial.print(F("2 options for 08:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:15 - ... the fact that it was still very dark when George woke in the morning was no guide to him as to the time. He reached up, and hauled down his watch. It was a quarter-past eight. - Jerome K Jerome, Three Men in a Boat "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... the fact that it was still");
                // display.setCursor(5, 17);
      // display.println("very dark when George woke in the");
                // display.setCursor(5, 29);
      // display.println("morning was no guide to him as to the");
                // display.setCursor(5, 41);
      // display.println("time. He reached up, and hauled down");
                // display.setCursor(5, 53);
      // display.println("his watch. It was a");
                // display.setCursor(5, 65);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("quarter-past eight");
                // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
          return;
        case 1:
          Serial.println(F("08:15 - You scrutinized your wrist: \"It's eight fifteen. (And here time forked.) I'll turn it on.\" The screen In its blank broth evolved a lifelike blur, And music welled. - , Pale Fire"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("You scrutinized your wrist:");
                // display.setCursor(5, 17);
      // display.println("\"It's TIMESTRING.");
                // display.setCursor(5, 29);
      // display.println("(And here time forked.) I'll turn it");
                // display.setCursor(5, 41);
      // display.println("on.\" The screen In its blank broth");
                // display.setCursor(5, 53);
      // display.println("evolved a lifelike blur, And music");
                // display.setCursor(12, 17);
      // display.println("eight fifteen");
                // display.setCursor(130, 192);
      // display.println("- Pale Fire");
          return;
      } // end switch (option)

    // Codegen for 08:16 for 1 quotations:
    case 496:
      Serial.println(F("Only one option for 08:16:"));
    Serial.println(F("08:16 - Now what? What do people do in their gardens? I feel I should have something to read. Or someone to call. My fingers are itching to move. I look at my watch. Still only eight sixteen. Oh God. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Now what? What do people do in");
          // display.setCursor(5, 17);
      // display.println("their gardens? I feel I should have");
          // display.setCursor(5, 29);
      // display.println("something to read. Or someone to call. My");
          // display.setCursor(5, 41);
      // display.println("fingers are itching to move. I look at my");
          // display.setCursor(5, 53);
      // display.println("watch. Still only");
          // display.setCursor(77, 53);
      // display.println("eight sixteen");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 08:17 for 2 quotations:
    case 497:
      option = random(0, 2);
      Serial.print(F("2 options for 08:17. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:17 - He consulted his instruments, and recorded: \"Monday, July 1. Chronometer, 8.17 a.m.; barometer, 297 in.; thermometer, 6° (43° F.). Direction, E.S.E.\" - Jules Verne, A Journey to the Centre of the Earth"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He consulted his instruments,");
                // display.setCursor(5, 17);
      // display.println("and recorded: \"Monday, July 1.");
                // display.setCursor(5, 29);
      // display.println("Chronometer, TIMESTRING;");
                // display.setCursor(5, 41);
      // display.println("barometer, 297 in.; thermometer, 6° (43°");
                // display.setCursor(18, 29);
      // display.println("8.17 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Jules Verne");
          return;
        case 1:
          Serial.println(F("08:17 - Come on, I can't give up yet. I'll just sit here for a bit and enjoy the peace. I lean back and watch a little speckled bird pecking the ground nearby for a while. Then I look at my watch again: eight seventeen. I can't do this. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Come on, I can't give up yet. I'll");
                // display.setCursor(5, 17);
      // display.println("just sit here for a bit and enjoy the");
                // display.setCursor(5, 29);
      // display.println("peace. I lean back and watch a little");
                // display.setCursor(5, 41);
      // display.println("speckled bird pecking the ground nearby");
                // display.setCursor(5, 53);
      // display.println("for a while. Then I look at my watch");
                // display.setCursor(5, 65);
      // display.println("again: TIMESTRING. I");
                // display.setCursor(12, 65);
      // display.println("eight seventeen");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
      } // end switch (option)

    // Codegen for 08:18 for 0 quotations:
    case 498:
      Serial.println(F("No quotes for 08:18"));
      return;

    // Codegen for 08:19 for 1 quotations:
    case 499:
      Serial.println(F("Only one option for 08:19:"));
    Serial.println(F("08:19 - I had arranged to meet the Occupational Health Officer at 10:30. I took the train from Watford Junction at 8.19 and arrived at London Euston seven minutes late, at 8.49. - Jonathan Coe, The Terrible Privacy of Maxwell Sim"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I had arranged to meet the");
          // display.setCursor(5, 17);
      // display.println("Occupational Health Officer at 10:30. I took");
          // display.setCursor(5, 29);
      // display.println("the train from Watford Junction at");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING and arrived at");
          // display.setCursor(5, 53);
      // display.println("London Euston seven minutes late, at");
          // display.setCursor(5, 41);
      // display.println("8.19");
          // display.setCursor(109, 192);
      // display.println("- Jonathan Coe");
      return;

    // Codegen for 08:20 for 1 quotations:
    case 500:
      Serial.println(F("Only one option for 08:20:"));
    Serial.println(F("08:20 - When the typewriters happen to pause (8:20 and other mythical hours), and there are no flights of American bombers in the sky, and the motor traffic's not too heavy in Oxford Street, you can hear winter birds cheeping outside, busy at the feeders the girls have put up. - Thomas Pynchon, Gravity's Rainbow"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("When the typewriters happen to");
          // display.setCursor(5, 17);
      // display.println("pause (TIMESTRING and other");
          // display.setCursor(5, 29);
      // display.println("mythical hours), and there are no");
          // display.setCursor(5, 41);
      // display.println("flights of American bombers in the sky,");
          // display.setCursor(5, 53);
      // display.println("and the motor traffic's not too");
          // display.setCursor(5, 65);
      // display.println("heavy in Oxford Street, you can hear");
          // display.setCursor(5, 77);
      // display.println("winter birds cheeping outside, busy at");
          // display.setCursor(11, 17);
      // display.println("8:20");
          // display.setCursor(74, 192);
      // display.println("- Gravity's Rainbow");
      return;

    // Codegen for 08:21 for 0 quotations:
    case 501:
      Serial.println(F("No quotes for 08:21"));
      return;

    // Codegen for 08:22 for 0 quotations:
    case 502:
      Serial.println(F("No quotes for 08:22"));
      return;

    // Codegen for 08:23 for 2 quotations:
    case 503:
      option = random(0, 2);
      Serial.print(F("2 options for 08:23. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:23 - And then Wedderburn looked at his watch. \"Twenty-three minutes past eight. I am going up by the quarter to twelve train, so that there is plenty of time. - HG Wells, The Flowering of The Strange Orchid"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("And then Wedderburn looked at");
                // display.setCursor(5, 17);
      // display.println("his watch.");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("\"TIMESTRING. I am going up by the quarter to");
                // display.setCursor(5, 53);
      // display.println("twelve train, so that there is plenty");
                // display.setCursor(5, 29);
      // display.println("Twenty-three minutes past eight");
                // display.setCursor(137, 192);
      // display.println("- HG Wells");
          return;
        case 1:
          Serial.println(F("08:23 - At 8:23 there seemed every chance of a lasting alliance starting between Florin and Guilder. At 8:24 the two nations were very close to war. - William Goldman, The Princess Bride"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING there seemed");
                // display.setCursor(5, 17);
      // display.println("every chance of a lasting alliance");
                // display.setCursor(5, 29);
      // display.println("starting between Florin and Guilder. At");
                // display.setCursor(5, 41);
      // display.println("8:24 the two nations were very close");
                // display.setCursor(20, 5);
      // display.println("8:23");
                // display.setCursor(67, 192);
      // display.println("- The Princess Bride");
          return;
      } // end switch (option)

    // Codegen for 08:24 for 1 quotations:
    case 504:
      Serial.println(F("Only one option for 08:24:"));
    Serial.println(F("08:24 - At 8:23 there seemed every chance of a lasting alliance starting between Florin and Guilder. At 8:24 the two nations were very close to war. - William Goldman, The Princess Bride"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At 8:23 there seemed every");
          // display.setCursor(5, 17);
      // display.println("chance of a lasting alliance starting");
          // display.setCursor(5, 29);
      // display.println("between Florin and Guilder. At");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING the two nations were very close");
          // display.setCursor(150, 29);
      // display.println("8:24");
          // display.setCursor(67, 192);
      // display.println("- The Princess Bride");
      return;

    // Codegen for 08:25 for 0 quotations:
    case 505:
      Serial.println(F("No quotes for 08:25"));
      return;

    // Codegen for 08:26 for 1 quotations:
    case 506:
      Serial.println(F("Only one option for 08:26:"));
    Serial.println(F("08:26 - It exploded much later than intended, probably a good twelve hours later, at twenty-six minutes past eight on Monday morning. Several defunct wristwatches, the property of victims, confirmed the time. - John Le Carre, The Little Drummer Girl"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It exploded much later than");
          // display.setCursor(5, 17);
      // display.println("intended, probably a good twelve hours");
          // display.setCursor(5, 29);
      // display.println("later, at");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING on Monday morning. Several");
          // display.setCursor(5, 65);
      // display.println("defunct wristwatches, the property of");
          // display.setCursor(5, 41);
      // display.println("twenty-six minutes past eight");
          // display.setCursor(32, 192);
      // display.println("- The Little Drummer Girl");
      return;

    // Codegen for 08:27 for 1 quotations:
    case 507:
      Serial.println(F("Only one option for 08:27:"));
    Serial.println(F("08:27 - The lecture was to be given tomorrow, and it was now almost eight-thirty. - John Kennedy Toole, A Confederacy of Dunces"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The lecture was to be given");
          // display.setCursor(5, 17);
      // display.println("tomorrow, and it was now");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("almost eight-thirty");
          // display.setCursor(32, 192);
      // display.println("- A Confederacy of Dunces");
      return;

    // Codegen for 08:28 for 1 quotations:
    case 508:
      Serial.println(F("Only one option for 08:28:"));
    Serial.println(F("08:28 - And at 8.28 on the following morning, with a novel chilliness about the upper lip, and a vast excess of strength and spirits, I was sitting in a third-class carriage, bound for Germany, and dressed as a young sea-man, in a pea-jacket, peaked cap, and comforter. - Erskine Childers, The Riddle of the Sands"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("And at TIMESTRING on the");
          // display.setCursor(5, 17);
      // display.println("following morning, with a novel");
          // display.setCursor(5, 29);
      // display.println("chilliness about the upper lip, and a vast");
          // display.setCursor(5, 41);
      // display.println("excess of strength and spirits, I was");
          // display.setCursor(5, 53);
      // display.println("sitting in a third-class carriage,");
          // display.setCursor(5, 65);
      // display.println("bound for Germany, and dressed as a");
          // display.setCursor(5, 77);
      // display.println("young sea-man, in a pea-jacket,");
          // display.setCursor(42, 5);
      // display.println("8.28");
          // display.setCursor(32, 192);
      // display.println("- The Riddle of the Sands");
      return;

    // Codegen for 08:29 for 1 quotations:
    case 509:
      Serial.println(F("Only one option for 08:29:"));
    Serial.println(F("08:29 - At 8.29 I punched the front doorbell in Elgin Crescent. It was opened by a small oriental woman in a white apron. She showed me into a large, empty sitting room with an open fire and a couple of huge oil paintings. - Sebastian Faulks, Engleby"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING I punched the");
          // display.setCursor(5, 17);
      // display.println("front doorbell in Elgin Crescent. It");
          // display.setCursor(5, 29);
      // display.println("was opened by a small oriental woman");
          // display.setCursor(5, 41);
      // display.println("in a white apron. She showed me into");
          // display.setCursor(5, 53);
      // display.println("a large, empty sitting room with");
          // display.setCursor(5, 65);
      // display.println("an open fire and a couple of huge oil");
          // display.setCursor(20, 5);
      // display.println("8.29");
          // display.setCursor(18, 192);
      // display.println("- Sebastian Faulks, Engleby");
      return;

    // Codegen for 08:30 for 5 quotations:
    case 510:
      option = random(0, 5);
      Serial.print(F("5 options for 08:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:30 - At half past eight, Mr. Dursley picked up his briefcase, pecked Mrs. Dursley on the cheek, and tried to kiss Dudley good-bye but missed, because Dudley was now having a tantrum and throwing his cereal at the walls. - JK Rowling, Harry Potter and the Philosopher's Stone "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING,");
                // display.setCursor(5, 17);
      // display.println("Mr. Dursley picked up his");
                // display.setCursor(5, 29);
      // display.println("briefcase, pecked Mrs. Dursley on the");
                // display.setCursor(5, 41);
      // display.println("cheek, and tried to kiss Dudley");
                // display.setCursor(5, 53);
      // display.println("good-bye but missed, because Dudley was");
                // display.setCursor(5, 65);
      // display.println("now having a tantrum and throwing");
                // display.setCursor(20, 5);
      // display.println("half past eight");
                // display.setCursor(123, 192);
      // display.println("- JK Rowling");
          return;
        case 1:
          Serial.println(F("08:30 - It is around 8:30. Sunshine comes through the windows at right. As the curtain rises, the family has just finished breakfast. - Eugene O'Neill, Long Day's Journey Into Night "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It is around TIMESTRING.");
                // display.setCursor(5, 17);
      // display.println("Sunshine comes through the windows at");
                // display.setCursor(5, 29);
      // display.println("right. As the curtain rises, the");
                // display.setCursor(78, 5);
      // display.println("8:30");
                // display.setCursor(95, 192);
      // display.println("- Eugene O'Neill");
          return;
        case 2:
          Serial.println(F("08:30 - On July 25th, 8:30 a.m. the bitch Novaya dies whelping. At 10 o'clock she is lowered into her cool grave, at 7:30 that same evening we see our first floes and greet them wishing they were the last. - Christoph Ransmayr, The Terrors of Ice and Darkness "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On July 25th,");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING the bitch Novaya dies");
                // display.setCursor(5, 29);
      // display.println("whelping. At 10 o'clock she is lowered");
                // display.setCursor(5, 41);
      // display.println("into her cool grave, at 7:30 that same");
                // display.setCursor(5, 53);
      // display.println("evening we see our first floes and greet");
                // display.setCursor(85, 5);
      // display.println("8:30 a.m.");
                // display.setCursor(67, 192);
      // display.println("- Christoph Ransmayr");
          return;
        case 3:
          Serial.println(F("08:30 - The lecture was to be given tomorrow, and it was now almost eight-thirty. - John Kennedy Toole, A Confederacy of Dunces"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The lecture was to be given");
                // display.setCursor(5, 17);
      // display.println("tomorrow, and it was now almost");
                // display.setCursor(5, 29);
      // display.println("eight-thirty");
                // display.setCursor(32, 192);
      // display.println("- A Confederacy of Dunces");
          return;
        case 4:
          Serial.println(F("08:30 - When he woke, at eight-thirty, he was alone in the bedroom. He put on his dressing gown and put in his hearing aid and went into the living room. - David Lodge, Deaf Sentence "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("When he woke, at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, he was alone in the bedroom. He");
                // display.setCursor(5, 29);
      // display.println("put on his dressing gown and put in");
                // display.setCursor(5, 41);
      // display.println("his hearing aid and went into the");
                // display.setCursor(100, 5);
      // display.println("eight-thirty");
                // display.setCursor(4, 192);
      // display.println("- David Lodge, Deaf Sentence ");
          return;
      } // end switch (option)

    // Codegen for 08:31 for 0 quotations:
    case 511:
      Serial.println(F("No quotes for 08:31"));
      return;

    // Codegen for 08:32 for 2 quotations:
    case 512:
      option = random(0, 2);
      Serial.print(F("2 options for 08:32. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:32 - 'Does anybody know the time a little more exactly is what I'm wondering, Don, since Day doesn't.' Gately checks his cheap digital, head still hung over the sofa's arm. 'I got 0832:14, 15, 16, Randy.' ''ks a lot, D.G. man.' - David Foster Wallace, Infinite Jest "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Does anybody know the time a");
                // display.setCursor(5, 17);
      // display.println("little more exactly is what I'm");
                // display.setCursor(5, 29);
      // display.println("wondering, Don, since Day doesn't.'");
                // display.setCursor(5, 41);
      // display.println("Gately checks his cheap digital, head");
                // display.setCursor(5, 53);
      // display.println("still hung over the sofa's arm. 'I got");
                // display.setCursor(5, 65);
      // display.println("0TIMESTRING:14, 15, 16,");
                // display.setCursor(5, 65);
      // display.println("832");
                // display.setCursor(102, 192);
      // display.println("- Infinite Jest");
          return;
        case 1:
          Serial.println(F("08:32 - 8.32 a.m. Catch bus to school - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Catch bus");
                // display.setCursor(5, 5);
      // display.println("8.32 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
      } // end switch (option)

    // Codegen for 08:33 for 0 quotations:
    case 513:
      Serial.println(F("No quotes for 08:33"));
      return;

    // Codegen for 08:34 for 0 quotations:
    case 514:
      Serial.println(F("No quotes for 08:34"));
      return;

    // Codegen for 08:35 for 2 quotations:
    case 515:
      option = random(0, 2);
      Serial.print(F("2 options for 08:35. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:35 - It was thirty-five minutes past eight by the big clock of the central building when Mathieu crossed the yard towards the office which he occupied as chief designer. - Emile Zola, Fruitfulness "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING by the big clock of the central");
                // display.setCursor(5, 41);
      // display.println("building when Mathieu crossed the yard");
                // display.setCursor(5, 53);
      // display.println("towards the office which he occupied as");
                // display.setCursor(5, 17);
      // display.println("thirty-five minutes past eight");
                // display.setCursor(18, 192);
      // display.println("- Emile Zola, Fruitfulness ");
          return;
        case 1:
          Serial.println(F("08:35 - Old gummy granny (thrusts a dagger towards Stephen's hand) Remove him, acushla. At 8.35 a.m. you will be in heaven and Ireland will be free (she prays) O good God take him! - James Joyce, Ulysses"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Old gummy granny (thrusts a");
                // display.setCursor(5, 17);
      // display.println("dagger towards Stephen's hand) Remove");
                // display.setCursor(5, 29);
      // display.println("him, acushla. At");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING you will be in heaven and");
                // display.setCursor(5, 53);
      // display.println("Ireland will be free (she prays) O good");
                // display.setCursor(82, 29);
      // display.println("8.35 a.m.");
                // display.setCursor(53, 192);
      // display.println("- James Joyce, Ulysses");
          return;
      } // end switch (option)

    // Codegen for 08:36 for 0 quotations:
    case 516:
      Serial.println(F("No quotes for 08:36"));
      return;

    // Codegen for 08:37 for 1 quotations:
    case 517:
      Serial.println(F("Only one option for 08:37:"));
    Serial.println(F("08:37 - Eight thirty-seven am., Patrice Lane, Biohazard: The dog's clean. The Good Samaritan was a woman with an accent of some sort. Why haven't you called me? - Ilona Andrews, Magic Bleeds"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("am., Patrice Lane, Biohazard: The");
          // display.setCursor(5, 29);
      // display.println("dog's clean. The Good Samaritan was a");
          // display.setCursor(5, 41);
      // display.println("woman with an accent of some sort. Why");
          // display.setCursor(5, 5);
      // display.println("Eight thirty-seven");
          // display.setCursor(4, 192);
      // display.println("- Ilona Andrews, Magic Bleeds");
      return;

    // Codegen for 08:38 for 0 quotations:
    case 518:
      Serial.println(F("No quotes for 08:38"));
      return;

    // Codegen for 08:39 for 1 quotations:
    case 519:
      Serial.println(F("Only one option for 08:39:"));
    Serial.println(F("08:39 - Doug McGuire noticed the early hour, 8:39 A.M. on the one wall clock that gave Daylight Savings Time for the East Coast. - Winn Schwartau, Terminal Compromise"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Doug McGuire noticed the early");
          // display.setCursor(5, 17);
      // display.println("hour, TIMESTRING on the one");
          // display.setCursor(5, 29);
      // display.println("wall clock that gave Daylight");
          // display.setCursor(11, 17);
      // display.println("8:39 A.M.");
          // display.setCursor(60, 192);
      // display.println("- Terminal Compromise");
      return;

    // Codegen for 08:40 for 2 quotations:
    case 520:
      option = random(0, 2);
      Serial.print(F("2 options for 08:40. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:40 - At this moment the clock indicated 8.40. 'Five minutes more,' said Andrew Stuart. The five friends looked at each other. One may surmise that their heart-beats were slightly accelereted, for, even for bold gamblers, the stake was a large one.' - Jules Verne, Around the world in eighty days "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At this moment the clock");
                // display.setCursor(5, 17);
      // display.println("indicated TIMESTRING. 'Five");
                // display.setCursor(5, 29);
      // display.println("minutes more,' said Andrew Stuart. The");
                // display.setCursor(5, 41);
      // display.println("five friends looked at each other.");
                // display.setCursor(5, 53);
      // display.println("One may surmise that their");
                // display.setCursor(5, 65);
      // display.println("heart-beats were slightly accelereted,");
                // display.setCursor(5, 77);
      // display.println("for, even for bold gamblers, the");
                // display.setCursor(15, 17);
      // display.println("8.40");
                // display.setCursor(116, 192);
      // display.println("- Jules Verne");
          return;
        case 1:
          Serial.println(F("08:40 - It was when I stood before her, avoiding her eyes, that I took note of the surrounding objects in detail, and saw that her watch had stopped at twenty minutes to nine, and that a clock in the room had stopped at twenty minutes to nine. - Charles Dickens, Great Expectations"));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was when I stood before her,");
                // display.setCursor(5, 17);
      // display.println("avoiding her eyes, that I took note of the");
                // display.setCursor(5, 29);
      // display.println("surrounding objects in detail, and saw that");
                // display.setCursor(5, 41);
      // display.println("her watch had stopped at");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING, and that a clock in the room had");
                // display.setCursor(5, 77);
      // display.println("stopped at");
                // display.setCursor(28, 77);
      // display.println("twenty minutes to nine");
                // display.setCursor(67, 192);
      // display.println("- Great Expectations");
          return;
      } // end switch (option)

    // Codegen for 08:41 for 1 quotations:
    case 521:
      Serial.println(F("Only one option for 08:41:"));
    Serial.println(F("08:41 - By forty-one minutes past eight we are five hundred yards from the water’s edge, and between our road and the foot of the mountain we descry the piled-up remains of a ruined tower. - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("By");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING we are five hundred yards from");
          // display.setCursor(5, 41);
      // display.println("the water’s edge, and between our");
          // display.setCursor(5, 53);
      // display.println("road and the foot of the mountain we");
          // display.setCursor(5, 65);
      // display.println("descry the piled-up remains of a");
          // display.setCursor(5, 17);
      // display.println("forty-one minutes past eight");
          // display.setCursor(67, 192);
      // display.println("- Félicien de Saulcy");
      return;

    // Codegen for 08:42 for 0 quotations:
    case 522:
      Serial.println(F("No quotes for 08:42"));
      return;

    // Codegen for 08:43 for 2 quotations:
    case 523:
      option = random(0, 2);
      Serial.print(F("2 options for 08:43. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:43 - You understand this tape recorder is on? \"Uh huh\" \"And it's Wednesday, May 15, at eight forty-three in the mornin'.\" \"If you say so\" - John Grisham, A Time to Kill "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("You understand this tape");
                // display.setCursor(5, 17);
      // display.println("recorder is on? \"Uh huh\" \"And it's");
                // display.setCursor(5, 29);
      // display.println("Wednesday, May 15, at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING in the mornin'.\" \"If you say");
                // display.setCursor(75, 29);
      // display.println("eight forty-three");
                // display.setCursor(95, 192);
      // display.println("- A Time to Kill");
          return;
        case 1:
          Serial.println(F("08:43 - 8.43 a.m. Go past tropical fish shop - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Go past");
                // display.setCursor(5, 5);
      // display.println("8.43 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
      } // end switch (option)

    // Codegen for 08:44 for 1 quotations:
    case 524:
      Serial.println(F("Only one option for 08:44:"));
    Serial.println(F("08:44 - Several soldiers - some with their uniforms unbuttoned - were looking over a motorcycle, arguing about it. The sergeant looked at his watch; it was eight forty-four. They had to wait until nine. - Jorge Luis Borges, The Secret Miracle"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Several soldiers - some with");
          // display.setCursor(5, 17);
      // display.println("their uniforms unbuttoned - were");
          // display.setCursor(5, 29);
      // display.println("looking over a motorcycle, arguing");
          // display.setCursor(5, 41);
      // display.println("about it. The sergeant looked at his");
          // display.setCursor(5, 53);
      // display.println("watch; it was");
          // display.setCursor(49, 53);
      // display.println("eight forty-four");
          // display.setCursor(67, 192);
      // display.println("- The Secret Miracle");
      return;

    // Codegen for 08:45 for 1 quotations:
    case 525:
      Serial.println(F("Only one option for 08:45:"));
    Serial.println(F("08:45 - He paid the waitress and left the café. It was 8:45. The sun pressed against the inside of a thin layer of cloud. He unbuttoned his jacket as he hurried down Queensway. His mind, unleashed, sprang forwards. - Rupert Thomson, Dreams of leaving"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He paid the waitress and left the");
          // display.setCursor(5, 17);
      // display.println("café. It was TIMESTRING. The sun");
          // display.setCursor(5, 29);
      // display.println("pressed against the inside of a thin");
          // display.setCursor(5, 41);
      // display.println("layer of cloud. He unbuttoned his");
          // display.setCursor(5, 53);
      // display.println("jacket as he hurried down Queensway.");
          // display.setCursor(5, 65);
      // display.println("His mind, unleashed, sprang");
          // display.setCursor(48, 17);
      // display.println("8:45");
          // display.setCursor(74, 192);
      // display.println("- Dreams of leaving");
      return;

    // Codegen for 08:46 for 0 quotations:
    case 526:
      Serial.println(F("No quotes for 08:46"));
      return;

    // Codegen for 08:47 for 2 quotations:
    case 527:
      option = random(0, 2);
      Serial.print(F("2 options for 08:47. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:47 - Just on my way to the cottage. It's, er, ..8.47. Bit misty on the roads..... - Douglas Adams, Dirk Gently's Holistic Detective Agency "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Just on my way to the cottage.");
                // display.setCursor(5, 17);
      // display.println("It's, er, ..TIMESTRING. Bit");
                // display.setCursor(33, 17);
      // display.println("8.47");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 1:
          Serial.println(F("08:47 - 8.47. Bit misty on the roads - Douglas Adams, Dirk Gently's Holistic Detective Agency"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING. Bit misty on");
                // display.setCursor(5, 5);
      // display.println("8.47");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
      } // end switch (option)

    // Codegen for 08:48 for 0 quotations:
    case 528:
      Serial.println(F("No quotes for 08:48"));
      return;

    // Codegen for 08:49 for 1 quotations:
    case 529:
      Serial.println(F("Only one option for 08:49:"));
    Serial.println(F("08:49 - I had arranged to meet the Occupational Health Officer at 10:30. I took the train from Watford Junction at 8.19 and arrived at London Euston seven minutes late, at 8.49. - Jonathan Coe, The Terrible Privacy of Maxwell Sim"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I had arranged to meet the");
          // display.setCursor(5, 17);
      // display.println("Occupational Health Officer at 10:30. I took");
          // display.setCursor(5, 29);
      // display.println("the train from Watford Junction at");
          // display.setCursor(5, 41);
      // display.println("8.19 and arrived at London Euston");
          // display.setCursor(5, 53);
      // display.println("seven minutes late, at");
          // display.setCursor(112, 53);
      // display.println("8.49");
          // display.setCursor(109, 192);
      // display.println("- Jonathan Coe");
      return;

    // Codegen for 08:50 for 3 quotations:
    case 530:
      option = random(0, 3);
      Serial.print(F("3 options for 08:50. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:50 - At ten to nine the clerks began to arrive.When they had hung up their coats and hates they came to the fireplace and stood warming themselves. If there was no fire, they stood there all the same - V.S. Pritchett, The Chestnut Tree"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING the");
                // display.setCursor(5, 17);
      // display.println("clerks began to arrive.When they had");
                // display.setCursor(5, 29);
      // display.println("hung up their coats and hates they");
                // display.setCursor(5, 41);
      // display.println("came to the fireplace and stood");
                // display.setCursor(5, 53);
      // display.println("warming themselves. If there was no");
                // display.setCursor(20, 5);
      // display.println("ten to nine");
                // display.setCursor(74, 192);
      // display.println("- The Chestnut Tree");
          return;
        case 1:
          Serial.println(F("08:50 - It was 8:50 in the morning and Bernie and I were alone on an Astoria side street, not far from a sandwich shop that sold a sopressatta sub called \"The Bypass\". I used to eat that sandwich weekly - Sam Lipsyte, The Ask "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING in the");
                // display.setCursor(5, 17);
      // display.println("morning and Bernie and I were alone on an");
                // display.setCursor(5, 29);
      // display.println("Astoria side street, not far from a");
                // display.setCursor(5, 41);
      // display.println("sandwich shop that sold a sopressatta");
                // display.setCursor(5, 53);
      // display.println("sub called \"The Bypass\". I used to");
                // display.setCursor(42, 5);
      // display.println("8:50");
                // display.setCursor(46, 192);
      // display.println("- Sam Lipsyte, The Ask ");
          return;
        case 2:
          Serial.println(F("08:50 - Punctually at ten minutes to nine, a quarter hour after early mass, the boy stood in his Sunday uniform outside his father's door. - Joseph Roth, The Radetzky March"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Punctually at");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, a quarter hour after early");
                // display.setCursor(5, 41);
      // display.println("mass, the boy stood in his Sunday");
                // display.setCursor(5, 17);
      // display.println("ten minutes to nine");
                // display.setCursor(67, 192);
      // display.println("- The Radetzky March");
          return;
      } // end switch (option)

    // Codegen for 08:51 for 1 quotations:
    case 531:
      Serial.println(F("Only one option for 08:51:"));
    Serial.println(F("08:51 - 8.51 a.m. Arrive at school - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING Arrive at");
          // display.setCursor(5, 5);
      // display.println("8.51 a.m.");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

    // Codegen for 08:52 for 1 quotations:
    case 532:
      Serial.println(F("Only one option for 08:52:"));
    Serial.println(F("08:52 - Message one. Tuesday, 8.52am. Is anybody there? Hello? - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Message one. Tuesday,");
          // display.setCursor(141, 5);
      // display.println("8.52am.");
          // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
      return;

    // Codegen for 08:53 for 0 quotations:
    case 533:
      Serial.println(F("No quotes for 08:53"));
      return;

    // Codegen for 08:54 for 1 quotations:
    case 534:
      Serial.println(F("Only one option for 08:54:"));
    Serial.println(F("08:54 - It was Mrs. Poppets that woke me up next morning. She said: “Do you know that it’s nearly nine o’clock, sir?” “Nine o’ what?” I cried, starting up. “Nine o’clock,” she replied, through the keyhole. “I thought you was a- oversleeping yourselves.” - Jerome K Jerome, Three Men in a Boat "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was Mrs. Poppets that woke me");
          // display.setCursor(5, 17);
      // display.println("up next morning. She said: “Do you");
          // display.setCursor(5, 29);
      // display.println("know that it’s");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING, sir?” “Nine o’ what?” I cried,");
          // display.setCursor(5, 53);
      // display.println("starting up. “Nine o’clock,” she");
          // display.setCursor(5, 65);
      // display.println("replied, through the keyhole. “I");
          // display.setCursor(5, 77);
      // display.println("thought you was a- oversleeping");
          // display.setCursor(68, 29);
      // display.println("nearly nine o’clock");
          // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
      return;

    // Codegen for 08:55 for 2 quotations:
    case 535:
      option = random(0, 2);
      Serial.print(F("2 options for 08:55. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:55 - At five minutes to nine, Jacques, in his gray butler's livery, came down the stairs and said, \"Young master, your Herr Papá is coming.\" - Joseph Roth, The Radetzky March"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, Jacques, in his gray butler's");
                // display.setCursor(5, 29);
      // display.println("livery, came down the stairs and said,");
                // display.setCursor(5, 41);
      // display.println("\"Young master, your Herr Papá is");
                // display.setCursor(20, 5);
      // display.println("five minutes to nine");
                // display.setCursor(67, 192);
      // display.println("- The Radetzky March");
          return;
        case 1:
          Serial.println(F("08:55 - George pulled out his watch and looked at it: it was five minutes to nine! - Jerome K Jerome, Three Men in a Boat "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("George pulled out his watch and");
                // display.setCursor(5, 17);
      // display.println("looked at it: it was");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("five minutes to nine");
                // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
          return;
      } // end switch (option)

    // Codegen for 08:56 for 1 quotations:
    case 536:
      Serial.println(F("Only one option for 08:56:"));
    Serial.println(F("08:56 - It was nearly nine o'clock and the sun was fiercer every minute.' - George Orwell, Burmese Days"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING and the sun was fiercer every");
          // display.setCursor(42, 5);
      // display.println("nearly nine o'clock");
          // display.setCursor(4, 192);
      // display.println("- George Orwell, Burmese Days");
      return;

    // Codegen for 08:57 for 1 quotations:
    case 537:
      Serial.println(F("Only one option for 08:57:"));
    Serial.println(F("08:57 - ... they should cause to be rung a bell from its smaller bell-tower for three minutes before nine o'clock every morning, all the year round. - JS Fletcher, The Paradise Mystery"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... they should cause to be rung a");
          // display.setCursor(5, 17);
      // display.println("bell from its smaller bell-tower for");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING o'clock every morning, all the");
          // display.setCursor(5, 29);
      // display.println("three minutes before nine");
          // display.setCursor(53, 192);
      // display.println("- The Paradise Mystery");
      return;

    // Codegen for 08:58 for 1 quotations:
    case 538:
      Serial.println(F("Only one option for 08:58:"));
    Serial.println(F("08:58 - It was two minutes of nine now - two minutes before the bombs were set to explode - and three or four people were gathered in front of the bank waiting for it to open. - Jim Thompson, The Getaway"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING now - two minutes before the");
          // display.setCursor(5, 29);
      // display.println("bombs were set to explode - and three");
          // display.setCursor(5, 41);
      // display.println("or four people were gathered in");
          // display.setCursor(5, 53);
      // display.println("front of the bank waiting for it to");
          // display.setCursor(42, 5);
      // display.println("two minutes of nine");
          // display.setCursor(18, 192);
      // display.println("- Jim Thompson, The Getaway");
      return;

    // Codegen for 08:59 for 1 quotations:
    case 539:
      Serial.println(F("Only one option for 08:59:"));
    Serial.println(F("08:59 - She had been lying in bed reading about Sophie and Alberto's conversation on Marx and had fallen asleep. The reading lamp by the bed had been on all night. The green glowing digits on her desk alarm clock showed 8:59. - Jostein Gaarder, Sophie's World"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She had been lying in bed reading");
          // display.setCursor(5, 17);
      // display.println("about Sophie and Alberto's");
          // display.setCursor(5, 29);
      // display.println("conversation on Marx and had fallen asleep.");
          // display.setCursor(5, 41);
      // display.println("The reading lamp by the bed had been");
          // display.setCursor(5, 53);
      // display.println("on all night. The green glowing");
          // display.setCursor(5, 65);
      // display.println("digits on her desk alarm clock showed");
          // display.setCursor(5, 77);
      // display.println("8:59");
          // display.setCursor(95, 192);
      // display.println("- Sophie's World");
      return;

    // Codegen for 09:00 for 16 quotations:
    case 540:
      option = random(0, 16);
      Serial.print(F("16 options for 09:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:00 - 'I could never get all the way down there before nine o'clock.' - John Kennedy Toole, A Confederacy of Dunces "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'I could never get all the way");
                // display.setCursor(5, 17);
      // display.println("down there before");
                // display.setCursor(89, 17);
      // display.println("nine o'clock");
                // display.setCursor(32, 192);
      // display.println("- A Confederacy of Dunces");
          return;
        case 1:
          Serial.println(F("09:00 - 'Look. Ignatius. I'm beat. I've been on the road since nine o'clock yesterday morning.' - John Kennedy Toole, A Confederacy of Dunces "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Look. Ignatius. I'm beat. I've");
                // display.setCursor(5, 17);
      // display.println("been on the road since");
                // display.setCursor(112, 17);
      // display.println("nine o'clock");
                // display.setCursor(32, 192);
      // display.println("- A Confederacy of Dunces");
          return;
        case 2:
          Serial.println(F("09:00 - On the third morning after their arrival, just as all the clocks in the city were striking nine individually, and somewhere about nine hundred and ninety-nine collectively... - Charles Dickens, The Pickwick Papers "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On the third morning after their");
                // display.setCursor(5, 17);
      // display.println("arrival, just as all the clocks in the");
                // display.setCursor(5, 29);
      // display.println("city were striking");
                // display.setCursor(5, 41);
      // display.println("TIMESTRINGindividually, and somewhere about");
                // display.setCursor(5, 53);
      // display.println("TIMESTRINGhundred and");
                // display.setCursor(45, 53);
      // display.println("nine ");
                // display.setCursor(60, 192);
      // display.println("- The Pickwick Papers");
          return;
        case 3:
          Serial.println(F("09:00 - 14 June 9:00 am woke up - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("14 June TIMESTRING woke");
                // display.setCursor(49, 5);
      // display.println("9:00 am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 4:
          Serial.println(F("09:00 - 9.00 a.m. School assembly - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING School");
                // display.setCursor(5, 5);
      // display.println("9.00 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 5:
          Serial.println(F("09:00 - A fly buzzed, the wall clock began to strike. After the nine golden strokes faded, the district captain began. \"How is Herr Colonel Marek?\" \"Thank you, Papá, he's fine.\" \"Still weak in geometry?\" \"Thank you, Papá, a little better.\" \"Read any books?\" \"Yessir, Papá.\" - Joseph Roth, The Radetzky March "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("A fly buzzed, the wall clock");
                // display.setCursor(5, 17);
      // display.println("began to strike. After the");
                // display.setCursor(5, 29);
      // display.println("TIMESTRINGgolden strokes faded, the district");
                // display.setCursor(5, 41);
      // display.println("captain began. \"How is Herr Colonel");
                // display.setCursor(5, 53);
      // display.println("Marek?\" \"Thank you, Papá, he's");
                // display.setCursor(5, 65);
      // display.println("fine.\" \"Still weak in geometry?\"");
                // display.setCursor(5, 77);
      // display.println("\"Thank you, Papá, a little better.\"");
                // display.setCursor(134, 17);
      // display.println("nine ");
                // display.setCursor(67, 192);
      // display.println("- The Radetzky March");
          return;
        case 6:
          Serial.println(F("09:00 - As nine o' clock was left behind, the preposterousness of the delay overwhelmed me, and I went in a kind of temper to the owner and said that I thought he should sign on another cook and weigh spars and be off. - John Hershey, A Single Pebble "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As TIMESTRING was");
                // display.setCursor(5, 17);
      // display.println("left behind, the preposterousness");
                // display.setCursor(5, 29);
      // display.println("of the delay overwhelmed me, and I");
                // display.setCursor(5, 41);
      // display.println("went in a kind of temper to the owner");
                // display.setCursor(5, 53);
      // display.println("and said that I thought he should");
                // display.setCursor(5, 65);
      // display.println("sign on another cook and weigh spars");
                // display.setCursor(20, 5);
      // display.println("nine o' clock");
                // display.setCursor(88, 192);
      // display.println("- A Single Pebble");
          return;
        case 7:
          Serial.println(F("09:00 - At nine o'clock, one morning late in July, Gatsby's gorgeous car lurched up the rocky drive to my door and gave out a burst of melody from its three-noted horn - F. Scott Fitzgerald, The Great Gatsby "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING, one");
                // display.setCursor(5, 17);
      // display.println("morning late in July, Gatsby's");
                // display.setCursor(5, 29);
      // display.println("gorgeous car lurched up the rocky drive");
                // display.setCursor(5, 41);
      // display.println("to my door and gave out a burst of");
                // display.setCursor(20, 5);
      // display.println("nine o'clock");
                // display.setCursor(81, 192);
      // display.println("- The Great Gatsby");
          return;
        case 8:
          Serial.println(F("09:00 - He was at breakfast at nine, and for the twentieth time consulted his \"Bradshaw,\" to see at what earliest hour Dr. Grantly could arrive from Barchester. - Anthony Trollope, The Warden "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He was at breakfast");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and for the twentieth time");
                // display.setCursor(5, 29);
      // display.println("consulted his \"Bradshaw,\" to see at");
                // display.setCursor(5, 41);
      // display.println("what earliest hour Dr. Grantly could");
                // display.setCursor(121, 5);
      // display.println("at nine");
                // display.setCursor(123, 192);
      // display.println("- The Warden");
          return;
        case 9:
          Serial.println(F("09:00 - Now, if you only kept on good terms with him, he'd do almost anything you liked with the clock. For instance, suppose it were nine o'clock in the morning, just time to begin lessons - Lewis Carroll, Alice's Adventures in Wonderland "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Now, if you only kept on good");
                // display.setCursor(5, 17);
      // display.println("terms with him, he'd do almost");
                // display.setCursor(5, 29);
      // display.println("anything you liked with the clock. For");
                // display.setCursor(5, 41);
      // display.println("instance, suppose it were");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING in the morning, just time to");
                // display.setCursor(109, 41);
      // display.println("nine o'clock");
                // display.setCursor(102, 192);
      // display.println("- Lewis Carroll");
          return;
        case 10:
          Serial.println(F("09:00 - It was around nine o'clock that I crossed the border into Cornwall. This was at least three hours before the rain began and the clouds were still all of a brilliant white. - Kazuo Ishiguro, The Remains of the Day "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was around");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING that I crossed the border into");
                // display.setCursor(5, 29);
      // display.println("Cornwall. This was at least three hours");
                // display.setCursor(5, 41);
      // display.println("before the rain began and the clouds");
                // display.setCursor(85, 5);
      // display.println("nine o'clock");
                // display.setCursor(39, 192);
      // display.println("- The Remains of the Day");
          return;
        case 11:
          Serial.println(F("09:00 - To be on the safe side, he did not unpack everything. At nine he went to breakfast in the specially designated buffet between the lobby and the dining room. - Thomas Mann, Death in Venice "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("To be on the safe side, he did not");
                // display.setCursor(5, 17);
      // display.println("unpack everything.");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING he went to breakfast in the");
                // display.setCursor(5, 41);
      // display.println("specially designated buffet between the");
                // display.setCursor(90, 17);
      // display.println("At nine");
                // display.setCursor(88, 192);
      // display.println("- Death in Venice");
          return;
        case 12:
          Serial.println(F("09:00 - Sometimes what I wouldn't give to have us sitting in a bar again at 9.00am telling lies to one another, far from God. - Denis Johnson, Jesus' Son "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sometimes what I wouldn't give");
                // display.setCursor(5, 17);
      // display.println("to have us sitting in a bar again at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING telling lies");
                // display.setCursor(5, 29);
      // display.println("9.00am");
                // display.setCursor(11, 192);
      // display.println("- Denis Johnson, Jesus' Son ");
          return;
        case 13:
          Serial.println(F("09:00 - The clock struck nine when I did send the nurse; In half an hour she promised to return. Perchance she cannot meet him: that's not so. - Shakespeare, Romeo and Juliet "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The clock struck");
                // display.setCursor(5, 17);
      // display.println("TIMESTRINGwhen I did send the nurse; In half an");
                // display.setCursor(5, 29);
      // display.println("hour she promised to return.");
                // display.setCursor(5, 41);
      // display.println("Perchance she cannot meet him: that's not");
                // display.setCursor(106, 5);
      // display.println("nine ");
                // display.setCursor(81, 192);
      // display.println("- Romeo and Juliet");
          return;
        case 14:
          Serial.println(F("09:00 - To where Saint Mary Woolnoth kept the hours With a dead sound on the final stroke of nine. - T S Eliot, The Waste Land "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("To where Saint Mary Woolnoth");
                // display.setCursor(5, 17);
      // display.println("kept the hours With a dead sound on");
                // display.setCursor(5, 29);
      // display.println("the final stroke of");
                // display.setCursor(103, 29);
      // display.println("nine");
                // display.setCursor(11, 192);
      // display.println("- T S Eliot, The Waste Land ");
          return;
        case 15:
          Serial.println(F("09:00 - Sighs, short and infrequent, were exhaled, And each man fixed his eyes before his feet. Flowed up the hill and down King William Street, To where Saint Mary Woolnoth kept the hours With a dead sound on the final stroke of nine. - T S Eliot, The Waste Land "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sighs, short and infrequent,");
                // display.setCursor(5, 17);
      // display.println("were exhaled, And each man fixed his");
                // display.setCursor(5, 29);
      // display.println("eyes before his feet. Flowed up the");
                // display.setCursor(5, 41);
      // display.println("hill and down King William Street, To");
                // display.setCursor(5, 53);
      // display.println("where Saint Mary Woolnoth kept the");
                // display.setCursor(5, 65);
      // display.println("hours With a dead sound on the final");
                // display.setCursor(27, 77);
      // display.println("nine");
                // display.setCursor(11, 192);
      // display.println("- T S Eliot, The Waste Land ");
          return;
      } // end switch (option)

    // Codegen for 09:01 for 1 quotations:
    case 541:
      Serial.println(F("Only one option for 09:01:"));
    Serial.println(F("09:01 - 9:01am lay in bed, staring at ceiling. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9:01am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:02 for 1 quotations:
    case 542:
      Serial.println(F("Only one option for 09:02:"));
    Serial.println(F("09:02 - 9:02am lay in bed, staring at ceiling. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9:02am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:03 for 2 quotations:
    case 543:
      option = random(0, 2);
      Serial.print(F("2 options for 09:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:03 - 9:03am lay in bed, staring at ceiling. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
                // display.setCursor(5, 5);
      // display.println("9:03am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 1:
          Serial.println(F("09:03 - I wasn't late. Okay, the school bell had rung as I was crossing the playground, but you always get five minutes to get to your classroom. \"It's three minutes past nine,\" Miss Beckworth announced. \"You're late.\" - Jacqueline Wilson, The Lottie Project "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I wasn't late. Okay, the school");
                // display.setCursor(5, 17);
      // display.println("bell had rung as I was crossing the");
                // display.setCursor(5, 29);
      // display.println("playground, but you always get five minutes");
                // display.setCursor(5, 41);
      // display.println("to get to your classroom. \"It's");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING,\" Miss Beckworth announced.");
                // display.setCursor(5, 53);
      // display.println("three minutes past nine");
                // display.setCursor(67, 192);
      // display.println("- The Lottie Project");
          return;
      } // end switch (option)

    // Codegen for 09:04 for 2 quotations:
    case 544:
      option = random(0, 2);
      Serial.print(F("2 options for 09:04. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:04 - 9:04am lay in bed, staring at ceiling - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
                // display.setCursor(5, 5);
      // display.println("9:04am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 1:
          Serial.println(F("09:04 - In the light of a narrow-beam lantern, Pierce checked his watch. It was 9.04. - Michael Crichton, The Great Train Robbery"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("In the light of a narrow-beam");
                // display.setCursor(5, 17);
      // display.println("lantern, Pierce checked his watch. It");
                // display.setCursor(9, 29);
      // display.println("9.04");
                // display.setCursor(32, 192);
      // display.println("- The Great Train Robbery");
          return;
      } // end switch (option)

    // Codegen for 09:05 for 4 quotations:
    case 545:
      option = random(0, 4);
      Serial.print(F("4 options for 09:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:05 - 9:05am lay in bed, staring at ceiling - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
                // display.setCursor(5, 5);
      // display.println("9:05am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 1:
          Serial.println(F("09:05 - Kaldren pursues me like luminescent shadow. He has chalked up on the gateway '96,688,365,498,702'. Should confuse the mail man. Woke 9:05. To sleep 6:36. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Kaldren pursues me like");
                // display.setCursor(5, 17);
      // display.println("luminescent shadow. He has chalked up on the");
                // display.setCursor(5, 29);
      // display.println("gateway '96,688,365,498,702'. Should");
                // display.setCursor(5, 41);
      // display.println("confuse the mail man. Woke");
                // display.setCursor(122, 41);
      // display.println("9:05");
                // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
          return;
        case 2:
          Serial.println(F("09:05 - The tour of the office doesn't take that long. In fact, we're pretty much done by 9:05 a.m. … and even though it's just a room with a window and a pin board and two doors and two desks... I can't help feeling a buzz as I lead them around. It's mine. My space. My company. - Sophie Kinsella, Twenties Girl "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The tour of the office doesn't");
                // display.setCursor(5, 17);
      // display.println("take that long. In fact, we're pretty");
                // display.setCursor(5, 29);
      // display.println("much done by TIMESTRING …");
                // display.setCursor(5, 41);
      // display.println("and even though it's just a room with");
                // display.setCursor(5, 53);
      // display.println("a window and a pin board and two");
                // display.setCursor(5, 65);
      // display.println("doors and two desks... I can't help");
                // display.setCursor(5, 77);
      // display.println("feeling a buzz as I lead them around.");
                // display.setCursor(54, 29);
      // display.println("9:05 a.m.");
                // display.setCursor(102, 192);
      // display.println("- Twenties Girl");
          return;
        case 3:
          Serial.println(F("09:05 - The tour of the office doesn't take that long. In fact, we're pretty much done by 9:05 a.m. Ed looks at everything twice and says it's all great, and gives me a list of contacts who might be helpful, then has to leave for his own office. - Sophie Kinsella, Twenties Girl"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The tour of the office doesn't");
                // display.setCursor(5, 17);
      // display.println("take that long. In fact, we're pretty");
                // display.setCursor(5, 29);
      // display.println("much done by TIMESTRING Ed");
                // display.setCursor(5, 41);
      // display.println("looks at everything twice and says");
                // display.setCursor(5, 53);
      // display.println("it's all great, and gives me a list of");
                // display.setCursor(5, 65);
      // display.println("contacts who might be helpful, then has");
                // display.setCursor(54, 29);
      // display.println("9:05 a.m.");
                // display.setCursor(102, 192);
      // display.println("- Twenties Girl");
          return;
      } // end switch (option)

    // Codegen for 09:06 for 1 quotations:
    case 546:
      Serial.println(F("Only one option for 09:06:"));
    Serial.println(F("09:06 - 9:06am lay in bed, staring at ceiling - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9:06am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:07 for 2 quotations:
    case 547:
      option = random(0, 2);
      Serial.print(F("2 options for 09:07. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:07 - 9:07am lay in bed, staring at ceiling - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
                // display.setCursor(5, 5);
      // display.println("9:07am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 1:
          Serial.println(F("09:07 - It was a sparkling morning, 9:07 by the clock when Mrs. Flett stepped aboard the Imperial Limited at the Tyndall station, certain that her life was ruined, but managing, through an effort of will, to hold herself erect and to affect an air of preoccupation and liveliness. - Carol Shields, The Stone Diaries"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was a sparkling morning,");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING by the clock when Mrs. Flett");
                // display.setCursor(5, 29);
      // display.println("stepped aboard the Imperial Limited at");
                // display.setCursor(5, 41);
      // display.println("the Tyndall station, certain that");
                // display.setCursor(5, 53);
      // display.println("her life was ruined, but managing,");
                // display.setCursor(5, 65);
      // display.println("through an effort of will, to hold");
                // display.setCursor(5, 77);
      // display.println("herself erect and to affect an air of");
                // display.setCursor(171, 5);
      // display.println("9:07");
                // display.setCursor(74, 192);
      // display.println("- The Stone Diaries");
          return;
      } // end switch (option)

    // Codegen for 09:08 for 1 quotations:
    case 548:
      Serial.println(F("Only one option for 09:08:"));
    Serial.println(F("09:08 - 9.08am rolled over onto left side. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING rolled over");
          // display.setCursor(5, 5);
      // display.println("9.08am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:09 for 1 quotations:
    case 549:
      Serial.println(F("Only one option for 09:09:"));
    Serial.println(F("09:09 - 9.09am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9.09am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:10 for 1 quotations:
    case 550:
      Serial.println(F("Only one option for 09:10:"));
    Serial.println(F("09:10 - 9.10am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9.10am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:11 for 1 quotations:
    case 551:
      Serial.println(F("Only one option for 09:11:"));
    Serial.println(F("09:11 - 9:11am lay in bed, staring at wall - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9:11am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:12 for 1 quotations:
    case 552:
      Serial.println(F("Only one option for 09:12:"));
    Serial.println(F("09:12 - 9.12am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9.12am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:13 for 2 quotations:
    case 553:
      option = random(0, 2);
      Serial.print(F("2 options for 09:13. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:13 - 9:13am lay in bed, staring at wall - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
                // display.setCursor(5, 5);
      // display.println("9:13am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 1:
          Serial.println(F("09:13 - She tucked the phone in the crook of her neck and thumbed hurriedly through her pink messages. Dr. Provetto, at 9:13 A.M. - Lisas Scottoline, Mistaken Identity"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She tucked the phone in the crook");
                // display.setCursor(5, 17);
      // display.println("of her neck and thumbed hurriedly");
                // display.setCursor(5, 29);
      // display.println("through her pink messages. Dr.");
                // display.setCursor(30, 41);
      // display.println("9:13 A.M.");
                // display.setCursor(74, 192);
      // display.println("- Mistaken Identity");
          return;
      } // end switch (option)

    // Codegen for 09:14 for 1 quotations:
    case 554:
      Serial.println(F("Only one option for 09:14:"));
    Serial.println(F("09:14 - 9.14am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING lay in bed,");
          // display.setCursor(5, 5);
      // display.println("9.14am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:15 for 4 quotations:
    case 555:
      option = random(0, 4);
      Serial.print(F("4 options for 09:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:15 - Great! Jones commented. \"I've never seen it do that before. That's all right. Okay.\" Jones pulled a handful of pencils from his back pocket. \"Now, I got the contact first at 0915 or so, and the bearing was about two-six-nine.\" - Tom Clancy, The Hunt for Red October "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Great! Jones commented. \"I've");
                // display.setCursor(5, 17);
      // display.println("never seen it do that before. That's");
                // display.setCursor(5, 29);
      // display.println("all right. Okay.\" Jones pulled a");
                // display.setCursor(5, 41);
      // display.println("handful of pencils from his back");
                // display.setCursor(5, 53);
      // display.println("pocket. \"Now, I got the contact first");
                // display.setCursor(5, 65);
      // display.println("at 0TIMESTRING or so, and the");
                // display.setCursor(8, 65);
      // display.println("915");
                // display.setCursor(25, 192);
      // display.println("- The Hunt for Red October");
          return;
        case 1:
          Serial.println(F("09:15 - 9:15am doubled over pillow, sat up to see out window - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING doubled over");
                // display.setCursor(5, 5);
      // display.println("9:15am");
                // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
          return;
        case 2:
          Serial.println(F("09:15 - 9.15 a.m. First morning class - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING First");
                // display.setCursor(5, 5);
      // display.println("9.15 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 3:
          Serial.println(F("09:15 - Miss Pettigrew pushed open the door of the employment agency and went in as the clock struck a quarter past nine. - Winifred Watson, Miss Pettigrew Lives For a Day"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Miss Pettigrew pushed open the");
                // display.setCursor(5, 17);
      // display.println("door of the employment agency and");
                // display.setCursor(5, 29);
      // display.println("went in as the clock struck a");
                // display.setCursor(5, 41);
      // display.println("quarter past nine");
                // display.setCursor(88, 192);
      // display.println("- Winifred Watson");
          return;
      } // end switch (option)

    // Codegen for 09:16 for 1 quotations:
    case 556:
      Serial.println(F("Only one option for 09:16:"));
    Serial.println(F("09:16 - 9.16am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING sat in bed,");
          // display.setCursor(5, 5);
      // display.println("9.16am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:17 for 1 quotations:
    case 557:
      Serial.println(F("Only one option for 09:17:"));
    Serial.println(F("09:17 - 9.17am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING sat in bed,");
          // display.setCursor(5, 5);
      // display.println("9.17am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:18 for 1 quotations:
    case 558:
      Serial.println(F("Only one option for 09:18:"));
    Serial.println(F("09:18 - 9.18am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING sat in bed,");
          // display.setCursor(5, 5);
      // display.println("9.18am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:19 for 1 quotations:
    case 559:
      Serial.println(F("Only one option for 09:19:"));
    Serial.println(F("09:19 - 9.19am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING sat in bed,");
          // display.setCursor(5, 5);
      // display.println("9.19am");
          // display.setCursor(32, 192);
      // display.println("- A Fraction of the Whole");
      return;

    // Codegen for 09:20 for 3 quotations:
    case 560:
      option = random(0, 3);
      Serial.print(F("3 options for 09:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:20 - I'll compromise by saying that I left home at eight and spent an hour travelling to a nine o'clock appointment. Twenty minutes later is nine-twenty. - Susanna Kaysen, Girl, Interrupted "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I'll compromise by saying that I");
                // display.setCursor(5, 17);
      // display.println("left home at eight and spent an hour");
                // display.setCursor(5, 29);
      // display.println("travelling to a nine o'clock appointment.");
                // display.setCursor(5, 41);
      // display.println("Twenty minutes later is");
                // display.setCursor(113, 41);
      // display.println("nine-twenty");
                // display.setCursor(74, 192);
      // display.println("- Girl, Interrupted");
          return;
        case 1:
          Serial.println(F("09:20 - At twenty minutes past nine, the Duke of Dunstable, who had dined off a tray in his room, was still there, waiting for his coffee and liqueur. - P.G. Wodehouse, Uncle Fred in the Springtime "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, the Duke of Dunstable, who had");
                // display.setCursor(5, 29);
      // display.println("dined off a tray in his room, was still");
                // display.setCursor(5, 41);
      // display.println("there, waiting for his coffee and");
                // display.setCursor(20, 5);
      // display.println("twenty minutes past nine");
                // display.setCursor(95, 192);
      // display.println("- P.G. Wodehouse");
          return;
        case 2:
          Serial.println(F("09:20 - The following morning at 9.20 Mr Cribbage straightened his greasy old tie, combed his Hitler moustache and arranged the few strands of his hair across his bald patch. - Louis de Bernieres, Red Dog "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The following morning at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING Mr Cribbage straightened his");
                // display.setCursor(5, 29);
      // display.println("greasy old tie, combed his Hitler");
                // display.setCursor(5, 41);
      // display.println("moustache and arranged the few strands of");
                // display.setCursor(156, 5);
      // display.println("9.20");
                // display.setCursor(144, 192);
      // display.println("- Red Dog");
          return;
      } // end switch (option)

    // Codegen for 09:21 for 1 quotations:
    case 561:
      Serial.println(F("Only one option for 09:21:"));
    Serial.println(F("09:21 - It was nine twenty-one. With one minute to go, there was no sign of Herbert's mother. - Dan Rhodes, This is Life"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. With one minute to go, there was");
          // display.setCursor(42, 5);
      // display.println("nine twenty-one");
          // display.setCursor(25, 192);
      // display.println("- Dan Rhodes, This is Life");
      return;

    // Codegen for 09:22 for 1 quotations:
    case 562:
      Serial.println(F("Only one option for 09:22:"));
    Serial.println(F("09:22 - No more throwing stones at him, and I'll see you back here exactly one week from now. She looked at her watch. 'At nine twenty-two next Wednesday.' - Dan Rhodes, This is Life"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("No more throwing stones at him,");
          // display.setCursor(5, 17);
      // display.println("and I'll see you back here exactly");
          // display.setCursor(5, 29);
      // display.println("one week from now. She looked at her");
          // display.setCursor(5, 41);
      // display.println("watch. 'At");
          // display.setCursor(34, 41);
      // display.println("nine twenty-two");
          // display.setCursor(25, 192);
      // display.println("- Dan Rhodes, This is Life");
      return;

    // Codegen for 09:23 for 1 quotations:
    case 563:
      Serial.println(F("Only one option for 09:23:"));
    Serial.println(F("09:23 - 9.23. What possessed me to buy this comb? - James Joyce, Ulysses"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING. What possessed");
          // display.setCursor(5, 5);
      // display.println("9.23");
          // display.setCursor(53, 192);
      // display.println("- James Joyce, Ulysses");
      return;

    // Codegen for 09:24 for 1 quotations:
    case 564:
      Serial.println(F("Only one option for 09:24:"));
    Serial.println(F("09:24 - 9.24 I'm swelled after that cabbage. A speck of dust on the patent leather of her boot. - James Joyce, Ulysses"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING I'm swelled");
          // display.setCursor(5, 17);
      // display.println("after that cabbage. A speck of dust on");
          // display.setCursor(5, 5);
      // display.println("9.24");
          // display.setCursor(53, 192);
      // display.println("- James Joyce, Ulysses");
      return;

    // Codegen for 09:25 for 1 quotations:
    case 565:
      Serial.println(F("Only one option for 09:25:"));
    Serial.println(F("09:25 - A man I would cross the street to avoid at nine o'clock - by nine twenty-five I wanted to fuck him until he wept. My legs trembled with it. - Anne Enright, The Forgotten Waltz "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A man I would cross the street to");
          // display.setCursor(5, 17);
      // display.println("avoid at nine o'clock - by");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING I");
          // display.setCursor(5, 41);
      // display.println("wanted to fuck him until he wept. My");
          // display.setCursor(5, 29);
      // display.println("nine twenty-five");
          // display.setCursor(60, 192);
      // display.println("- The Forgotten Waltz");
      return;

    // Codegen for 09:26 for 0 quotations:
    case 566:
      Serial.println(F("No quotes for 09:26"));
      return;

    // Codegen for 09:27 for 1 quotations:
    case 567:
      Serial.println(F("Only one option for 09:27:"));
    Serial.println(F("09:27 - From twenty minutes past nine until twenty-seven minutes past nine, the heroes of the school met in a large familiarity - Compton Mackenzie, Sinister Street"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("From twenty minutes past nine");
          // display.setCursor(5, 17);
      // display.println("until");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING, the heroes of the school met in");
          // display.setCursor(5, 29);
      // display.println("twenty-seven minutes past nine");
          // display.setCursor(88, 192);
      // display.println("- Sinister Street");
      return;

    // Codegen for 09:28 for 1 quotations:
    case 568:
      Serial.println(F("Only one option for 09:28:"));
    Serial.println(F("09:28 - This clock right? he asked the butler in the hall. \"Yes, sir.\" The clock showed twenty-eight minutes past nine. \"The clocks here have to be right, sir,\" the butler added with pride and a respectful humour, on the stairs. - Arnold Bennett, Lord Raingo"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("This clock right? he asked the");
          // display.setCursor(5, 17);
      // display.println("butler in the hall. \"Yes, sir.\" The");
          // display.setCursor(5, 29);
      // display.println("clock showed");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING. \"The clocks here have to be");
          // display.setCursor(5, 65);
      // display.println("right, sir,\" the butler added with");
          // display.setCursor(5, 77);
      // display.println("pride and a respectful humour, on the");
          // display.setCursor(5, 41);
      // display.println("twenty-eight minutes past nine");
          // display.setCursor(4, 192);
      // display.println("- Arnold Bennett, Lord Raingo");
      return;

    // Codegen for 09:29 for 0 quotations:
    case 569:
      Serial.println(F("No quotes for 09:29"));
      return;

    // Codegen for 09:30 for 4 quotations:
    case 570:
      option = random(0, 4);
      Serial.print(F("4 options for 09:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:30 - he looked at his watch; it was half-past nine - Ambrose Bierce, A watcher by the dead "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("he looked at his watch; it was");
                // display.setCursor(5, 17);
      // display.println("half-past nine");
                // display.setCursor(46, 192);
      // display.println("- A watcher by the dead");
          return;
        case 1:
          Serial.println(F("09:30 - It was nine-thirty. In another ten minutes she would turn off the heat; then it would take a while for the water to cool. In the meantime there was nothing to do but wait. \"Have you thought it through April?\" - Richard Yates, Revolutionary Road "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING.");
                // display.setCursor(5, 17);
      // display.println("In another ten minutes she would");
                // display.setCursor(5, 29);
      // display.println("turn off the heat; then it would take");
                // display.setCursor(5, 41);
      // display.println("a while for the water to cool. In");
                // display.setCursor(5, 53);
      // display.println("the meantime there was nothing to do");
                // display.setCursor(5, 65);
      // display.println("but wait. \"Have you thought it");
                // display.setCursor(42, 5);
      // display.println("nine-thirty");
                // display.setCursor(67, 192);
      // display.println("- Revolutionary Road");
          return;
        case 2:
          Serial.println(F("09:30 - The body came in at nine-thirty this morning. One of Holding's men went to the house and collected it. There was nothing particularly unusual about the death. The man had had a fear of hospitals and had died at home, being cared for more than adequately by his devoted wife. - Jackie Kay, Trumpet"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The body came in at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING this morning. One of Holding's");
                // display.setCursor(5, 29);
      // display.println("men went to the house and collected");
                // display.setCursor(5, 41);
      // display.println("it. There was nothing particularly");
                // display.setCursor(5, 53);
      // display.println("unusual about the death. The man had had");
                // display.setCursor(5, 65);
      // display.println("a fear of hospitals and had died at");
                // display.setCursor(5, 77);
      // display.println("home, being cared for more than");
                // display.setCursor(115, 5);
      // display.println("nine-thirty");
                // display.setCursor(60, 192);
      // display.println("- Jackie Kay, Trumpet");
          return;
        case 3:
          Serial.println(F("09:30 - Up the welcomingly warm morning hill we trudge, side by each, bound finally for the Hall of Fame. It's 9.30, and time is in fact a-wastin'. - Richard Ford, Independence Day "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Up the welcomingly warm morning");
                // display.setCursor(5, 17);
      // display.println("hill we trudge, side by each, bound");
                // display.setCursor(5, 29);
      // display.println("finally for the Hall of Fame. It's");
                // display.setCursor(166, 29);
      // display.println("9.30");
                // display.setCursor(81, 192);
      // display.println("- Independence Day");
          return;
      } // end switch (option)

    // Codegen for 09:31 for 0 quotations:
    case 571:
      Serial.println(F("No quotes for 09:31"));
      return;

    // Codegen for 09:32 for 2 quotations:
    case 572:
      option = random(0, 2);
      Serial.print(F("2 options for 09:32. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:32 - Anyhow, if he wasn't the 11.5 for Kingston, he said he was pretty confident he was the 9.32 for Virginia Water, or the 10 a.m. express for the Isle of Wight, or somewhere in that direction, and we should all know when we got there. - Jerome K Jerome, Three Men in a Boat"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Anyhow, if he wasn't the 11.5 for");
                // display.setCursor(5, 17);
      // display.println("Kingston, he said he was pretty confident");
                // display.setCursor(5, 29);
      // display.println("he was the TIMESTRING for");
                // display.setCursor(5, 41);
      // display.println("Virginia Water, or the 10 a.m. express");
                // display.setCursor(5, 53);
      // display.println("for the Isle of Wight, or somewhere");
                // display.setCursor(5, 65);
      // display.println("in that direction, and we should");
                // display.setCursor(52, 29);
      // display.println("9.32");
                // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
          return;
        case 1:
          Serial.println(F("09:32 - Sandy barely made the nine-thirty-two and found a seat in no-smoking. She'd been looking forward to this visit with Lisbeth. - Judy Blume, Wifey "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sandy barely made the");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING and");
                // display.setCursor(5, 29);
      // display.println("found a seat in no-smoking. She'd been");
                // display.setCursor(5, 41);
      // display.println("looking forward to this visit with");
                // display.setCursor(5, 17);
      // display.println("nine-thirty-two");
                // display.setCursor(67, 192);
      // display.println("- Judy Blume, Wifey ");
          return;
      } // end switch (option)

    // Codegen for 09:33 for 1 quotations:
    case 573:
      Serial.println(F("Only one option for 09:33:"));
    Serial.println(F("09:33 - .. and that consequently high water would be at twenty-one minutes past three, the half-ebb at a quarter past seven, low water at thirty-three minutes past nine, and half flood at thirty-nine minutes past twelve. - Victor Hugo, The Toilers of the Sea"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println(".. and that consequently high");
          // display.setCursor(5, 17);
      // display.println("water would be at twenty-one minutes");
          // display.setCursor(5, 29);
      // display.println("past three, the half-ebb at a quarter");
          // display.setCursor(5, 41);
      // display.println("past seven, low water at");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, and half flood at thirty-nine");
          // display.setCursor(5, 53);
      // display.println("thirty-three minutes past nine");
          // display.setCursor(39, 192);
      // display.println("- The Toilers of the Sea");
      return;

    // Codegen for 09:34 for 0 quotations:
    case 574:
      Serial.println(F("No quotes for 09:34"));
      return;

    // Codegen for 09:35 for 1 quotations:
    case 575:
      Serial.println(F("Only one option for 09:35:"));
    Serial.println(F("09:35 - Nine-thirty-five. He really must be gone. The bird is no longer feeding but sitting at the apex of a curl of razor wire. - Aminatta Forna, The Memory of Love"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING.");
          // display.setCursor(5, 17);
      // display.println("He really must be gone. The bird is");
          // display.setCursor(5, 29);
      // display.println("no longer feeding but sitting at");
          // display.setCursor(5, 5);
      // display.println("Nine-thirty-five");
          // display.setCursor(67, 192);
      // display.println("- The Memory of Love");
      return;

    // Codegen for 09:36 for 2 quotations:
    case 576:
      option = random(0, 2);
      Serial.print(F("2 options for 09:36. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:36 - 9:30-9:36 Make Geigers' bed 9:36-9:42 Take laundry out of machine and put in dryer 9:42-10:00 Clean bathrooms I get to the end and read it over with a fresh surge of optimism. At this rate I should be done easily by lunchtime. 9:36 Fuck. I cannot make this bed. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("9:30-TIMESTRING Make");
                // display.setCursor(5, 17);
      // display.println("Geigers' bed TIMESTRING-9:42 Take");
                // display.setCursor(5, 29);
      // display.println("laundry out of machine and put in dryer");
                // display.setCursor(5, 41);
      // display.println("9:42-10:00 Clean bathrooms I get to the end");
                // display.setCursor(5, 53);
      // display.println("and read it over with a fresh surge of");
                // display.setCursor(5, 65);
      // display.println("optimism. At this rate I should be done");
                // display.setCursor(5, 77);
      // display.println("easily by lunchtime. TIMESTRING");
                // display.setCursor(98, 77);
      // display.println("9:36");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("09:36 - Monday February 6th. '9.36am. Oh god, Oh god. Maybe he's fallen in love in New York and stayed there'. - Helen Fielding, Bridget Jones Diary"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Monday February 6th.");
                // display.setCursor(5, 17);
      // display.println("'TIMESTRING Oh god, Oh god. Maybe he's");
                // display.setCursor(5, 29);
      // display.println("fallen in love in New York and stayed");
                // display.setCursor(134, 5);
      // display.println("9.36am.");
                // display.setCursor(60, 192);
      // display.println("- Bridget Jones Diary");
          return;
      } // end switch (option)

    // Codegen for 09:37 for 1 quotations:
    case 577:
      Serial.println(F("Only one option for 09:37:"));
    Serial.println(F("09:37 - ... all the details of service, the tea and toast at twenty-three minutes past eight, the shaving-water at thirty-seven minutes past nine, and the toilet at twenty minutes before ten. - Jules Verne, Around the World in 80 days"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... all the details of service,");
          // display.setCursor(5, 17);
      // display.println("the tea and toast at twenty-three");
          // display.setCursor(5, 29);
      // display.println("minutes past eight, the shaving-water");
          // display.setCursor(5, 41);
      // display.println("at");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, and the toilet at twenty");
          // display.setCursor(5, 53);
      // display.println("thirty-seven minutes past nine");
          // display.setCursor(4, 192);
      // display.println("- Around the World in 80 days");
      return;

    // Codegen for 09:38 for 0 quotations:
    case 578:
      Serial.println(F("No quotes for 09:38"));
      return;

    // Codegen for 09:39 for 0 quotations:
    case 579:
      Serial.println(F("No quotes for 09:39"));
      return;

    // Codegen for 09:40 for 2 quotations:
    case 580:
      option = random(0, 2);
      Serial.print(F("2 options for 09:40. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:40 - ... the tea and toast at twenty-three minutes past eight, the shaving-water at thirty-seven minutes past nine, and the toilet at twenty minutes before ten. - Jules Verne, Around the World in 80 days"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... the tea and toast at");
                // display.setCursor(5, 17);
      // display.println("twenty-three minutes past eight, the");
                // display.setCursor(5, 29);
      // display.println("shaving-water at thirty-seven minutes past");
                // display.setCursor(5, 41);
      // display.println("nine, and the toilet at");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("twenty minutes before ten");
                // display.setCursor(4, 192);
      // display.println("- Around the World in 80 days");
          return;
        case 1:
          Serial.println(F("09:40 - What does he think I'd do with all that cement? Just the sort of irritating thing you don't expect to hang over your final exit. (Moral: don't try too hard to forget Eniwetok.) Woke 9:40. To sleep 4:15. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What does he think I'd do with all");
                // display.setCursor(5, 17);
      // display.println("that cement? Just the sort of");
                // display.setCursor(5, 29);
      // display.println("irritating thing you don't expect to hang");
                // display.setCursor(5, 41);
      // display.println("over your final exit. (Moral: don't");
                // display.setCursor(5, 53);
      // display.println("try too hard to forget Eniwetok.)");
                // display.setCursor(10, 65);
      // display.println("9:40");
                // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
          return;
      } // end switch (option)

    // Codegen for 09:41 for 0 quotations:
    case 581:
      Serial.println(F("No quotes for 09:41"));
      return;

    // Codegen for 09:42 for 1 quotations:
    case 582:
      Serial.println(F("Only one option for 09:42:"));
    Serial.println(F("09:42 - 9:30-9:36 Make Geigers' bed 9:36-9:42 Take laundry out of machine and put in dryer 9:42-10:00 Clean bathrooms I get to the end and read it over with a fresh surge of optimism. At this rate I should be done easily by lunchtime. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("9:30-9:36 Make Geigers' bed");
          // display.setCursor(5, 17);
      // display.println("9:36-TIMESTRING Take laundry out of machine");
          // display.setCursor(5, 29);
      // display.println("and put in dryer");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING-10:00 Clean bathrooms I get to the");
          // display.setCursor(5, 53);
      // display.println("end and read it over with a fresh");
          // display.setCursor(5, 65);
      // display.println("surge of optimism. At this rate I");
          // display.setCursor(82, 29);
      // display.println("9:42");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 09:43 for 0 quotations:
    case 583:
      Serial.println(F("No quotes for 09:43"));
      return;

    // Codegen for 09:44 for 0 quotations:
    case 584:
      Serial.println(F("No quotes for 09:44"));
      return;

    // Codegen for 09:45 for 1 quotations:
    case 585:
      Serial.println(F("Only one option for 09:45:"));
    Serial.println(F("09:45 - 9.15, 9.30, 9.45, 10! Bond felt the excitement ball up inside him like cat's fur. - Ian Fleming, On Her Majesty's Secret Service "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("9.15, 9.30, TIMESTRING, 10!");
          // display.setCursor(5, 17);
      // display.println("Bond felt the excitement ball up");
          // display.setCursor(77, 5);
      // display.println("9.45");
          // display.setCursor(116, 192);
      // display.println("- Ian Fleming");
      return;

    // Codegen for 09:46 for 0 quotations:
    case 586:
      Serial.println(F("No quotes for 09:46"));
      return;

    // Codegen for 09:47 for 1 quotations:
    case 587:
      Serial.println(F("Only one option for 09:47:"));
    Serial.println(F("09:47 - Monday February 6th. '9.47am. Or gone to Las Vegas and got married'. - Helen Fielding, Bridget Jones Diary"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Monday February 6th.");
          // display.setCursor(5, 17);
      // display.println("'TIMESTRING Or gone to Las Vegas and got");
          // display.setCursor(134, 5);
      // display.println("9.47am.");
          // display.setCursor(60, 192);
      // display.println("- Bridget Jones Diary");
      return;

    // Codegen for 09:48 for 0 quotations:
    case 588:
      Serial.println(F("No quotes for 09:48"));
      return;

    // Codegen for 09:49 for 0 quotations:
    case 589:
      Serial.println(F("No quotes for 09:49"));
      return;

    // Codegen for 09:50 for 2 quotations:
    case 590:
      option = random(0, 2);
      Serial.print(F("2 options for 09:50. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:50 - 9.50am. Hmmm. Think will go inspect make-up in case he does come in - Helen Fielding, Bridget Jones Diary"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Hmmm. Think");
                // display.setCursor(5, 17);
      // display.println("will go inspect make-up in case he");
                // display.setCursor(5, 5);
      // display.println("9.50am.");
                // display.setCursor(60, 192);
      // display.println("- Bridget Jones Diary");
          return;
        case 1:
          Serial.println(F("09:50 - Ten minutes to ten. I had just time to hide the bottle (after the nurse had left me) when you came into my room. - Wilkie Collins, The Law and the Lady "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING I had just time to hide the");
                // display.setCursor(5, 29);
      // display.println("bottle (after the nurse had left me)");
                // display.setCursor(5, 5);
      // display.println("Ten minutes to ten.");
                // display.setCursor(53, 192);
      // display.println("- The Law and the Lady");
          return;
      } // end switch (option)

    // Codegen for 09:51 for 0 quotations:
    case 591:
      Serial.println(F("No quotes for 09:51"));
      return;

    // Codegen for 09:52 for 1 quotations:
    case 592:
      Serial.println(F("Only one option for 09:52:"));
    Serial.println(F("09:52 - She caught the 9:52 to Victoria. I kept well clear of her on the train and picked her up as she went through the barrier. Then she took a taxi to Hammersmith. - John le Carre, Call for the Dead"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She caught the TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("to Victoria. I kept well clear of");
          // display.setCursor(5, 29);
      // display.println("her on the train and picked her up as");
          // display.setCursor(5, 41);
      // display.println("she went through the barrier. Then");
          // display.setCursor(92, 5);
      // display.println("9:52");
          // display.setCursor(74, 192);
      // display.println("- Call for the Dead");
      return;

    // Codegen for 09:53 for 1 quotations:
    case 593:
      Serial.println(F("Only one option for 09:53:"));
    Serial.println(F("09:53 - The bus deposited her about five minutes' walk from Onslow Mansions, an at seven minutes to ten precisely she was outside her destination. - Winifred Watson, Miss Pettigrew Lives for a Day "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The bus deposited her about five");
          // display.setCursor(5, 17);
      // display.println("minutes' walk from Onslow Mansions, an");
          // display.setCursor(5, 29);
      // display.println("at");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING precisely she was outside her");
          // display.setCursor(8, 29);
      // display.println("seven minutes to ten");
          // display.setCursor(88, 192);
      // display.println("- Winifred Watson");
      return;

    // Codegen for 09:54 for 1 quotations:
    case 594:
      Serial.println(F("Only one option for 09:54:"));
    Serial.println(F("09:54 - 9:54 This is sheer torture. My arms have never ached so much in my entire life. The blankets weigh a ton, and the sheets won't go straight and I have no idea how to do the wretched corners. How do chambermaids do it? - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING This is sheer");
          // display.setCursor(5, 17);
      // display.println("torture. My arms have never ached so much");
          // display.setCursor(5, 29);
      // display.println("in my entire life. The blankets");
          // display.setCursor(5, 41);
      // display.println("weigh a ton, and the sheets won't go");
          // display.setCursor(5, 53);
      // display.println("straight and I have no idea how to do the");
          // display.setCursor(5, 65);
      // display.println("wretched corners. How do chambermaids");
          // display.setCursor(5, 5);
      // display.println("9:54");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 09:55 for 2 quotations:
    case 595:
      option = random(0, 2);
      Serial.print(F("2 options for 09:55. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:55 - At five to ten I'm ready in the hall. Nathaniel's mother's house is nearby but apparently tricky to find, so the plan is to meet here and he'll walk me over. I check my reflection in the hall mirror and wince. The streak of bleach in my hair is as obvious as ever. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING I'm");
                // display.setCursor(5, 17);
      // display.println("ready in the hall. Nathaniel's");
                // display.setCursor(5, 29);
      // display.println("mother's house is nearby but apparently");
                // display.setCursor(5, 41);
      // display.println("tricky to find, so the plan is to meet");
                // display.setCursor(5, 53);
      // display.println("here and he'll walk me over. I check");
                // display.setCursor(5, 65);
      // display.println("my reflection in the hall mirror");
                // display.setCursor(5, 77);
      // display.println("and wince. The streak of bleach in my");
                // display.setCursor(20, 5);
      // display.println("five to ten");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("09:55 - Good-morning, Lucien, good-morning, said Albert; \"your punctuality really alarms me. What do I say? punctuality! You, whom I expected last, you arrive at five minutes to ten, when the time fixed was half-past! Has the ministry resigned?\" - Alexandre Dumas, The Count of Monte Cristo"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Good-morning, Lucien,");
                // display.setCursor(5, 17);
      // display.println("good-morning, said Albert; \"your");
                // display.setCursor(5, 29);
      // display.println("punctuality really alarms me. What do I say?");
                // display.setCursor(5, 41);
      // display.println("punctuality! You, whom I expected last, you");
                // display.setCursor(5, 53);
      // display.println("arrive at");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING, when the time fixed was");
                // display.setCursor(27, 53);
      // display.println("five minutes to ten");
                // display.setCursor(18, 192);
      // display.println("- The Count of Monte Cristo");
          return;
      } // end switch (option)

    // Codegen for 09:56 for 0 quotations:
    case 596:
      Serial.println(F("No quotes for 09:56"));
      return;

    // Codegen for 09:57 for 0 quotations:
    case 597:
      Serial.println(F("No quotes for 09:57"));
      return;

    // Codegen for 09:58 for 1 quotations:
    case 598:
      Serial.println(F("Only one option for 09:58:"));
    Serial.println(F("09:58 - I didn't sleep too long, because I think it was only around ten o'clock when I woke up. - J.D. Salinger, Catcher in the Rye"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I didn't sleep too long, because");
          // display.setCursor(5, 17);
      // display.println("I think it was only");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("around ten o'clock");
          // display.setCursor(67, 192);
      // display.println("- Catcher in the Rye");
      return;

    // Codegen for 09:59 for 1 quotations:
    case 599:
      Serial.println(F("Only one option for 09:59:"));
    Serial.println(F("09:59 - One minute to ten. With a heavy heart Bert watched the clock. His legs were still aching very badly. He could not see the hands of the clock moving, but they were creeping on all the same. - Robert Tressell, The Ragged Trouserred Philanthropists"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING");
          // display.setCursor(5, 17);
      // display.println("With a heavy heart Bert watched the");
          // display.setCursor(5, 29);
      // display.println("clock. His legs were still aching very");
          // display.setCursor(5, 41);
      // display.println("badly. He could not see the hands of the");
          // display.setCursor(5, 53);
      // display.println("clock moving, but they were creeping");
          // display.setCursor(5, 5);
      // display.println("One minute to ten.");
          // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
      return;

    // Codegen for 10:00 for 14 quotations:
    case 600:
      option = random(0, 14);
      Serial.print(F("14 options for 10:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:00 - ––so that went off too: ––So that with one thing and what with another, as always falls out when a man is in the most haste, ––'twas ten o'clock, which was half an hour later than his usual time before my uncle Toby sallied out. - Laurence Sterne, Tristram Shandy "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("––so that went off too: ––So that");
                // display.setCursor(5, 17);
      // display.println("with one thing and what with another,");
                // display.setCursor(5, 29);
      // display.println("as always falls out when a man is in");
                // display.setCursor(5, 41);
      // display.println("the most haste,");
                // display.setCursor(5, 53);
      // display.println("––TIMESTRING, which was half an hour later");
                // display.setCursor(5, 65);
      // display.println("than his usual time before my uncle");
                // display.setCursor(81, 41);
      // display.println("'twas ten o'clock");
                // display.setCursor(88, 192);
      // display.println("- Tristram Shandy");
          return;
        case 1:
          Serial.println(F("10:00 - ’Tis but an hour ago since it was nine, And after one hour more ‘twill be eleven. - William Shakespeare, As You Like It"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("’Tis but");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, And after one hour more ‘twill");
                // display.setCursor(5, 17);
      // display.println("an hour ago since it was nine");
                // display.setCursor(95, 192);
      // display.println("- As You Like It");
          return;
        case 2:
          Serial.println(F("10:00 - Orlando leapt as if she had been violently struck on the head. Ten times she was struck. In fact it was ten o'clock in the morning. It was the eleventh of October. It was 1928. It was the present moment. - Virginia Woolf, Orlando "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Orlando leapt as if she had been");
                // display.setCursor(5, 17);
      // display.println("violently struck on the head. Ten times");
                // display.setCursor(5, 29);
      // display.println("she was struck. In fact it was");
                // display.setCursor(5, 41);
      // display.println("TIMESTRINGo'clock in the morning. It was the");
                // display.setCursor(5, 53);
      // display.println("eleventh of October. It was 1928. It was");
                // display.setCursor(162, 29);
      // display.println("ten ");
                // display.setCursor(25, 192);
      // display.println("- Virginia Woolf, Orlando ");
          return;
        case 3:
          Serial.println(F("10:00 - The written verdict was handed down at 10:00 on Friday morning, and all that remained was a summing up from the reporters waiting in the corridor outside the district court. - Stieg Larsson, The Girl with the Dragon Tattoo "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The written verdict was handed");
                // display.setCursor(5, 17);
      // display.println("down at TIMESTRING on Friday");
                // display.setCursor(5, 29);
      // display.println("morning, and all that remained was a");
                // display.setCursor(5, 41);
      // display.println("summing up from the reporters waiting");
                // display.setCursor(5, 53);
      // display.println("in the corridor outside the");
                // display.setCursor(25, 17);
      // display.println("10:00");
                // display.setCursor(102, 192);
      // display.println("- Stieg Larsson");
          return;
        case 4:
          Serial.println(F("10:00 - According to military records no US bombers or any other kind of aircraft were flying over that region at the time, that is around 10 am on November 7,1944. - Haruki Murakami, Kafka on the shore "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("According to military records no");
                // display.setCursor(5, 17);
      // display.println("US bombers or any other kind of");
                // display.setCursor(5, 29);
      // display.println("aircraft were flying over that region at");
                // display.setCursor(5, 41);
      // display.println("the time, that is around");
                // display.setCursor(132, 41);
      // display.println("10 am");
                // display.setCursor(67, 192);
      // display.println("- Kafka on the shore");
          return;
        case 5:
          Serial.println(F("10:00 - At about ten o'clock in the morning the sun threw a bright dust-laden bar through one of the side windows, and in and out of the beam flies shot like rushing stars. - John Steinbeck, Of Mice And Men "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At about TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("in the morning the sun threw a");
                // display.setCursor(5, 29);
      // display.println("bright dust-laden bar through one of");
                // display.setCursor(5, 41);
      // display.println("the side windows, and in and out of");
                // display.setCursor(5, 53);
      // display.println("the beam flies shot like rushing");
                // display.setCursor(56, 5);
      // display.println("ten o'clock");
                // display.setCursor(88, 192);
      // display.println("- Of Mice And Men");
          return;
        case 6:
          Serial.println(F("10:00 - I went to bed and the next thing I knew I was awake again and it was getting on for ten o' clock in the morning. Ring, ring, said the telephone, ring, ring. - Russell Hoban, The Medusa Frequency "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I went to bed and the next thing I");
                // display.setCursor(5, 17);
      // display.println("knew I was awake again and it was");
                // display.setCursor(5, 29);
      // display.println("getting on for TIMESTRING");
                // display.setCursor(5, 41);
      // display.println("in the morning. Ring, ring, said");
                // display.setCursor(50, 29);
      // display.println("ten o' clock");
                // display.setCursor(53, 192);
      // display.println("- The Medusa Frequency");
          return;
        case 7:
          Serial.println(F("10:00 - By ten o'clock, the chaise and four conveyed the two from the abbey; and, after an agreeable drive of almost twenty miles, they entered Woodston, a large and populous village, in a situation not unpleasant. - Jane Austen, Northanger Abbey "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By TIMESTRING, the");
                // display.setCursor(5, 17);
      // display.println("chaise and four conveyed the two from");
                // display.setCursor(5, 29);
      // display.println("the abbey; and, after an agreeable");
                // display.setCursor(5, 41);
      // display.println("drive of almost twenty miles, they");
                // display.setCursor(5, 53);
      // display.println("entered Woodston, a large and populous");
                // display.setCursor(20, 5);
      // display.println("ten o'clock");
                // display.setCursor(81, 192);
      // display.println("- Northanger Abbey");
          return;
        case 8:
          Serial.println(F("10:00 - King Richard: Well, but what's o'clock? Buckingham: Upon the stroke of ten. - William Shakespeare, Richard III "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("King Richard: Well, but what's");
                // display.setCursor(5, 17);
      // display.println("o'clock? Buckingham: Upon the stroke of");
                // display.setCursor(5, 29);
      // display.println("ten");
                // display.setCursor(116, 192);
      // display.println("- Richard III");
          return;
        case 9:
          Serial.println(F("10:00 - Monday 30 March 1668 Up betimes, and so to the office, there to do business till about 10 o’clock - Samuel Pepys, The Diary of Samuel Pepys "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Monday 30 March 1668 Up betimes,");
                // display.setCursor(5, 17);
      // display.println("and so to the office, there to do");
                // display.setCursor(5, 29);
      // display.println("business till about");
                // display.setCursor(79, 29);
      // display.println("10 o’clock");
                // display.setCursor(18, 192);
      // display.println("- The Diary of Samuel Pepys");
          return;
        case 10:
          Serial.println(F("10:00 - On July 25th, 8:30 a.m. the bitch Novaya dies whelping. At 10 o'clock she is lowered into her cool grave, at 7:30 that same evening we see our first floes and greet them wishing they were the last. - Christoph Ransmayr, The Terrors of Ice and Darkness "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On July 25th, 8:30 a.m. the bitch");
                // display.setCursor(5, 17);
      // display.println("Novaya dies whelping. At");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING she is lowered into her cool");
                // display.setCursor(5, 41);
      // display.println("grave, at 7:30 that same evening we see");
                // display.setCursor(5, 53);
      // display.println("our first floes and greet them");
                // display.setCursor(120, 17);
      // display.println("10 o'clock");
                // display.setCursor(67, 192);
      // display.println("- Christoph Ransmayr");
          return;
        case 11:
          Serial.println(F("10:00 - The Saturday immediately preceding the examinations was a very busy day for Kennedy. At ten o' clock he was entering Willey's room; the latter had given him a key and left the room vacant by previous arrangement - Barry Unsworth, The Greeks have a word for it "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Saturday immediately");
                // display.setCursor(5, 17);
      // display.println("preceding the examinations was a very");
                // display.setCursor(5, 29);
      // display.println("busy day for Kennedy. At");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING he was");
                // display.setCursor(5, 53);
      // display.println("entering Willey's room; the latter had");
                // display.setCursor(5, 65);
      // display.println("given him a key and left the room");
                // display.setCursor(5, 41);
      // display.println("ten o' clock");
                // display.setCursor(95, 192);
      // display.println("- Barry Unsworth");
          return;
        case 12:
          Serial.println(F("10:00 - Each of us saved up sixpence. We were to meet at ten in the morning on the Canal Bridge. - James Joyce, Dubliners "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Each of us saved up sixpence. We");
                // display.setCursor(5, 17);
      // display.println("were to meet TIMESTRING in the");
                // display.setCursor(54, 17);
      // display.println("at ten");
                // display.setCursor(32, 192);
      // display.println("- James Joyce, Dubliners ");
          return;
        case 13:
          Serial.println(F("10:00 - The written verdict was handed down at 10:00 on Friday morning, and allthat remained was a summing up from the reporters waiting in the corridor outside the district court. - Stieg Larsson, The girl with the dragon tattoo "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The written verdict was handed");
                // display.setCursor(5, 17);
      // display.println("down at TIMESTRING on Friday");
                // display.setCursor(5, 29);
      // display.println("morning, and allthat remained was a");
                // display.setCursor(5, 41);
      // display.println("summing up from the reporters waiting");
                // display.setCursor(5, 53);
      // display.println("in the corridor outside the");
                // display.setCursor(25, 17);
      // display.println("10:00");
                // display.setCursor(102, 192);
      // display.println("- Stieg Larsson");
          return;
      } // end switch (option)

    // Codegen for 10:01 for 1 quotations:
    case 601:
      Serial.println(F("Only one option for 10:01:"));
    Serial.println(F("10:01 - At about ten o'clock in the morning the sun threw a bright dust-laden bar through one of the side windows, and in and out of the beam flies shot like rushing stars.' - John Steinbeck, Of Mice And Men"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING in the morning the sun threw a");
          // display.setCursor(5, 29);
      // display.println("bright dust-laden bar through one of");
          // display.setCursor(5, 41);
      // display.println("the side windows, and in and out of");
          // display.setCursor(5, 53);
      // display.println("the beam flies shot like rushing");
          // display.setCursor(20, 5);
      // display.println("about ten o'clock");
          // display.setCursor(88, 192);
      // display.println("- Of Mice And Men");
      return;

    // Codegen for 10:02 for 1 quotations:
    case 602:
      Serial.println(F("Only one option for 10:02:"));
    Serial.println(F("10:02 - It was two minutes after ten; she was not satisfied with her clothes, her face, her apartment. She heated the coffee again and sat down in the chair by the window. Can't do anything more now, she thought, no sense trying to improve anything the last minute. - Shirley Jackson, The Daemon Lover"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING; she was not satisfied with her");
          // display.setCursor(5, 29);
      // display.println("clothes, her face, her apartment. She");
          // display.setCursor(5, 41);
      // display.println("heated the coffee again and sat down in");
          // display.setCursor(5, 53);
      // display.println("the chair by the window. Can't do");
          // display.setCursor(5, 65);
      // display.println("anything more now, she thought, no sense");
          // display.setCursor(5, 77);
      // display.println("trying to improve anything the last");
          // display.setCursor(42, 5);
      // display.println("two minutes after ten");
          // display.setCursor(81, 192);
      // display.println("- The Daemon Lover");
      return;

    // Codegen for 10:03 for 2 quotations:
    case 603:
      option = random(0, 2);
      Serial.print(F("2 options for 10:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:03 - It's 10.03 according to his watch, and he is travelling down through the Scottish highlands to Inverness, tired and ever-so-slightly anxious in case he falls asleep between now and when the train reaches the station, and misses his cue - Michel Faber, The Farenheit Twins "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It's TIMESTRING according");
                // display.setCursor(5, 17);
      // display.println("to his watch, and he is travelling");
                // display.setCursor(5, 29);
      // display.println("down through the Scottish highlands");
                // display.setCursor(5, 41);
      // display.println("to Inverness, tired and");
                // display.setCursor(5, 53);
      // display.println("ever-so-slightly anxious in case he falls");
                // display.setCursor(5, 65);
      // display.println("asleep between now and when the train");
                // display.setCursor(34, 5);
      // display.println("10.03");
                // display.setCursor(60, 192);
      // display.println("- The Farenheit Twins");
          return;
        case 1:
          Serial.println(F("10:03 - The date was the 14th of May and the clock on his desk said the time was twenty three minutes past ten, so he tapped in the numbers 10.23. At least, that's what he meant to do. In fact he typed in the numbers 10.03. - Andrew Norriss, Ctrl-Z"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The date was the 14th of May and");
                // display.setCursor(5, 17);
      // display.println("the clock on his desk said the time");
                // display.setCursor(5, 29);
      // display.println("was twenty three minutes past ten,");
                // display.setCursor(5, 41);
      // display.println("so he tapped in the numbers 10.23.");
                // display.setCursor(5, 53);
      // display.println("At least, that's what he meant to");
                // display.setCursor(5, 65);
      // display.println("do. In fact he typed in the numbers");
                // display.setCursor(5, 77);
      // display.println("10.03");
                // display.setCursor(39, 192);
      // display.println("- Andrew Norriss, Ctrl-Z");
          return;
      } // end switch (option)

    // Codegen for 10:04 for 0 quotations:
    case 604:
      Serial.println(F("No quotes for 10:04"));
      return;

    // Codegen for 10:05 for 1 quotations:
    case 605:
      Serial.println(F("Only one option for 10:05:"));
    Serial.println(F("10:05 - Then I glance at my watch. It's already five past ten. \"We should get going,\" I say with a little start. \"Your mother will be waiting.\" - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Then I glance at my watch. It's");
          // display.setCursor(5, 17);
      // display.println("already TIMESTRING.");
          // display.setCursor(5, 29);
      // display.println("\"We should get going,\" I say with a");
          // display.setCursor(5, 41);
      // display.println("little start. \"Your mother will be");
          // display.setCursor(13, 17);
      // display.println("five past ten");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 10:06 for 0 quotations:
    case 606:
      Serial.println(F("No quotes for 10:06"));
      return;

    // Codegen for 10:07 for 1 quotations:
    case 607:
      Serial.println(F("Only one option for 10:07:"));
    Serial.println(F("10:07 - 10.07 am: In a meeting with Rod, Momo and Guy. We are rehearsing the final for the third time, with Rod and Guy taking the parts of the clients, when Rod's secretary, Lorraine, bursts in. - Allison Pearson, I Don't Know How She Does It"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING: In a");
          // display.setCursor(5, 17);
      // display.println("meeting with Rod, Momo and Guy. We are");
          // display.setCursor(5, 29);
      // display.println("rehearsing the final for the third time,");
          // display.setCursor(5, 41);
      // display.println("with Rod and Guy taking the parts of");
          // display.setCursor(5, 53);
      // display.println("the clients, when Rod's secretary,");
          // display.setCursor(5, 5);
      // display.println("10.07 am");
          // display.setCursor(88, 192);
      // display.println("- Allison Pearson");
      return;

    // Codegen for 10:08 for 0 quotations:
    case 608:
      Serial.println(F("No quotes for 10:08"));
      return;

    // Codegen for 10:09 for 1 quotations:
    case 609:
      Serial.println(F("Only one option for 10:09:"));
    Serial.println(F("10:09 - He followed the squeals down a hallway. A wall clock read 8:09-10:09 Dallas time. - James Ellroy, American Tabloid"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He followed the squeals down a");
          // display.setCursor(5, 17);
      // display.println("hallway. A wall clock read");
          // display.setCursor(116, 17);
      // display.println("10:09");
          // display.setCursor(81, 192);
      // display.println("- American Tabloid");
      return;

    // Codegen for 10:10 for 2 quotations:
    case 610:
      option = random(0, 2);
      Serial.print(F("2 options for 10:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:10 - 10:10 Shot is fired. - John Dickson Carr, The Hollow Man "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("10:10");
                // display.setCursor(95, 192);
      // display.println("- The Hollow Man");
          return;
        case 1:
          Serial.println(F("10:10 - Saturday morning was bright and sunny, and at ten minutes past 10 Donald arrived at the Embankment entrance of Charing Cross Underground Station, carrying a small suitcase full of clothes suitable for outdoor sports and pastimes. - AG Macdonell, England, Their England"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Saturday morning was bright and");
                // display.setCursor(5, 17);
      // display.println("sunny, and at");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING Donald arrived at the");
                // display.setCursor(5, 41);
      // display.println("Embankment entrance of Charing Cross");
                // display.setCursor(5, 53);
      // display.println("Underground Station, carrying a small");
                // display.setCursor(5, 65);
      // display.println("suitcase full of clothes suitable for");
                // display.setCursor(49, 17);
      // display.println("ten minutes past 10");
                // display.setCursor(39, 192);
      // display.println("- England, Their England");
          return;
      } // end switch (option)

    // Codegen for 10:11 for 1 quotations:
    case 611:
      Serial.println(F("Only one option for 10:11:"));
    Serial.println(F("10:11 - The hands of the Dutch clock in the hall pointed to thirteen minutes past nine; those of the ormolu clock in the sitting-room to eleven minutes past ten; those of the carriage clock on the bookshelf to fourteen minutes to six. - P.G. Wodehouse, Three Men and a Maid "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The hands of the Dutch clock in");
          // display.setCursor(5, 17);
      // display.println("the hall pointed to thirteen");
          // display.setCursor(5, 29);
      // display.println("minutes past nine; those of the ormolu");
          // display.setCursor(5, 41);
      // display.println("clock in the sitting-room to");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING; those of the carriage clock on");
          // display.setCursor(5, 77);
      // display.println("the bookshelf to fourteen minutes");
          // display.setCursor(5, 53);
      // display.println("eleven minutes past ten");
          // display.setCursor(53, 192);
      // display.println("- Three Men and a Maid");
      return;

    // Codegen for 10:12 for 2 quotations:
    case 612:
      option = random(0, 2);
      Serial.print(F("2 options for 10:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:12 - I'll take the coffee tray out, I suggest humbly. As I pick it up I glance again at my watch. Ten twelve. I wonder if they've started the meeting. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I'll take the coffee tray out, I");
                // display.setCursor(5, 17);
      // display.println("suggest humbly. As I pick it up I glance");
                // display.setCursor(5, 29);
      // display.println("again at my watch.");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING. I wonder if they've started the");
                // display.setCursor(84, 29);
      // display.println("Ten twelve");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("10:12 - He stood up once, early on, to lock his office door, and then he was reading the last page, and it was exactly 10:12 a.m., and the sun beating on his office windows was a different sun from the one he'd always known. - Jonathan Franzen, Freedom"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He stood up once, early on, to");
                // display.setCursor(5, 17);
      // display.println("lock his office door, and then he was");
                // display.setCursor(5, 29);
      // display.println("reading the last page, and it was");
                // display.setCursor(5, 41);
      // display.println("exactly TIMESTRING, and the");
                // display.setCursor(5, 53);
      // display.println("sun beating on his office windows");
                // display.setCursor(5, 65);
      // display.println("was a different sun from the one he'd");
                // display.setCursor(13, 41);
      // display.println("10:12 a.m.");
                // display.setCursor(18, 192);
      // display.println("- Jonathan Franzen, Freedom");
          return;
      } // end switch (option)

    // Codegen for 10:13 for 1 quotations:
    case 613:
      Serial.println(F("Only one option for 10:13:"));
    Serial.println(F("10:13 - And I sent it to the Daily Telegraph at thirteen minutes past ten. \"Bravo, Mr. Blount!\" \"Very good, M. Jolivet.\" - Jules Verne, Michel Strogoff"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("And I sent it to the Daily");
          // display.setCursor(5, 17);
      // display.println("Telegraph at");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. \"Bravo, Mr. Blount!\" \"Very");
          // display.setCursor(30, 17);
      // display.println("thirteen minutes past ten");
          // display.setCursor(88, 192);
      // display.println("- Michel Strogoff");
      return;

    // Codegen for 10:14 for 1 quotations:
    case 614:
      Serial.println(F("Only one option for 10:14:"));
    Serial.println(F("10:14 - Okay. Ten fourteen: Mrs. Narada reports that her cat has been attacked by a large dog. Now I send all the boys out looking, but they don't find anything until eleven. - Christopher Moore, Coyote Blue"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Okay. TIMESTRING:");
          // display.setCursor(5, 17);
      // display.println("Mrs. Narada reports that her cat has");
          // display.setCursor(5, 29);
      // display.println("been attacked by a large dog. Now I");
          // display.setCursor(5, 41);
      // display.println("send all the boys out looking, but");
          // display.setCursor(5, 53);
      // display.println("they don't find anything until");
          // display.setCursor(41, 5);
      // display.println("Ten fourteen");
          // display.setCursor(116, 192);
      // display.println("- Coyote Blue");
      return;

    // Codegen for 10:15 for 1 quotations:
    case 615:
      Serial.println(F("Only one option for 10:15:"));
    Serial.println(F("10:15 - At 10.15 Arlena departed from her rondezvous, a minute or two later Patrick Redfern came down and registered surprise, annoyance, etc. Christine's task was easy enough. Keeping her own watch concealed she asked she asked Linda at twenty-five past eleven what time it was. - Agatha Christie, Evil under the sun "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING Arlena");
          // display.setCursor(5, 17);
      // display.println("departed from her rondezvous, a minute");
          // display.setCursor(5, 29);
      // display.println("or two later Patrick Redfern came");
          // display.setCursor(5, 41);
      // display.println("down and registered surprise,");
          // display.setCursor(5, 53);
      // display.println("annoyance, etc. Christine's task was easy");
          // display.setCursor(5, 65);
      // display.println("enough. Keeping her own watch");
          // display.setCursor(5, 77);
      // display.println("concealed she asked she asked Linda at");
          // display.setCursor(20, 5);
      // display.println("10.15");
          // display.setCursor(67, 192);
      // display.println("- Evil under the sun");
      return;

    // Codegen for 10:16 for 1 quotations:
    case 616:
      Serial.println(F("Only one option for 10:16:"));
    Serial.println(F("10:16 - 10:16 At last. Forty minutes of hard work and I have made precisely one bed. I'm way behind. But never mind. Just keep moving. Laundry next. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING At last. Forty");
          // display.setCursor(5, 17);
      // display.println("minutes of hard work and I have made");
          // display.setCursor(5, 29);
      // display.println("precisely one bed. I'm way behind. But");
          // display.setCursor(5, 41);
      // display.println("never mind. Just keep moving. Laundry");
          // display.setCursor(5, 5);
      // display.println("10:16");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 10:17 for 1 quotations:
    case 617:
      Serial.println(F("Only one option for 10:17:"));
    Serial.println(F("10:17 - By the bye, said the first, \"I was able this morning to telegraph the very words of the order to my cousin at seventeen minutes past ten.\" - Jules Verne, Michel Strogoff"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("By the bye, said the first, \"I");
          // display.setCursor(5, 17);
      // display.println("was able this morning to telegraph");
          // display.setCursor(5, 29);
      // display.println("the very words of the order to my");
          // display.setCursor(5, 41);
      // display.println("cousin at");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("seventeen minutes past ten");
          // display.setCursor(88, 192);
      // display.println("- Michel Strogoff");
      return;

    // Codegen for 10:18 for 1 quotations:
    case 618:
      Serial.println(F("Only one option for 10:18:"));
    Serial.println(F("10:18 - I know that it was 10:18 when I got home because I look at my watch a lot. - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I know that it was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING when I got home because I look at");
          // display.setCursor(108, 5);
      // display.println("10:18");
          // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
      return;

    // Codegen for 10:19 for 0 quotations:
    case 619:
      Serial.println(F("No quotes for 10:19"));
      return;

    // Codegen for 10:20 for 1 quotations:
    case 620:
      Serial.println(F("Only one option for 10:20:"));
    Serial.println(F("10:20 - An hour and twenty-five minutes, she said. The right time now is twenty past ten. - James Joyce, A Portrait of the Artist as a Young Man"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("An hour and twenty-five minutes,");
          // display.setCursor(5, 17);
      // display.println("she said. The right time now is");
          // display.setCursor(5, 29);
      // display.println("twenty past ten");
          // display.setCursor(116, 192);
      // display.println("- James Joyce");
      return;

    // Codegen for 10:21 for 1 quotations:
    case 621:
      Serial.println(F("Only one option for 10:21:"));
    Serial.println(F("10:21 - Liz Headleand stares into the mirror, as though entranced. She does not see herself or the objects on her dressing-table. The clock abruptly jerks to 10.21. - Margaret Drabble, The Radiant Way"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Liz Headleand stares into the");
          // display.setCursor(5, 17);
      // display.println("mirror, as though entranced. She does");
          // display.setCursor(5, 29);
      // display.println("not see herself or the objects on her");
          // display.setCursor(5, 41);
      // display.println("dressing-table. The clock abruptly jerks to");
          // display.setCursor(5, 53);
      // display.println("10.21");
          // display.setCursor(88, 192);
      // display.println("- The Radiant Way");
      return;

    // Codegen for 10:22 for 1 quotations:
    case 622:
      Serial.println(F("Only one option for 10:22:"));
    Serial.println(F("10:22 - I listened to them, and listened to them again, and then before I had time to figure out what to do, or even what to think or feel, the phone started ringing. It was 10:22:27. I looked at the caller ID and saw that it was him. - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I listened to them, and listened");
          // display.setCursor(5, 17);
      // display.println("to them again, and then before I had");
          // display.setCursor(5, 29);
      // display.println("time to figure out what to do, or even");
          // display.setCursor(5, 41);
      // display.println("what to think or feel, the phone");
          // display.setCursor(5, 53);
      // display.println("started ringing. It was");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING:27. I looked at the caller ID and");
          // display.setCursor(107, 53);
      // display.println("10:22");
          // display.setCursor(53, 192);
      // display.println("- Jonathan Safran Foer");
      return;

    // Codegen for 10:23 for 1 quotations:
    case 623:
      Serial.println(F("Only one option for 10:23:"));
    Serial.println(F("10:23 - The date was the 14th of May and the clock on his desk said the time was twenty three minutes past ten, so he tapped in the numbers 10.23. At least, that's what he meant to do. In fact he typed in the numbers 10.03 - Andrew Norriss, Ctrl-Z"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The date was the 14th of May and");
          // display.setCursor(5, 17);
      // display.println("the clock on his desk said the time");
          // display.setCursor(5, 29);
      // display.println("was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING, so he tapped in the numbers");
          // display.setCursor(5, 65);
      // display.println("10.23. At least, that's what he meant");
          // display.setCursor(5, 77);
      // display.println("to do. In fact he typed in the");
          // display.setCursor(5, 41);
      // display.println("twenty three minutes past ten");
          // display.setCursor(39, 192);
      // display.println("- Andrew Norriss, Ctrl-Z");
      return;

    // Codegen for 10:24 for 0 quotations:
    case 624:
      Serial.println(F("No quotes for 10:24"));
      return;

    // Codegen for 10:25 for 2 quotations:
    case 625:
      option = random(0, 2);
      Serial.print(F("2 options for 10:25. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:25 - 10:25: Phone call from Lüding, very worked up, urging me to return at once and get in touch with Alois, who was equally worked up. - Heinrich Böll, The Lost Honour of Katharina Blum"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING: Phone call");
                // display.setCursor(5, 17);
      // display.println("from Lüding, very worked up, urging");
                // display.setCursor(5, 29);
      // display.println("me to return at once and get in touch");
                // display.setCursor(5, 41);
      // display.println("with Alois, who was equally worked");
                // display.setCursor(5, 5);
      // display.println("10:25");
                // display.setCursor(102, 192);
      // display.println("- Heinrich Böll");
          return;
        case 1:
          Serial.println(F("10:25 - Last night I took a 16 mm. film of the first three hours, screened it this morning at the lab. The first true-horror movie. I looked like a half-animated corpse. Woke 10:25. To sleep 3:45. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Last night I took a 16 mm. film of");
                // display.setCursor(5, 17);
      // display.println("the first three hours, screened it");
                // display.setCursor(5, 29);
      // display.println("this morning at the lab. The first");
                // display.setCursor(5, 41);
      // display.println("true-horror movie. I looked like a");
                // display.setCursor(5, 53);
      // display.println("half-animated corpse. Woke");
                // display.setCursor(98, 53);
      // display.println("10:25");
                // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
          return;
      } // end switch (option)

    // Codegen for 10:26 for 2 quotations:
    case 626:
      option = random(0, 2);
      Serial.print(F("2 options for 10:26. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:26 - 10:26 No. Please, no. I can hardly bear to look. It's a total disaster. Everything in the washing machine has gone pink. Every single thing. What happened? - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING No. Please, no.");
                // display.setCursor(5, 17);
      // display.println("I can hardly bear to look. It's a");
                // display.setCursor(5, 29);
      // display.println("total disaster. Everything in the");
                // display.setCursor(5, 41);
      // display.println("washing machine has gone pink. Every");
                // display.setCursor(5, 5);
      // display.println("10:26");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("10:26 - In the exact centre of my visual field was the alarm clock, hands pointing to ten-twenty-six. An alarm clock I received as a memento of somebody's wedding. - Haruki Murakami, Hard-boiled Wonderland and The End of the World"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("In the exact centre of my visual");
                // display.setCursor(5, 17);
      // display.println("field was the alarm clock, hands");
                // display.setCursor(5, 29);
      // display.println("pointing to TIMESTRING.");
                // display.setCursor(5, 41);
      // display.println("An alarm clock I received as a");
                // display.setCursor(29, 29);
      // display.println("ten-twenty-six");
                // display.setCursor(88, 192);
      // display.println("- Haruki Murakami");
          return;
      } // end switch (option)

    // Codegen for 10:27 for 2 quotations:
    case 627:
      option = random(0, 2);
      Serial.print(F("2 options for 10:27. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:27 - Mr. Harcourt woke up with mysterious suddenness at twenty-seven minutes past 10, and, by a curious coincidence, it was at that very instant that the butler came in with two footmen laden with trays of whisky, brandy, syphons, glasses, and biscuits. - AG Macdonell, England, Their England"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Mr. Harcourt woke up with");
                // display.setCursor(5, 17);
      // display.println("mysterious suddenness at");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING, and, by a curious coincidence,");
                // display.setCursor(5, 53);
      // display.println("it was at that very instant that the");
                // display.setCursor(5, 65);
      // display.println("butler came in with two footmen laden");
                // display.setCursor(5, 77);
      // display.println("with trays of whisky, brandy,");
                // display.setCursor(5, 29);
      // display.println("twenty-seven minutes past 10");
                // display.setCursor(39, 192);
      // display.println("- England, Their England");
          return;
        case 1:
          Serial.println(F("10:27 - The substandard clock radio says 10:27 a.m. The noise is Katrina the Cleaner thumping the hoover against the skirting boards and the bedroom doors. Her hand is asleep. It is still hooked through the handstrap of the camera. - Ali Smith, The Accidental "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The substandard clock radio says");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING The noise");
                // display.setCursor(5, 29);
      // display.println("is Katrina the Cleaner thumping");
                // display.setCursor(5, 41);
      // display.println("the hoover against the skirting");
                // display.setCursor(5, 53);
      // display.println("boards and the bedroom doors. Her hand");
                // display.setCursor(5, 65);
      // display.println("is asleep. It is still hooked");
                // display.setCursor(5, 17);
      // display.println("10:27 a.m.");
                // display.setCursor(11, 192);
      // display.println("- Ali Smith, The Accidental ");
          return;
      } // end switch (option)

    // Codegen for 10:28 for 0 quotations:
    case 628:
      Serial.println(F("No quotes for 10:28"));
      return;

    // Codegen for 10:29 for 0 quotations:
    case 629:
      Serial.println(F("No quotes for 10:29"));
      return;

    // Codegen for 10:30 for 4 quotations:
    case 630:
      option = random(0, 4);
      Serial.print(F("4 options for 10:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:30 - 10.30 a.m. Break - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("10.30 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 1:
          Serial.println(F("10:30 - 'What time?' Just his head was sticking out of the partially opened door. The money from blessing the ice-cream factory must have dulled his desire for work, I thought. 'Ten.' 'Ten-thirty.' Without another word, he closed the door. - Akhil Sharma, An Obedient Father "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'What time?' Just his head was");
                // display.setCursor(5, 17);
      // display.println("sticking out of the partially opened");
                // display.setCursor(5, 29);
      // display.println("door. The money from blessing the");
                // display.setCursor(5, 41);
      // display.println("ice-cream factory must have dulled his");
                // display.setCursor(5, 53);
      // display.println("desire for work, I thought. 'Ten.'");
                // display.setCursor(5, 65);
      // display.println("'TIMESTRING.'");
                // display.setCursor(5, 77);
      // display.println("Without another word, he closed the");
                // display.setCursor(5, 65);
      // display.println("Ten-thirty");
                // display.setCursor(67, 192);
      // display.println("- An Obedient Father");
          return;
        case 2:
          Serial.println(F("10:30 - according to the clock on the wall, it is barely ten thirty. - Michael Cunningham, The Hours "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("according to the clock on the");
                // display.setCursor(5, 17);
      // display.println("wall, it is barely");
                // display.setCursor(84, 17);
      // display.println("ten thirty");
                // display.setCursor(130, 192);
      // display.println("- The Hours");
          return;
        case 3:
          Serial.println(F("10:30 - At ten-thirty I'm cleaned up, shaved and dressed in my Easter best - a two-piece seersucker Palm Beach I've had since college. - Richard Ford, The Sportswriter"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING I'm");
                // display.setCursor(5, 17);
      // display.println("cleaned up, shaved and dressed in my");
                // display.setCursor(5, 29);
      // display.println("Easter best - a two-piece seersucker");
                // display.setCursor(20, 5);
      // display.println("ten-thirty");
                // display.setCursor(81, 192);
      // display.println("- The Sportswriter");
          return;
      } // end switch (option)

    // Codegen for 10:31 for 0 quotations:
    case 631:
      Serial.println(F("No quotes for 10:31"));
      return;

    // Codegen for 10:32 for 1 quotations:
    case 632:
      Serial.println(F("Only one option for 10:32:"));
    Serial.println(F("10:32 - If you please. You went to bed at what time, Madame? \"Just after half past ten.\" - Agatha Christie, Death on the Nile"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("If you please. You went to bed at");
          // display.setCursor(5, 17);
      // display.println("what time, Madame?");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("Just after half past ten.");
          // display.setCursor(74, 192);
      // display.println("- Death on the Nile");
      return;

    // Codegen for 10:33 for 0 quotations:
    case 633:
      Serial.println(F("No quotes for 10:33"));
      return;

    // Codegen for 10:34 for 0 quotations:
    case 634:
      Serial.println(F("No quotes for 10:34"));
      return;

    // Codegen for 10:35 for 1 quotations:
    case 635:
      Serial.println(F("Only one option for 10:35:"));
    Serial.println(F("10:35 - Five-and-twenty to eleven. A horrible hour - a macabre hour, for it is not only the hour of pleasure ended, it is the hour when pleasure itself has been found wanting. - Patrick Hamilton, Rope"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. A horrible hour - a macabre");
          // display.setCursor(5, 29);
      // display.println("hour, for it is not only the hour of");
          // display.setCursor(5, 41);
      // display.println("pleasure ended, it is the hour when");
          // display.setCursor(5, 5);
      // display.println("Five-and-twenty to eleven");
          // display.setCursor(39, 192);
      // display.println("- Patrick Hamilton, Rope");
      return;

    // Codegen for 10:36 for 1 quotations:
    case 636:
      Serial.println(F("Only one option for 10:36:"));
    Serial.println(F("10:36 - Strand post mark and dispatched ten thirty-six said Holmes reading it over and over. \"Mr Overton was evidently considerably excited when he sent it over and somewhat incoherent in consequence.\" - Arthur Conan Doyle, The Adventure of the Missing Three-Quarter"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Strand post mark and dispatched");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING said");
          // display.setCursor(5, 29);
      // display.println("Holmes reading it over and over. \"Mr");
          // display.setCursor(5, 41);
      // display.println("Overton was evidently considerably");
          // display.setCursor(5, 53);
      // display.println("excited when he sent it over and");
          // display.setCursor(5, 17);
      // display.println("ten thirty-six");
          // display.setCursor(67, 192);
      // display.println("- Arthur Conan Doyle");
      return;

    // Codegen for 10:37 for 1 quotations:
    case 637:
      Serial.println(F("Only one option for 10:37:"));
    Serial.println(F("10:37 - I quite agree with you,' said Mr Murbles. 'It is a most awkward situation. Lady Dormer died at precisely 10.37 a.m. on November 11th.' - Dorothy L. Sayers, The Unpleasantness at the Bellona Club"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I quite agree with you,' said Mr");
          // display.setCursor(5, 17);
      // display.println("Murbles. 'It is a most awkward");
          // display.setCursor(5, 29);
      // display.println("situation. Lady Dormer died at precisely");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING on");
          // display.setCursor(5, 41);
      // display.println("10.37 a.m.");
          // display.setCursor(74, 192);
      // display.println("- Dorothy L. Sayers");
      return;

    // Codegen for 10:38 for 1 quotations:
    case 638:
      Serial.println(F("Only one option for 10:38:"));
    Serial.println(F("10:38 - There must be a solution, there must be. Frantically I scan the cans of products stacked on the shelves. Stain Away. Vanish. There has to be a remedy. ... I just need to think. ... 10:38 OK, I have the answer. It may not totally work—but it's my best shot. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("There must be a solution, there");
          // display.setCursor(5, 17);
      // display.println("must be. Frantically I scan the cans");
          // display.setCursor(5, 29);
      // display.println("of products stacked on the");
          // display.setCursor(5, 41);
      // display.println("shelves. Stain Away. Vanish. There has");
          // display.setCursor(5, 53);
      // display.println("to be a remedy. ... I just need to");
          // display.setCursor(5, 65);
      // display.println("think. ... TIMESTRING OK, I have");
          // display.setCursor(5, 77);
      // display.println("the answer. It may not totally");
          // display.setCursor(34, 65);
      // display.println("10:38");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 10:39 for 0 quotations:
    case 639:
      Serial.println(F("No quotes for 10:39"));
      return;

    // Codegen for 10:40 for 1 quotations:
    case 640:
      Serial.println(F("Only one option for 10:40:"));
    Serial.println(F("10:40 - 10:40: Call from Katharina asking me whether I had really said what was in the News. - Heinrich Böll, The Lost Honour of Katharina Blum"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING: Call from");
          // display.setCursor(5, 17);
      // display.println("Katharina asking me whether I had really");
          // display.setCursor(5, 5);
      // display.println("10:40");
          // display.setCursor(102, 192);
      // display.println("- Heinrich Böll");
      return;

    // Codegen for 10:41 for 0 quotations:
    case 641:
      Serial.println(F("No quotes for 10:41"));
      return;

    // Codegen for 10:42 for 0 quotations:
    case 642:
      Serial.println(F("No quotes for 10:42"));
      return;

    // Codegen for 10:43 for 1 quotations:
    case 643:
      Serial.println(F("Only one option for 10:43:"));
    Serial.println(F("10:43 - 24 January, 10.43 a.m: one month and two days later I wonder if I should worry about the fact that my darling boyfriend bought me a birthday present that has the potential to cause instant death... - Jane Costello, The Wish List"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("24 January,");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING: one month and two days later I");
          // display.setCursor(5, 29);
      // display.println("wonder if I should worry about the fact");
          // display.setCursor(5, 41);
      // display.println("that my darling boyfriend bought me a");
          // display.setCursor(5, 53);
      // display.println("birthday present that has the potential");
          // display.setCursor(77, 5);
      // display.println("10.43 a.m");
          // display.setCursor(102, 192);
      // display.println("- The Wish List");
      return;

    // Codegen for 10:44 for 0 quotations:
    case 644:
      Serial.println(F("No quotes for 10:44"));
      return;

    // Codegen for 10:45 for 2 quotations:
    case 645:
      option = random(0, 2);
      Serial.print(F("2 options for 10:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:45 - If this is so, we have now to determine what Barker and Mrs. Douglas, presuming they are not the actual murderers, would have been doing from quarter to eleven, when the sound of the shot brought them down, until quarter past eleven. - Arthur Conan Doyle, The Valley of Fear"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("If this is so, we have now to");
                // display.setCursor(5, 17);
      // display.println("determine what Barker and Mrs. Douglas,");
                // display.setCursor(5, 29);
      // display.println("presuming they are not the actual");
                // display.setCursor(5, 41);
      // display.println("murderers, would have been doing from");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 65);
      // display.println("when the sound of the shot brought");
                // display.setCursor(5, 77);
      // display.println("them down, until quarter past");
                // display.setCursor(5, 53);
      // display.println("quarter to eleven");
                // display.setCursor(67, 192);
      // display.println("- The Valley of Fear");
          return;
        case 1:
          Serial.println(F("10:45 - They reached King's Cross at a quarter to eleven. Mr Weasley dashed across the road to get trolleys for their trunks and they all hurried into the station. - J.K.Rowling, Harry Potter and the Chamber of Secrets "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("They reached King's Cross at a");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING.");
                // display.setCursor(5, 29);
      // display.println("Mr Weasley dashed across the road");
                // display.setCursor(5, 41);
      // display.println("to get trolleys for their trunks");
                // display.setCursor(5, 53);
      // display.println("and they all hurried into the");
                // display.setCursor(5, 17);
      // display.println("quarter to eleven");
                // display.setCursor(116, 192);
      // display.println("- J.K.Rowling");
          return;
      } // end switch (option)

    // Codegen for 10:46 for 0 quotations:
    case 646:
      Serial.println(F("No quotes for 10:46"));
      return;

    // Codegen for 10:47 for 1 quotations:
    case 647:
      Serial.println(F("Only one option for 10:47:"));
    Serial.println(F("10:47 - He whistles in the shower. It is 10.47 and he is ready for the off. - Jackie Kay, Trumpet"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He whistles in the shower. It is");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING and he is ready");
          // display.setCursor(5, 17);
      // display.println("10.47");
          // display.setCursor(60, 192);
      // display.println("- Jackie Kay, Trumpet");
      return;

    // Codegen for 10:48 for 1 quotations:
    case 648:
      Serial.println(F("Only one option for 10:48:"));
    Serial.println(F("10:48 - At 10.48am, I closed my folder but didn't bother putting it back in my bag, so you knew I was on my way to a committee or meeting room nearby. Before I stood up, I folded my paper napkin and put it and the spoon into my coffee cup, a neat sort of person, you thought. - Louise Doughty, Apple Tree Yard"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, I closed");
          // display.setCursor(5, 17);
      // display.println("my folder but didn't bother");
          // display.setCursor(5, 29);
      // display.println("putting it back in my bag, so you knew I");
          // display.setCursor(5, 41);
      // display.println("was on my way to a committee or");
          // display.setCursor(5, 53);
      // display.println("meeting room nearby. Before I stood up,");
          // display.setCursor(5, 65);
      // display.println("I folded my paper napkin and put it");
          // display.setCursor(5, 77);
      // display.println("and the spoon into my coffee cup, a");
          // display.setCursor(20, 5);
      // display.println("10.48am");
          // display.setCursor(88, 192);
      // display.println("- Apple Tree Yard");
      return;

    // Codegen for 10:49 for 1 quotations:
    case 649:
      Serial.println(F("Only one option for 10:49:"));
    Serial.println(F("10:49 - By forty-nine minutes past ten, we fall in again with a fine portion of the ancient road, which the modern track constantly follows, and descend by some steep windings - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("By");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING, we fall in again with a fine");
          // display.setCursor(5, 41);
      // display.println("portion of the ancient road, which the");
          // display.setCursor(5, 53);
      // display.println("modern track constantly follows, and");
          // display.setCursor(5, 17);
      // display.println("forty-nine minutes past ten");
          // display.setCursor(67, 192);
      // display.println("- Félicien de Saulcy");
      return;

    // Codegen for 10:50 for 2 quotations:
    case 650:
      option = random(0, 2);
      Serial.print(F("2 options for 10:50. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:50 - 10.50 a.m. Art class with Mrs Peters - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING Art class");
                // display.setCursor(5, 5);
      // display.println("10.50 a.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 1:
          Serial.println(F("10:50 - As he walked back to the flight office, airmen were forming a line to await the arrival of the NAAFI van with morning tea and cakes. Lambert looked at his watch; it was ten to eleven. - Len Deighton, Bomber"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As he walked back to the flight");
                // display.setCursor(5, 17);
      // display.println("office, airmen were forming a line to");
                // display.setCursor(5, 29);
      // display.println("await the arrival of the NAAFI van");
                // display.setCursor(5, 41);
      // display.println("with morning tea and cakes. Lambert");
                // display.setCursor(5, 53);
      // display.println("looked at his watch; it was");
                // display.setCursor(5, 65);
      // display.println("ten to eleven");
                // display.setCursor(53, 192);
      // display.println("- Len Deighton, Bomber");
          return;
      } // end switch (option)

    // Codegen for 10:51 for 0 quotations:
    case 651:
      Serial.println(F("No quotes for 10:51"));
      return;

    // Codegen for 10:52 for 0 quotations:
    case 652:
      Serial.println(F("No quotes for 10:52"));
      return;

    // Codegen for 10:53 for 2 quotations:
    case 653:
      option = random(0, 2);
      Serial.print(F("2 options for 10:53. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:53 - He begins to make a record of our observations.'10.53 hrs,' he writes, as we crouch at the top of the stairs, listening to his mother in the hall below. - Michael Frayn, Spies"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He begins to make a record of our");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("observations.'TIMESTRING,' he writes, as we crouch at");
                // display.setCursor(5, 41);
      // display.println("the top of the stairs, listening to");
                // display.setCursor(5, 17);
      // display.println("10.53 hrs");
                // display.setCursor(53, 192);
      // display.println("- Michael Frayn, Spies");
          return;
        case 1:
          Serial.println(F("10:53 - ... in the top left-hand corner of the screen, where the figures covering part of her forehead show the minutes and seconds, from 10:53 to 10:57, while the hundredths of a second flash by so fast that you cannot read and capture them. - W.G. Sebald, Austerlitz "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... in the top left-hand corner");
                // display.setCursor(5, 17);
      // display.println("of the screen, where the figures");
                // display.setCursor(5, 29);
      // display.println("covering part of her forehead show the");
                // display.setCursor(5, 41);
      // display.println("minutes and seconds, from");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING to 10:57, while the hundredths");
                // display.setCursor(5, 65);
      // display.println("of a second flash by so fast that you");
                // display.setCursor(121, 41);
      // display.println("10:53");
                // display.setCursor(25, 192);
      // display.println("- W.G. Sebald, Austerlitz ");
          return;
      } // end switch (option)

    // Codegen for 10:54 for 0 quotations:
    case 654:
      Serial.println(F("No quotes for 10:54"));
      return;

    // Codegen for 10:55 for 1 quotations:
    case 655:
      Serial.println(F("Only one option for 10:55:"));
    Serial.println(F("10:55 - The clock was still saying five minutes to eleven when Pooh and Piglet set out on their way half an hour later. - AA Milne, The House at Pooh Corner"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The clock was still saying");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING when Pooh and Piglet set out on");
          // display.setCursor(5, 17);
      // display.println("five minutes to eleven");
          // display.setCursor(25, 192);
      // display.println("- The House at Pooh Corner");
      return;

    // Codegen for 10:56 for 0 quotations:
    case 656:
      Serial.println(F("No quotes for 10:56"));
      return;

    // Codegen for 10:57 for 1 quotations:
    case 657:
      Serial.println(F("Only one option for 10:57:"));
    Serial.println(F("10:57 - I run the tape back repeatedly, looking at the time indicator in the top left-hand corner of the screen, where the figures covering part of her forehead show the minutes and seconds, from 10.53 to 10.57. - W. G. Sebald, Austerlitz"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I run the tape back repeatedly,");
          // display.setCursor(5, 17);
      // display.println("looking at the time indicator in the top");
          // display.setCursor(5, 29);
      // display.println("left-hand corner of the screen, where the");
          // display.setCursor(5, 41);
      // display.println("figures covering part of her forehead");
          // display.setCursor(5, 53);
      // display.println("show the minutes and seconds, from");
          // display.setCursor(26, 65);
      // display.println("10.57");
          // display.setCursor(25, 192);
      // display.println("- W. G. Sebald, Austerlitz");
      return;

    // Codegen for 10:58 for 1 quotations:
    case 658:
      Serial.println(F("Only one option for 10:58:"));
    Serial.println(F("10:58 - One day Joe was sitting in the office waiting for his 11 o'clock appointment, and at 10:58 this black gal came in. - Helen DeWitt, Lightning Rods"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("One day Joe was sitting in the");
          // display.setCursor(5, 17);
      // display.println("office waiting for his 11 o'clock");
          // display.setCursor(5, 29);
      // display.println("appointment, and at TIMESTRING this");
          // display.setCursor(55, 29);
      // display.println("10:58");
          // display.setCursor(95, 192);
      // display.println("- Lightning Rods");
      return;

    // Codegen for 10:59 for 1 quotations:
    case 659:
      Serial.println(F("Only one option for 10:59:"));
    Serial.println(F("10:59 - Harry grunted in his sleep and his face slid down the window an inch or so, making his glasses still more lopsided, but he did not wake up. An alarm clock, repaired by Harry several years ago, ticked loudly on the sill, showing one minute to eleven. - J. K. Rowling, Harry Potter and the Half-Blood Prince"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Harry grunted in his sleep and");
          // display.setCursor(5, 17);
      // display.println("his face slid down the window an inch");
          // display.setCursor(5, 29);
      // display.println("or so, making his glasses still");
          // display.setCursor(5, 41);
      // display.println("more lopsided, but he did not wake up.");
          // display.setCursor(5, 53);
      // display.println("An alarm clock, repaired by Harry");
          // display.setCursor(5, 65);
      // display.println("several years ago, ticked loudly on the");
          // display.setCursor(5, 77);
      // display.println("sill, showing");
          // display.setCursor(61, 77);
      // display.println("one minute to eleven");
          // display.setCursor(102, 192);
      // display.println("- J. K. Rowling");
      return;

    // Codegen for 11:00 for 15 quotations:
    case 660:
      option = random(0, 15);
      Serial.print(F("15 options for 11:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:00 - 'Who can - what can -” asked Mrs Dalloway (thinking it was outrageous to be interrupted at eleven o'clock on the morning of the day she was giving a party), hearing a step on the stairs. - Virginia Woolf, Mrs Dalloway "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Who can - what can -” asked Mrs");
                // display.setCursor(5, 17);
      // display.println("Dalloway (thinking it was outrageous to");
                // display.setCursor(5, 29);
      // display.println("be interrupted at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING on the morning of the day she was");
                // display.setCursor(5, 53);
      // display.println("giving a party), hearing a step on the");
                // display.setCursor(101, 29);
      // display.println("eleven o'clock");
                // display.setCursor(109, 192);
      // display.println("- Mrs Dalloway");
          return;
        case 1:
          Serial.println(F("11:00 - By 11 o'clock I have finished the first chapter of Mr Y. The winter sun is peeping meekly through the thin curtains and I decide to get up - Scarlett Thomas, The End of Mr Y "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By TIMESTRING I have");
                // display.setCursor(5, 17);
      // display.println("finished the first chapter of Mr Y. The");
                // display.setCursor(5, 29);
      // display.println("winter sun is peeping meekly through");
                // display.setCursor(5, 41);
      // display.println("the thin curtains and I decide to get");
                // display.setCursor(20, 5);
      // display.println("11 o'clock");
                // display.setCursor(88, 192);
      // display.println("- The End of Mr Y");
          return;
        case 2:
          Serial.println(F("11:00 - I dare say it was champagne at eleven in the morning. - Rosamond Lehmann, The Weather in the Streets "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I dare say it was champagne");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("at eleven in the morning");
                // display.setCursor(11, 192);
      // display.println("- The Weather in the Streets");
          return;
        case 3:
          Serial.println(F("11:00 - As her husband had told him, she was still in bed although it was past 11 o'clock. Her normally mobile face was encased in clay, rigid and menacing as an Aztec mask. - Evelyn Waugh, Scoop "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As her husband had told him, she");
                // display.setCursor(5, 17);
      // display.println("was still in bed although it was past");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING. Her");
                // display.setCursor(5, 41);
      // display.println("normally mobile face was encased in");
                // display.setCursor(5, 53);
      // display.println("clay, rigid and menacing as an Aztec");
                // display.setCursor(5, 29);
      // display.println("11 o'clock");
                // display.setCursor(53, 192);
      // display.println("- Evelyn Waugh, Scoop ");
          return;
        case 4:
          Serial.println(F("11:00 - ... world became perfectly silent, and a flight of gulls crossed the sky, first one gull leading, then another, and in this extraordinary silence and peace, in this pallor, in this purity, bells struck eleven times the sound fading up there among the gulls. - Virginia Woolf, Mrs. Dalloway "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... world became perfectly");
                // display.setCursor(5, 17);
      // display.println("silent, and a flight of gulls crossed");
                // display.setCursor(5, 29);
      // display.println("the sky, first one gull leading,");
                // display.setCursor(5, 41);
      // display.println("then another, and in this");
                // display.setCursor(5, 53);
      // display.println("extraordinary silence and peace, in this");
                // display.setCursor(5, 65);
      // display.println("pallor, in this purity, bells struck");
                // display.setCursor(5, 77);
      // display.println("TIMESTRINGtimes the");
                // display.setCursor(5, 77);
      // display.println("eleven ");
                // display.setCursor(102, 192);
      // display.println("- Mrs. Dalloway");
          return;
        case 5:
          Serial.println(F("11:00 - At eleven o'clock in the morning, large flakes had appeared from a colourless sky and invaded the fields, gardens and lawns of Romerike like an armada from outer space. - Jo Nesbo, The Snowman "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING in");
                // display.setCursor(5, 17);
      // display.println("the morning, large flakes had");
                // display.setCursor(5, 29);
      // display.println("appeared from a colourless sky and");
                // display.setCursor(5, 41);
      // display.println("invaded the fields, gardens and lawns");
                // display.setCursor(5, 53);
      // display.println("of Romerike like an armada from");
                // display.setCursor(20, 5);
      // display.println("eleven o'clock");
                // display.setCursor(39, 192);
      // display.println("- Jo Nesbo, The Snowman ");
          return;
        case 6:
          Serial.println(F("11:00 - At eleven o'clock the phone rang, and still the figure did not respond, any more than it had responded when the phone had rung at twenty-five to seven, and again for ten minutes continuously starting at five to seven... - Douglas Adams, The Long Dark Tea-Time of the Soul"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At TIMESTRING");
                // display.setCursor(5, 17);
      // display.println("the phone rang, and still the figure");
                // display.setCursor(5, 29);
      // display.println("did not respond, any more than it had");
                // display.setCursor(5, 41);
      // display.println("responded when the phone had rung at");
                // display.setCursor(5, 53);
      // display.println("twenty-five to seven, and again for ten");
                // display.setCursor(5, 65);
      // display.println("minutes continuously starting at five");
                // display.setCursor(20, 5);
      // display.println("eleven o'clock");
                // display.setCursor(102, 192);
      // display.println("- Douglas Adams");
          return;
        case 7:
          Serial.println(F("11:00 - Big Ben was striking as she stepped out into the street. It was eleven o'clock and the unused hour was fresh as if issued to children on a beach. - Virginia Woolf, Mrs Dalloway "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Big Ben was striking as she");
                // display.setCursor(5, 17);
      // display.println("stepped out into the street. It was");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING and");
                // display.setCursor(5, 41);
      // display.println("the unused hour was fresh as if");
                // display.setCursor(5, 29);
      // display.println("eleven o'clock");
                // display.setCursor(109, 192);
      // display.println("- Mrs Dalloway");
          return;
        case 8:
          Serial.println(F("11:00 - It was about eleven o'clock in the morning, mid October, with the sun not shining and a look of hard wet rain in the clearness of the foothills. - Raymond Chandler, The big sleep "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was about");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING in the morning, mid October,");
                // display.setCursor(5, 29);
      // display.println("with the sun not shining and a look of");
                // display.setCursor(5, 41);
      // display.println("hard wet rain in the clearness of the");
                // display.setCursor(78, 5);
      // display.println("eleven o'clock");
                // display.setCursor(102, 192);
      // display.println("- The big sleep");
          return;
        case 9:
          Serial.println(F("11:00 - I am only trying to do a writing class, what is wrong with that? I keep telling myself that once in the car I will be fine, I can listen to Radio Four Woman’s Hour and that will take me till eleven o'clock when the class starts. - Patsy Hickman, The Saints "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I am only trying to do a writing");
                // display.setCursor(5, 17);
      // display.println("class, what is wrong with that? I keep");
                // display.setCursor(5, 29);
      // display.println("telling myself that once in the car I");
                // display.setCursor(5, 41);
      // display.println("will be fine, I can listen to Radio");
                // display.setCursor(5, 53);
      // display.println("Four Woman’s Hour and that will take");
                // display.setCursor(5, 65);
      // display.println("me till");
                // display.setCursor(37, 65);
      // display.println("eleven o'clock");
                // display.setCursor(11, 192);
      // display.println("- Patsy Hickman, The Saints ");
          return;
        case 10:
          Serial.println(F("11:00 - It was about eleven o'clock; and the Enchantress was attired in a delicious deshabillé. With her little feet upon an ottoman near the fender, and her fine form reclining in a luxurious large arm-chair - G.W.M. Reynolds, The Mysteries of London "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was about");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING; and the Enchantress was");
                // display.setCursor(5, 29);
      // display.println("attired in a delicious deshabillé.");
                // display.setCursor(5, 41);
      // display.println("With her little feet upon an ottoman");
                // display.setCursor(5, 53);
      // display.println("near the fender, and her fine form");
                // display.setCursor(78, 5);
      // display.println("eleven o'clock");
                // display.setCursor(32, 192);
      // display.println("- The Mysteries of London");
          return;
        case 11:
          Serial.println(F("11:00 - Quiet as I am, I become at Eleven o'Clock in the Morning on every day of the week save Sunday - George Augustus Sala, Twice Around the Clock"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Quiet as I am, I become at");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING on every day of the week save");
                // display.setCursor(5, 17);
      // display.println("Eleven o'Clock in the Morning");
                // display.setCursor(39, 192);
      // display.println("- Twice Around the Clock");
          return;
        case 12:
          Serial.println(F("11:00 - Though perhaps' – but here the bracket clock whirred and then hectically struck eleven, its weights spooling downwards at the sudden expense of energy. She had to sit for a moment, when the echo had vanished, to repossess her thoughts. - Alan Hollinghurst, The Stranger's Child "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Though perhaps' – but here the");
                // display.setCursor(5, 17);
      // display.println("bracket clock whirred and then");
                // display.setCursor(5, 29);
      // display.println("hectically struck TIMESTRING, its");
                // display.setCursor(5, 41);
      // display.println("weights spooling downwards at the");
                // display.setCursor(5, 53);
      // display.println("sudden expense of energy. She had to");
                // display.setCursor(5, 65);
      // display.println("sit for a moment, when the echo had");
                // display.setCursor(59, 29);
      // display.println("eleven");
                // display.setCursor(53, 192);
      // display.println("- The Stranger's Child");
          return;
        case 13:
          Serial.println(F("11:00 - We got to Waterloo at eleven, and asked where the eleven-five started from. Of course nobody knew. - Jerome K Jerome, Three Men in a Boat"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("We got to Waterloo");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and asked where the");
                // display.setCursor(5, 29);
      // display.println("eleven-five started from. Of course nobody");
                // display.setCursor(114, 5);
      // display.println("at eleven");
                // display.setCursor(60, 192);
      // display.println("- Three Men in a Boat");
          return;
        case 14:
          Serial.println(F("11:00 - We passed a few sad hours until eleven o'clock, when the trial was to commence. My father and the rest of the family being obliged to attend as witnesses, I accompanied them to the court. During the whole of this wretched mockery of justice I suffered living torture. - Mary Shelley, Frankenstein "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("We passed a few sad hours until");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 29);
      // display.println("when the trial was to commence. My");
                // display.setCursor(5, 41);
      // display.println("father and the rest of the family being");
                // display.setCursor(5, 53);
      // display.println("obliged to attend as witnesses, I");
                // display.setCursor(5, 65);
      // display.println("accompanied them to the court. During the");
                // display.setCursor(5, 77);
      // display.println("whole of this wretched mockery of");
                // display.setCursor(5, 17);
      // display.println("eleven o'clock");
                // display.setCursor(4, 192);
      // display.println("- Mary Shelley, Frankenstein ");
          return;
      } // end switch (option)

    // Codegen for 11:01 for 1 quotations:
    case 661:
      Serial.println(F("Only one option for 11:01:"));
    Serial.println(F("11:01 - O'Neil rises and takes the tray. He has finished the tea, but the muffins are still here in a wicker basket covered with a blue napkin. The clock above the stove says that it is just past eleven, and guests will be arriving at the house now. - Justin Cronin, Mary and O'Neil"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("O'Neil rises and takes the tray.");
          // display.setCursor(5, 17);
      // display.println("He has finished the tea, but the");
          // display.setCursor(5, 29);
      // display.println("muffins are still here in a wicker");
          // display.setCursor(5, 41);
      // display.println("basket covered with a blue napkin. The");
          // display.setCursor(5, 53);
      // display.println("clock above the stove says that it is");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING,");
          // display.setCursor(5, 77);
      // display.println("and guests will be arriving at the");
          // display.setCursor(5, 65);
      // display.println("just past eleven");
          // display.setCursor(88, 192);
      // display.println("- Mary and O'Neil");
      return;

    // Codegen for 11:02 for 1 quotations:
    case 662:
      Serial.println(F("Only one option for 11:02:"));
    Serial.println(F("11:02 - On August 9th, three days later, at 11.02am, another B−29 dropped the second bomb on the industrial section of the city of Nagasaki, totally destroying 1 1/2 square miles of the city, killing 39,000 persons and injuring 25,000 more. - Manhattan Engineer District, The Atomic Bombings of Hiroshima and Nagasaki"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("On August 9th, three days later,");
          // display.setCursor(5, 17);
      // display.println("at TIMESTRING, another");
          // display.setCursor(5, 29);
      // display.println("B−29 dropped the second bomb on the");
          // display.setCursor(5, 41);
      // display.println("industrial section of the city of");
          // display.setCursor(5, 53);
      // display.println("Nagasaki, totally destroying 1 1/2");
          // display.setCursor(5, 65);
      // display.println("square miles of the city, killing");
          // display.setCursor(5, 77);
      // display.println("39,000 persons and injuring 25,000");
          // display.setCursor(8, 17);
      // display.println("11.02am");
          // display.setCursor(4, 192);
      // display.println("- Manhattan Engineer District");
      return;

    // Codegen for 11:03 for 2 quotations:
    case 663:
      option = random(0, 2);
      Serial.print(F("2 options for 11:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:03 - What time are you meeting him? she called out. \"Eleven oh-three,\" he said. \"That made me think he's for real. Military and intelligence types set precise appointment times to eliminate confusion and ambiguity. Nothing ambiguous about eleven oh-three.\" - Christopher Buckley, Little Green Men "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What time are you meeting him?");
                // display.setCursor(5, 17);
      // display.println("she called out.");
                // display.setCursor(5, 29);
      // display.println("\"TIMESTRING,\" he said. \"That made me think");
                // display.setCursor(5, 41);
      // display.println("he's for real. Military and");
                // display.setCursor(5, 53);
      // display.println("intelligence types set precise appointment");
                // display.setCursor(5, 65);
      // display.println("times to eliminate confusion and");
                // display.setCursor(5, 77);
      // display.println("ambiguity. Nothing ambiguous about");
                // display.setCursor(81, 17);
      // display.println("Eleven oh-three");
                // display.setCursor(81, 192);
      // display.println("- Little Green Men");
          return;
        case 1:
          Serial.println(F("11:03 - On the fourth, at 11.03am, the editor of the Yidische Zaitung put in a call to him; Doctor Yarmolinsky did not answer. He was found in his room, his face already a little dark, nearly nude beneath a large, anachronistic cape. - Jorge Luis Borges, Death and the Compass"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On the fourth, at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, the editor of the Yidische");
                // display.setCursor(5, 29);
      // display.println("Zaitung put in a call to him; Doctor");
                // display.setCursor(5, 41);
      // display.println("Yarmolinsky did not answer. He was found in");
                // display.setCursor(5, 53);
      // display.println("his room, his face already a little");
                // display.setCursor(5, 65);
      // display.println("dark, nearly nude beneath a large,");
                // display.setCursor(107, 5);
      // display.println("11.03am");
                // display.setCursor(46, 192);
      // display.println("- Death and the Compass");
          return;
      } // end switch (option)

    // Codegen for 11:04 for 1 quotations:
    case 664:
      Serial.println(F("Only one option for 11:04:"));
    Serial.println(F("11:04 - As her husband had told him, she was still in bed although it was past 11 o'clock. Her normally mobile face was encased in clay, rigid and menacing as an Aztec mask. - Evelyn Waugh, Scoop "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("As her husband had told him, she");
          // display.setCursor(5, 17);
      // display.println("was still in bed although it was");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING.");
          // display.setCursor(5, 41);
      // display.println("Her normally mobile face was");
          // display.setCursor(5, 53);
      // display.println("encased in clay, rigid and menacing as");
          // display.setCursor(5, 29);
      // display.println("past 11 o'clock");
          // display.setCursor(53, 192);
      // display.println("- Evelyn Waugh, Scoop ");
      return;

    // Codegen for 11:05 for 2 quotations:
    case 665:
      option = random(0, 2);
      Serial.print(F("2 options for 11:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:05 - Concentrated enough to feed the zoo and get the log up to date. Read through the operating manuals Whitby left for the last time, decided on a delivery rate of 40 rontgens/min., target distance of 530 cm. Everything is ready now. Woke 11:05. To sleep 3:15. - JG Ballard, The Voices of Time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Concentrated enough to feed the");
                // display.setCursor(5, 17);
      // display.println("zoo and get the log up to date. Read");
                // display.setCursor(5, 29);
      // display.println("through the operating manuals Whitby");
                // display.setCursor(5, 41);
      // display.println("left for the last time, decided on a");
                // display.setCursor(5, 53);
      // display.println("delivery rate of 40 rontgens/min.,");
                // display.setCursor(5, 65);
      // display.println("target distance of 530 cm. Everything");
                // display.setCursor(5, 77);
      // display.println("is ready now. Woke");
                // display.setCursor(102, 77);
      // display.println("11:05");
                // display.setCursor(67, 192);
      // display.println("- The Voices of Time");
          return;
        case 1:
          Serial.println(F("11:05 - Sansom arrived in a Town Car at five past eleven. Local plates, which meant he had ridden up most of the way on the train. Less convenient for him, but a smaller carbon footprint than driving all the way, or flying. Every detail mattered, in a campaign. - Lee Child, Gone Tomorrow"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sansom arrived in a Town Car at");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING.");
                // display.setCursor(5, 29);
      // display.println("Local plates, which meant he had");
                // display.setCursor(5, 41);
      // display.println("ridden up most of the way on the train.");
                // display.setCursor(5, 53);
      // display.println("Less convenient for him, but a");
                // display.setCursor(5, 65);
      // display.println("smaller carbon footprint than driving");
                // display.setCursor(5, 77);
      // display.println("all the way, or flying. Every detail");
                // display.setCursor(5, 17);
      // display.println("five past eleven");
                // display.setCursor(25, 192);
      // display.println("- Lee Child, Gone Tomorrow");
          return;
      } // end switch (option)

    // Codegen for 11:06 for 2 quotations:
    case 666:
      option = random(0, 2);
      Serial.print(F("2 options for 11:06. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:06 - 11:06 And ... oh. The ironing. What am I going to do about that? - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING And ... oh. The");
                // display.setCursor(5, 5);
      // display.println("11:06");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("11:06 - It was entirely possible that they didn't know there was a BookWorld, and still they thought they were real. A fantastic notion, until you consider that up until 11.06am on 12 April 1948, everyone else had thought the same. - Jasper Fforde, One of Our Thursdays is Missing"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was entirely possible that");
                // display.setCursor(5, 17);
      // display.println("they didn't know there was a");
                // display.setCursor(5, 29);
      // display.println("BookWorld, and still they thought they");
                // display.setCursor(5, 41);
      // display.println("were real. A fantastic notion, until");
                // display.setCursor(5, 53);
      // display.println("you consider that up until");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING on 12 April 1948, everyone else");
                // display.setCursor(146, 53);
      // display.println("11.06am");
                // display.setCursor(102, 192);
      // display.println("- Jasper Fforde");
          return;
      } // end switch (option)

    // Codegen for 11:07 for 1 quotations:
    case 667:
      Serial.println(F("Only one option for 11:07:"));
    Serial.println(F("11:07 - At exactly seven minutes past eleven by the ship's clock the Adventurer gave a prolonged screech and, moorings cast off, edged her way out of the basin and dipped her nose in the laughing waters of the bay - Ralph Henry Barbour, The Adventure Club Afloat "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At exactly");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING by the ship's clock the");
          // display.setCursor(5, 41);
      // display.println("Adventurer gave a prolonged screech and,");
          // display.setCursor(5, 53);
      // display.println("moorings cast off, edged her way out of");
          // display.setCursor(5, 65);
      // display.println("the basin and dipped her nose in the");
          // display.setCursor(5, 17);
      // display.println("seven minutes past eleven");
          // display.setCursor(18, 192);
      // display.println("- The Adventure Club Afloat");
      return;

    // Codegen for 11:08 for 1 quotations:
    case 668:
      Serial.println(F("Only one option for 11:08:"));
    Serial.println(F("11:08 - The bursar was standing in the hall with his arms folded across his chest and when he caught sight of the fat young man he looked significantly at the clock. It was eight minutes past eleven. - James Joyce, Stephen Hero"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The bursar was standing in the");
          // display.setCursor(5, 17);
      // display.println("hall with his arms folded across his");
          // display.setCursor(5, 29);
      // display.println("chest and when he caught sight of the");
          // display.setCursor(5, 41);
      // display.println("fat young man he looked");
          // display.setCursor(5, 53);
      // display.println("significantly at the clock. It was");
          // display.setCursor(5, 65);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("eight minutes past eleven");
          // display.setCursor(18, 192);
      // display.println("- James Joyce, Stephen Hero");
      return;

    // Codegen for 11:09 for 1 quotations:
    case 669:
      Serial.println(F("Only one option for 11:09:"));
    Serial.println(F("11:09 - The first time I saw them it was around eleven, eleven-fifteen, a Saturday morning, I was about two thirds through my route when I turned onto their block and noticed a '56 Ford sedan pulled up in the yard with a big open U-Haul behind. - Raymond Carver, Where I'm Calling From "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The first time I saw them it was");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
          // display.setCursor(5, 29);
      // display.println("eleven-fifteen, a Saturday morning, I was");
          // display.setCursor(5, 41);
      // display.println("about two thirds through my route when");
          // display.setCursor(5, 53);
      // display.println("I turned onto their block and");
          // display.setCursor(5, 65);
      // display.println("noticed a '56 Ford sedan pulled up in the");
          // display.setCursor(5, 17);
      // display.println("around eleven");
          // display.setCursor(39, 192);
      // display.println("- Where I'm Calling From");
      return;

    // Codegen for 11:10 for 1 quotations:
    case 670:
      Serial.println(F("Only one option for 11:10:"));
    Serial.println(F("11:10 - Ten minutes after eleven in Archie McCue's room on the third floor of the extension to the Robert Matthews' soaring sixties' tower - The Queen's Tower, although no queen was ever likely to live in it. - Kate Atkinson, Emotionally Weird"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING in Archie McCue's room on the");
          // display.setCursor(5, 29);
      // display.println("third floor of the extension to the");
          // display.setCursor(5, 41);
      // display.println("Robert Matthews' soaring sixties'");
          // display.setCursor(5, 53);
      // display.println("tower - The Queen's Tower, although no");
          // display.setCursor(5, 5);
      // display.println("Ten minutes after eleven");
          // display.setCursor(74, 192);
      // display.println("- Emotionally Weird");
      return;

    // Codegen for 11:11 for 0 quotations:
    case 671:
      Serial.println(F("No quotes for 11:11"));
      return;

    // Codegen for 11:12 for 2 quotations:
    case 672:
      option = random(0, 2);
      Serial.print(F("2 options for 11:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:12 - 11:12 I have a solution, via the local paper. A girl from the village will collect it, iron it all overnight at £3 a shirt, and sew on Eddie's button. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING I have a");
                // display.setCursor(5, 17);
      // display.println("solution, via the local paper. A girl from");
                // display.setCursor(5, 29);
      // display.println("the village will collect it, iron it");
                // display.setCursor(5, 41);
      // display.println("all overnight at £3 a shirt, and sew");
                // display.setCursor(5, 5);
      // display.println("11:12");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("11:12 - I squinted down the street at the bank clock: 11:12, 87 degrees. \"It's only a block and a half and it's not that hot, Daddy. The walk will do you good.\" - Jane Smiley, A Thousand Acres"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I squinted down the street at the");
                // display.setCursor(5, 17);
      // display.println("bank clock: TIMESTRING, 87");
                // display.setCursor(5, 29);
      // display.println("degrees. \"It's only a block and a half");
                // display.setCursor(5, 41);
      // display.println("and it's not that hot, Daddy. The");
                // display.setCursor(53, 17);
      // display.println("11:12");
                // display.setCursor(81, 192);
      // display.println("- A Thousand Acres");
          return;
      } // end switch (option)

    // Codegen for 11:13 for 0 quotations:
    case 673:
      Serial.println(F("No quotes for 11:13"));
      return;

    // Codegen for 11:14 for 1 quotations:
    case 674:
      Serial.println(F("Only one option for 11:14:"));
    Serial.println(F("11:14 - The report was dated Sunday, 25 September, 1966, at 11.14am. The text was laconic. Call from Hrk Vanger; stating that his brother's daughter (?) Harriett Ulrika Vanger, born 15 June 1960 (age 1960) has been missing from her home on Hedley Island since Saturday afternoon. - Stieg Larsson, The Girl With The Dragon Tattoo"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The report was dated Sunday, 25");
          // display.setCursor(5, 17);
      // display.println("September, 1966, at TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("The text was laconic. Call from Hrk");
          // display.setCursor(5, 41);
      // display.println("Vanger; stating that his brother's");
          // display.setCursor(5, 53);
      // display.println("daughter (?) Harriett Ulrika Vanger,");
          // display.setCursor(5, 65);
      // display.println("born 15 June 1960 (age 1960) has been");
          // display.setCursor(5, 77);
      // display.println("missing from her home on Hedley Island");
          // display.setCursor(67, 17);
      // display.println("11.14am.");
          // display.setCursor(102, 192);
      // display.println("- Stieg Larsson");
      return;

    // Codegen for 11:15 for 3 quotations:
    case 675:
      option = random(0, 3);
      Serial.print(F("3 options for 11:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:15 - Shall be glad if you will come with me. Air and scenery perfect. Leave Paddington by the 11:15. - Sir Arthur Conan Doyle, The Adventures of Sherlock Holmes"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Shall be glad if you will come");
                // display.setCursor(5, 17);
      // display.println("with me. Air and scenery perfect.");
                // display.setCursor(5, 29);
      // display.println("Leave Paddington by the");
                // display.setCursor(119, 29);
      // display.println("11:15");
                // display.setCursor(39, 192);
      // display.println("- Sir Arthur Conan Doyle");
          return;
        case 1:
          Serial.println(F("11:15 - If this is so, we have now to determine what Barker and Mrs. Douglas, presuming they are not the actual murderers, would have been doing from quarter to eleven, when the sound of the shot brought them down, until quarter past eleven. - Arthur Conan Doyle, The Valley of Fear"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("If this is so, we have now to");
                // display.setCursor(5, 17);
      // display.println("determine what Barker and Mrs. Douglas,");
                // display.setCursor(5, 29);
      // display.println("presuming they are not the actual");
                // display.setCursor(5, 41);
      // display.println("murderers, would have been doing from");
                // display.setCursor(5, 53);
      // display.println("quarter to eleven, when the sound of the");
                // display.setCursor(5, 65);
      // display.println("shot brought them down, until");
                // display.setCursor(5, 77);
      // display.println("");
                // display.setCursor(5, 77);
      // display.println("quarter past eleven");
                // display.setCursor(67, 192);
      // display.println("- The Valley of Fear");
          return;
        case 2:
          Serial.println(F("11:15 - The first time I saw them it was around eleven, eleven-fifteen, a Saturday morning, I was about two thirds through my route when I turned onto their block and noticed a '56 Ford sedan pulled up in the yard with a big open U-Haul behind. - Raymond Carver, Where I'm Calling From "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The first time I saw them it was");
                // display.setCursor(5, 17);
      // display.println("around eleven,");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, a Saturday morning, I was about");
                // display.setCursor(5, 41);
      // display.println("two thirds through my route when I");
                // display.setCursor(5, 53);
      // display.println("turned onto their block and noticed a");
                // display.setCursor(5, 65);
      // display.println("'56 Ford sedan pulled up in the yard");
                // display.setCursor(62, 17);
      // display.println("eleven-fifteen");
                // display.setCursor(39, 192);
      // display.println("- Where I'm Calling From");
          return;
      } // end switch (option)

    // Codegen for 11:16 for 0 quotations:
    case 676:
      Serial.println(F("No quotes for 11:16"));
      return;

    // Codegen for 11:17 for 1 quotations:
    case 677:
      Serial.println(F("Only one option for 11:17:"));
    Serial.println(F("11:17 - It was seventeen minutes past eleven: she would have lots of time to have the matter out with Mr. Doran and then catch short twelve at Marlborough Street. She was sure she would win. - James Joyce, Dubliners "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING: she would have lots of time to");
          // display.setCursor(5, 41);
      // display.println("have the matter out with Mr. Doran and");
          // display.setCursor(5, 53);
      // display.println("then catch short twelve at");
          // display.setCursor(5, 65);
      // display.println("Marlborough Street. She was sure she would");
          // display.setCursor(5, 17);
      // display.println("seventeen minutes past eleven");
          // display.setCursor(32, 192);
      // display.println("- James Joyce, Dubliners ");
      return;

    // Codegen for 11:18 for 1 quotations:
    case 678:
      Serial.println(F("Only one option for 11:18:"));
    Serial.println(F("11:18 - It is 11.18. A row of bungalows in a round with a clump of larch tree in the middle. - Jackie Kay, Trumpet"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It is TIMESTRING. A row of");
          // display.setCursor(5, 17);
      // display.println("bungalows in a round with a clump of larch");
          // display.setCursor(35, 5);
      // display.println("11.18");
          // display.setCursor(60, 192);
      // display.println("- Jackie Kay, Trumpet");
      return;

    // Codegen for 11:19 for 1 quotations:
    case 679:
      Serial.println(F("Only one option for 11:19:"));
    Serial.println(F("11:19 - A whistle cut sharply across his words. Peter got onto his knees to look out the window, and Miss Fuller glared at him. Polly looked down at her watch: 11:19. The train. But the stationmaster had said it was always late. - Connie Willis, Blackout"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A whistle cut sharply across his");
          // display.setCursor(5, 17);
      // display.println("words. Peter got onto his knees to look");
          // display.setCursor(5, 29);
      // display.println("out the window, and Miss Fuller");
          // display.setCursor(5, 41);
      // display.println("glared at him. Polly looked down at her");
          // display.setCursor(5, 53);
      // display.println("watch: TIMESTRING. The train.");
          // display.setCursor(5, 65);
      // display.println("But the stationmaster had said it");
          // display.setCursor(12, 53);
      // display.println("11:19");
          // display.setCursor(32, 192);
      // display.println("- Connie Willis, Blackout");
      return;

    // Codegen for 11:20 for 2 quotations:
    case 680:
      option = random(0, 2);
      Serial.print(F("2 options for 11:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:20 - OFFICER'S NOTES Disruption alert logged 11h20 from Stones' Pool Hall (Premises ID 33CBD-Long181). Officer and Aito /379 responded. On arrival found subject shouting threats and acting in aggressive manner. - Lauren Beukes, Moxyland "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("OFFICER'S NOTES Disruption");
                // display.setCursor(5, 17);
      // display.println("alert logged TIMESTRING from");
                // display.setCursor(5, 29);
      // display.println("Stones' Pool Hall (Premises ID");
                // display.setCursor(5, 41);
      // display.println("33CBD-Long181). Officer and Aito /379");
                // display.setCursor(5, 53);
      // display.println("responded. On arrival found subject");
                // display.setCursor(5, 65);
      // display.println("shouting threats and acting in");
                // display.setCursor(54, 17);
      // display.println("11h20");
                // display.setCursor(25, 192);
      // display.println("- Lauren Beukes, Moxyland ");
          return;
        case 1:
          Serial.println(F("11:20 - Sweeney pointed to the clock above the bar, held in the massive and indifferent jaws of a stuffed alligator head. The time was 11.20. - Neil Gaiman, American Gods"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Sweeney pointed to the clock");
                // display.setCursor(5, 17);
      // display.println("above the bar, held in the massive and");
                // display.setCursor(5, 29);
      // display.println("indifferent jaws of a stuffed alligator");
                // display.setCursor(84, 41);
      // display.println("11.20");
                // display.setCursor(11, 192);
      // display.println("- Neil Gaiman, American Gods");
          return;
      } // end switch (option)

    // Codegen for 11:21 for 0 quotations:
    case 681:
      Serial.println(F("No quotes for 11:21"));
      return;

    // Codegen for 11:22 for 0 quotations:
    case 682:
      Serial.println(F("No quotes for 11:22"));
      return;

    // Codegen for 11:23 for 0 quotations:
    case 683:
      Serial.println(F("No quotes for 11:23"));
      return;

    // Codegen for 11:24 for 0 quotations:
    case 684:
      Serial.println(F("No quotes for 11:24"));
      return;

    // Codegen for 11:25 for 2 quotations:
    case 685:
      option = random(0, 2);
      Serial.print(F("2 options for 11:25. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:25 - Christine's task was easy enough. Keeping her own watch concealed she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the Sun "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Christine's task was easy");
                // display.setCursor(5, 17);
      // display.println("enough. Keeping her own watch");
                // display.setCursor(5, 29);
      // display.println("concealed she asked Linda at");
                // display.setCursor(5, 41);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING what time it was. Linda looked");
                // display.setCursor(5, 65);
      // display.println("at her watch and replied that it was");
                // display.setCursor(5, 41);
      // display.println("twenty-five past eleven");
                // display.setCursor(67, 192);
      // display.println("- Evil under the Sun");
          return;
        case 1:
          Serial.println(F("11:25 - When, at about 11.25am, Katharina Blum was finally taken from her apartment for questioning, it was decided not to handcuff her at all. - Heinrich Böll, The Lost Honour of Katharina Blum"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("When, at about");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, Katharina Blum was finally");
                // display.setCursor(5, 29);
      // display.println("taken from her apartment for");
                // display.setCursor(5, 41);
      // display.println("questioning, it was decided not to handcuff");
                // display.setCursor(92, 5);
      // display.println("11.25am");
                // display.setCursor(102, 192);
      // display.println("- Heinrich Böll");
          return;
      } // end switch (option)

    // Codegen for 11:26 for 0 quotations:
    case 686:
      Serial.println(F("No quotes for 11:26"));
      return;

    // Codegen for 11:27 for 1 quotations:
    case 687:
      Serial.println(F("Only one option for 11:27:"));
    Serial.println(F("11:27 - It's from one of the more recent plates the tree has scanned: 11.27 in the morning of 4 April 1175 - Chris James, The Second Internet Cafe, Part 2: The Cascade Annihilator"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It's from one of the more recent");
          // display.setCursor(5, 17);
      // display.println("plates the tree has scanned:");
          // display.setCursor(142, 17);
      // display.println("11.27");
          // display.setCursor(116, 192);
      // display.println("- Chris James");
      return;

    // Codegen for 11:28 for 1 quotations:
    case 688:
      Serial.println(F("Only one option for 11:28:"));
    Serial.println(F("11:28 - From twenty minutes past nine until twenty-seven minutes past nine, from twenty-five minutes past eleven until twenty-eight minutes past eleven, from ten minutes to three until two minutes to three the heroes of the school met - Compton Mackenzie, Sinister Street"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("From twenty minutes past nine");
          // display.setCursor(5, 17);
      // display.println("until twenty-seven minutes past");
          // display.setCursor(5, 29);
      // display.println("nine, from twenty-five minutes past");
          // display.setCursor(5, 41);
      // display.println("eleven until");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, from ten minutes to three until");
          // display.setCursor(5, 77);
      // display.println("two minutes to three the heroes of");
          // display.setCursor(5, 53);
      // display.println("twenty-eight minutes past eleven");
          // display.setCursor(88, 192);
      // display.println("- Sinister Street");
      return;

    // Codegen for 11:29 for 1 quotations:
    case 689:
      Serial.println(F("Only one option for 11:29:"));
    Serial.println(F("11:29 - You are four minutes too slow. No matter; it's enough to mention the error. Now from this moment, twenty-nine minutes after eleven, a.m., this Wednesday, 2nd October, you are in my service. - Jules Verne, Around the World in Eighty Days"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("You are four minutes too slow. No");
          // display.setCursor(5, 17);
      // display.println("matter; it's enough to mention the");
          // display.setCursor(5, 29);
      // display.println("error. Now from this moment,");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING, this Wednesday, 2nd October,");
          // display.setCursor(5, 41);
      // display.println("twenty-nine minutes after eleven, a.m.");
          // display.setCursor(116, 192);
      // display.println("- Jules Verne");
      return;

    // Codegen for 11:30 for 4 quotations:
    case 690:
      option = random(0, 4);
      Serial.print(F("4 options for 11:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:30 - 'It is now 11.30. The door to this room is shut, and will remain shut, barring emergencies, until 12.00. I am authorised to inform you that we are now under battle orders. - Charles Stross, Singularity Sky "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'It is now TIMESTRING. The");
                // display.setCursor(5, 17);
      // display.println("door to this room is shut, and will");
                // display.setCursor(5, 29);
      // display.println("remain shut, barring emergencies,");
                // display.setCursor(5, 41);
      // display.println("until 12.00. I am authorised to inform");
                // display.setCursor(5, 53);
      // display.println("you that we are now under battle");
                // display.setCursor(64, 5);
      // display.println("11.30");
                // display.setCursor(88, 192);
      // display.println("- Singularity Sky");
          return;
        case 1:
          Serial.println(F("11:30 - O, Frank - I made a mistake! - I thought that church with the spire was All Saints', and I was at the door at half-past eleven to a minute as you said... - Thomas Hardy, Far from the madding crowd "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("O, Frank - I made a mistake! - I");
                // display.setCursor(5, 17);
      // display.println("thought that church with the spire was");
                // display.setCursor(5, 29);
      // display.println("All Saints', and I was at the door at");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING to");
                // display.setCursor(5, 41);
      // display.println("half-past eleven");
                // display.setCursor(11, 192);
      // display.println("- Far from the madding crowd");
          return;
        case 2:
          Serial.println(F("11:30 - Beddows had abjured Satan at a little after half-past eleven. By about eighteen minutes the Canon had beaten them to it again.\" - Dennis Wheatley, To the Devil a Daughter "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Beddows had abjured Satan at a");
                // display.setCursor(5, 17);
      // display.println("little after");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING. By about eighteen minutes the");
                // display.setCursor(48, 17);
      // display.println("half-past eleven");
                // display.setCursor(32, 192);
      // display.println("- To the Devil a Daughter");
          return;
        case 3:
          Serial.println(F("11:30 - This time it was Kumiko. The wall clock said 11.30. - Haruki Murakami, The Wind-up Bird Chronicle "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("This time it was Kumiko. The wall");
                // display.setCursor(40, 17);
      // display.println("11.30");
                // display.setCursor(11, 192);
      // display.println("- The Wind-up Bird Chronicle");
          return;
      } // end switch (option)

    // Codegen for 11:31 for 1 quotations:
    case 691:
      Serial.println(F("Only one option for 11:31:"));
    Serial.println(F("11:31 - Albatross 8 passed over Pamlico Sound at 1131 local time. Its on-board programming was designed to trace thermal receptors over the entire visible horizon, interrogating everything in sight and locking on any signature that fit its acquisition parameters. - Tom Clancy, The Hunt for Red October "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Albatross 8 passed over Pamlico");
          // display.setCursor(5, 17);
      // display.println("Sound at TIMESTRING local time.");
          // display.setCursor(5, 29);
      // display.println("Its on-board programming was");
          // display.setCursor(5, 41);
      // display.println("designed to trace thermal receptors");
          // display.setCursor(5, 53);
      // display.println("over the entire visible horizon,");
          // display.setCursor(5, 65);
      // display.println("interrogating everything in sight and");
          // display.setCursor(5, 77);
      // display.println("locking on any signature that fit its");
          // display.setCursor(26, 17);
      // display.println("1131");
          // display.setCursor(25, 192);
      // display.println("- The Hunt for Red October");
      return;

    // Codegen for 11:32 for 1 quotations:
    case 692:
      Serial.println(F("Only one option for 11:32:"));
    Serial.println(F("11:32 - And after that, not forgetting, there was the Flemish armada, all scattered, and all officially drowned, there and then, on a lovely morning, after the universal flood, at about eleven thirty two was it? Off the coast of Cominghome... - James Joyce, Finnegans Wake"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("And after that, not forgetting,");
          // display.setCursor(5, 17);
      // display.println("there was the Flemish armada, all");
          // display.setCursor(5, 29);
      // display.println("scattered, and all officially drowned,");
          // display.setCursor(5, 41);
      // display.println("there and then, on a lovely morning,");
          // display.setCursor(5, 53);
      // display.println("after the universal flood, at about");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING");
          // display.setCursor(5, 77);
      // display.println("was it? Off the coast of");
          // display.setCursor(5, 65);
      // display.println("eleven thirty two");
          // display.setCursor(4, 192);
      // display.println("- James Joyce, Finnegans Wake");
      return;

    // Codegen for 11:33 for 0 quotations:
    case 693:
      Serial.println(F("No quotes for 11:33"));
      return;

    // Codegen for 11:34 for 1 quotations:
    case 694:
      Serial.println(F("Only one option for 11:34:"));
    Serial.println(F("11:34 - Christmas Eve 1995. 11.34am. The first time, Almasa says it slowly and softly, as if she is really looking for an answer. - Adnan Mahmutovic, How to Fare Well and Stay Fair"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Christmas Eve 1995.");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. The first time, Almasa says it");
          // display.setCursor(5, 29);
      // display.println("slowly and softly, as if she is really");
          // display.setCursor(127, 5);
      // display.println("11.34am");
          // display.setCursor(81, 192);
      // display.println("- Adnan Mahmutovic");
      return;

    // Codegen for 11:35 for 1 quotations:
    case 695:
      Serial.println(F("Only one option for 11:35:"));
    Serial.println(F("11:35 - At 11.35 the Colonel came out; he looked hot and angry as he strode towards the lift. There goes a hanging judge, thought Wormold. - Graham Greene, Our Man in Havana"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING the Colonel");
          // display.setCursor(5, 17);
      // display.println("came out; he looked hot and angry as");
          // display.setCursor(5, 29);
      // display.println("he strode towards the lift. There");
          // display.setCursor(5, 41);
      // display.println("goes a hanging judge, thought");
          // display.setCursor(20, 5);
      // display.println("11.35");
          // display.setCursor(74, 192);
      // display.println("- Our Man in Havana");
      return;

    // Codegen for 11:36 for 1 quotations:
    case 696:
      Serial.println(F("Only one option for 11:36:"));
    Serial.println(F("11:36 - I ran up the stairs, away from the heat and the noise, the mess and the confusion. I saw the clock radio by my bed. Eleven thirty-six. - Nicci French, Losing You"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I ran up the stairs, away from the");
          // display.setCursor(5, 17);
      // display.println("heat and the noise, the mess and the");
          // display.setCursor(5, 29);
      // display.println("confusion. I saw the clock radio by my bed.");
          // display.setCursor(5, 41);
      // display.println("Eleven thirty-six");
          // display.setCursor(25, 192);
      // display.println("- Nicci French, Losing You");
      return;

    // Codegen for 11:37 for 0 quotations:
    case 697:
      Serial.println(F("No quotes for 11:37"));
      return;

    // Codegen for 11:38 for 1 quotations:
    case 698:
      Serial.println(F("Only one option for 11:38:"));
    Serial.println(F("11:38 - At 11:38, she left her desk and walked to the side door of the auditorium, arriving ten minutes before noon. - Dave Eggers, The Circle"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING, she left");
          // display.setCursor(5, 17);
      // display.println("her desk and walked to the side door");
          // display.setCursor(5, 29);
      // display.println("of the auditorium, arriving ten");
          // display.setCursor(20, 5);
      // display.println("11:38");
          // display.setCursor(32, 192);
      // display.println("- Dave Eggers, The Circle");
      return;

    // Codegen for 11:39 for 0 quotations:
    case 699:
      Serial.println(F("No quotes for 11:39"));
      return;

    // Codegen for 11:40 for 2 quotations:
    case 700:
      option = random(0, 2);
      Serial.print(F("2 options for 11:40. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:40 - On the line where these words were written, \"21st December, Saturday, Liverpool,\" he added, \"80th day, 11.40am,\" and waited. - Jules Verne, Around the World in Eighty Days"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On the line where these words");
                // display.setCursor(5, 17);
      // display.println("were written, \"21st December,");
                // display.setCursor(5, 29);
      // display.println("Saturday, Liverpool,\" he added, \"80th");
                // display.setCursor(5, 41);
      // display.println("day, TIMESTRING,\" and");
                // display.setCursor(10, 41);
      // display.println("11.40am");
                // display.setCursor(116, 192);
      // display.println("- Jules Verne");
          return;
        case 1:
          Serial.println(F("11:40 - During the sessions at Ito he read the Lotus Sutra on mornings of play, and he now seemed to be bringing himself to order through silent meditation. Then, quickly, there came a rap of stone on board. It was twenty minutes before noon. - Yusunari Kawabata, The Master of Go "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("During the sessions at Ito he");
                // display.setCursor(5, 17);
      // display.println("read the Lotus Sutra on mornings of");
                // display.setCursor(5, 29);
      // display.println("play, and he now seemed to be bringing");
                // display.setCursor(5, 41);
      // display.println("himself to order through silent");
                // display.setCursor(5, 53);
      // display.println("meditation. Then, quickly, there came a rap");
                // display.setCursor(5, 65);
      // display.println("of stone on board. It was");
                // display.setCursor(5, 77);
      // display.println("");
                // display.setCursor(5, 77);
      // display.println("twenty minutes before noon");
                // display.setCursor(81, 192);
      // display.println("- The Master of Go");
          return;
      } // end switch (option)

    // Codegen for 11:41 for 1 quotations:
    case 701:
      Serial.println(F("Only one option for 11:41:"));
    Serial.println(F("11:41 - Spagnola took a deep breath and started into the log again. \"Eleven forty-one: large dog craps in Dr. Yamata's Aston Martin.\" - Christopher Moore, Coyote Blue "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Spagnola took a deep breath and");
          // display.setCursor(5, 17);
      // display.println("started into the log again.");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("\"TIMESTRING: large dog craps in Dr.");
          // display.setCursor(5, 29);
      // display.println("Eleven forty-one");
          // display.setCursor(116, 192);
      // display.println("- Coyote Blue");
      return;

    // Codegen for 11:42 for 1 quotations:
    case 702:
      Serial.println(F("Only one option for 11:42:"));
    Serial.println(F("11:42 - 11:42 I'm doing fine. I'm doing well. I've got the Hoover on, I'm cruising along nicely- What was that? What just went up the Hoover? Why is it making that grinding noise? Have I broken it? - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING I'm doing fine.");
          // display.setCursor(5, 17);
      // display.println("I'm doing well. I've got the Hoover");
          // display.setCursor(5, 29);
      // display.println("on, I'm cruising along nicely- What");
          // display.setCursor(5, 41);
      // display.println("was that? What just went up the");
          // display.setCursor(5, 53);
      // display.println("Hoover? Why is it making that grinding");
          // display.setCursor(5, 5);
      // display.println("11:42");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 11:43 for 0 quotations:
    case 703:
      Serial.println(F("No quotes for 11:43"));
      return;

    // Codegen for 11:44 for 0 quotations:
    case 704:
      Serial.println(F("No quotes for 11:44"));
      return;

    // Codegen for 11:45 for 6 quotations:
    case 705:
      option = random(0, 6);
      Serial.print(F("6 options for 11:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:45 - Christine's task was easy enough. Keeping her own watch concealed she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the Sun "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Christine's task was easy");
                // display.setCursor(5, 17);
      // display.println("enough. Keeping her own watch");
                // display.setCursor(5, 29);
      // display.println("concealed she asked Linda at twenty-five");
                // display.setCursor(5, 41);
      // display.println("past eleven what time it was. Linda");
                // display.setCursor(5, 53);
      // display.println("looked at her watch and replied that it");
                // display.setCursor(5, 65);
      // display.println("was a");
                // display.setCursor(17, 65);
      // display.println("quarter to twelve");
                // display.setCursor(67, 192);
      // display.println("- Evil under the Sun");
          return;
        case 1:
          Serial.println(F("11:45 - ...I waited till a quarter to twelve, and found then that I was in All Souls'. But I wasn't much frightened, for I thought it could be tomorrow as well. - Thomas Hardy, Far from the madding crowd "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("...I waited till a");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING,");
                // display.setCursor(5, 29);
      // display.println("and found then that I was in All");
                // display.setCursor(5, 41);
      // display.println("Souls'. But I wasn't much frightened,");
                // display.setCursor(5, 53);
      // display.println("for I thought it could be tomorrow as");
                // display.setCursor(5, 17);
      // display.println("quarter to twelve");
                // display.setCursor(11, 192);
      // display.println("- Far from the madding crowd");
          return;
        case 2:
          Serial.println(F("11:45 - Said Septimus, very slowly, very drowsily, smiling mysteriously. As he sat smiling at the dead man in the grey suit the quarter struck, the quarter to twelve.\" - Virginia Woolf, Mrs. Dalloway "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Said Septimus, very slowly, very");
                // display.setCursor(5, 17);
      // display.println("drowsily, smiling mysteriously. As he");
                // display.setCursor(5, 29);
      // display.println("sat smiling at the dead man in the");
                // display.setCursor(5, 41);
      // display.println("grey suit the quarter struck, the");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 53);
      // display.println("quarter to twelve");
                // display.setCursor(102, 192);
      // display.println("- Mrs. Dalloway");
          return;
        case 3:
          Serial.println(F("11:45 - As he sat smiling, the quarter struck - the quarter to twelve. - Virginia Woolf, Mrs Dalloway "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("As he sat smiling, the quarter");
                // display.setCursor(5, 17);
      // display.println("struck - the");
                // display.setCursor(42, 17);
      // display.println("quarter to twelve");
                // display.setCursor(109, 192);
      // display.println("- Mrs Dalloway");
          return;
        case 4:
          Serial.println(F("11:45 - I arrived at St. Gatien from Nice on Tuesday, the 14th of August. I was arrested at 11.45am on Thursday, the 16th by an agent de police and an inspector in plain clothes and taken to the Commissariat. - Eric Ambler, Epitaph for a Spy"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I arrived at St. Gatien from Nice");
                // display.setCursor(5, 17);
      // display.println("on Tuesday, the 14th of August. I");
                // display.setCursor(5, 29);
      // display.println("was arrested at TIMESTRING");
                // display.setCursor(5, 41);
      // display.println("on Thursday, the 16th by an agent de");
                // display.setCursor(5, 53);
      // display.println("police and an inspector in plain");
                // display.setCursor(81, 29);
      // display.println("11.45am");
                // display.setCursor(74, 192);
      // display.println("- Epitaph for a Spy");
          return;
        case 5:
          Serial.println(F("11:45 - She tucked the phone in the crook of her neck and thumbed hurriedly through her pink messages. .... Dr. Provetto, at 11:45 A.M. - Lisa Scottoline, Mistaken Identity "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("She tucked the phone in the crook");
                // display.setCursor(5, 17);
      // display.println("of her neck and thumbed hurriedly");
                // display.setCursor(5, 29);
      // display.println("through her pink messages. .... Dr.");
                // display.setCursor(30, 41);
      // display.println("11:45 A.M.");
                // display.setCursor(74, 192);
      // display.println("- Mistaken Identity");
          return;
      } // end switch (option)

    // Codegen for 11:46 for 0 quotations:
    case 706:
      Serial.println(F("No quotes for 11:46"));
      return;

    // Codegen for 11:47 for 1 quotations:
    case 707:
      Serial.println(F("Only one option for 11:47:"));
    Serial.println(F("11:47 - ... and I walked a long time beneath a colourless sky, which didn't let me judge the time (my watch, set like all military watches to Berlin time, hadn't stood up to the swim and showed an eternal thirteen minutes to noon). - Jonathan Littell, The Kindly Ones"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("... and I walked a long time");
          // display.setCursor(5, 17);
      // display.println("beneath a colourless sky, which didn't");
          // display.setCursor(5, 29);
      // display.println("let me judge the time (my watch, set");
          // display.setCursor(5, 41);
      // display.println("like all military watches to Berlin");
          // display.setCursor(5, 53);
      // display.println("time, hadn't stood up to the swim and");
          // display.setCursor(5, 65);
      // display.println("showed an eternal");
          // display.setCursor(5, 77);
      // display.println("");
          // display.setCursor(5, 77);
      // display.println("thirteen minutes to noon");
          // display.setCursor(88, 192);
      // display.println("- The Kindly Ones");
      return;

    // Codegen for 11:48 for 1 quotations:
    case 708:
      Serial.println(F("Only one option for 11:48:"));
    Serial.println(F("11:48 - At 11:38, she left her desk and walked to the side door of the auditorium, arriving ten minutes before noon. - Dave Eggers, The Circle"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At 11:38, she left her desk and");
          // display.setCursor(5, 17);
      // display.println("walked to the side door of the");
          // display.setCursor(5, 29);
      // display.println("auditorium, arriving");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("ten minutes before noon");
          // display.setCursor(32, 192);
      // display.println("- Dave Eggers, The Circle");
      return;

    // Codegen for 11:49 for 0 quotations:
    case 709:
      Serial.println(F("No quotes for 11:49"));
      return;

    // Codegen for 11:50 for 1 quotations:
    case 710:
      Serial.println(F("Only one option for 11:50:"));
    Serial.println(F("11:50 - The man who gave them to him handed him a ten-shilling note and promised him another if it were delivered at exactly ten minutes to twelve. - Agatha Christie, The Adventure of Johnnie Waverley: A Hercule Poirot Story"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The man who gave them to him");
          // display.setCursor(5, 17);
      // display.println("handed him a ten-shilling note and");
          // display.setCursor(5, 29);
      // display.println("promised him another if it were");
          // display.setCursor(5, 41);
      // display.println("delivered at exactly");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("ten minutes to twelve");
          // display.setCursor(88, 192);
      // display.println("- Agatha Christie");
      return;

    // Codegen for 11:51 for 1 quotations:
    case 711:
      Serial.println(F("Only one option for 11:51:"));
    Serial.println(F("11:51 - The next day, at nine minutes to twelve o'clock noon, the last clock ran down and stopped. It was then placed in the town museum, as a collector's item, or museum piece, with proper ceremonies, addresses, and the like. - James Thurber, Lanterns & Lances"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The next day, at");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING o'clock noon, the last clock");
          // display.setCursor(5, 41);
      // display.println("ran down and stopped. It was then");
          // display.setCursor(5, 53);
      // display.println("placed in the town museum, as a");
          // display.setCursor(5, 65);
      // display.println("collector's item, or museum piece, with");
          // display.setCursor(5, 77);
      // display.println("proper ceremonies, addresses, and the");
          // display.setCursor(5, 17);
      // display.println("nine minutes to twelve");
          // display.setCursor(74, 192);
      // display.println("- Lanterns & Lances");
      return;

    // Codegen for 11:52 for 1 quotations:
    case 712:
      Serial.println(F("Only one option for 11:52:"));
    Serial.println(F("11:52 - At any rate, we whirled into the station with many more, just as the great clock pointed to eight minutes to twelve o'clock. \"Thank God! We are in time,\" - Anna Sewell, Black Beauty"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At any rate, we whirled into the");
          // display.setCursor(5, 17);
      // display.println("station with many more, just as the");
          // display.setCursor(5, 29);
      // display.println("great clock pointed to");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING o'clock. \"Thank God! We are in");
          // display.setCursor(5, 41);
      // display.println("eight minutes to twelve");
          // display.setCursor(18, 192);
      // display.println("- Anna Sewell, Black Beauty");
      return;

    // Codegen for 11:53 for 0 quotations:
    case 713:
      Serial.println(F("No quotes for 11:53"));
      return;

    // Codegen for 11:54 for 1 quotations:
    case 714:
      Serial.println(F("Only one option for 11:54:"));
    Serial.println(F("11:54 - He swilled off the remains of [his beer] and looked at the clock. It was six minutes to twelve. - Patrick Hamilton, Hangover Square"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("He swilled off the remains of");
          // display.setCursor(5, 17);
      // display.println("[his beer] and looked at the clock. It");
          // display.setCursor(5, 29);
      // display.println("was");
          // display.setCursor(9, 29);
      // display.println("six minutes to twelve");
          // display.setCursor(88, 192);
      // display.println("- Hangover Square");
      return;

    // Codegen for 11:55 for 3 quotations:
    case 715:
      option = random(0, 3);
      Serial.print(F("3 options for 11:55. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:55 - He was tearing off on his bicycle to one of the jobs about five minutes to twelve to see if he could catch anyone leaving off for dinner before the proper time. - Robert Tressell, The Ragged Trousered Philanthropists"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("He was tearing off on his bicycle");
                // display.setCursor(5, 17);
      // display.println("to one of the jobs about");
                // display.setCursor(5, 29);
      // display.println("");
                // display.setCursor(5, 41);
      // display.println("TIMESTRING to see if he could catch anyone");
                // display.setCursor(5, 53);
      // display.println("leaving off for dinner before the");
                // display.setCursor(5, 29);
      // display.println("five minutes to twelve");
                // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
          return;
        case 1:
          Serial.println(F("11:55 - It was 11:55 a.m. on April 30. - Bernstein & Woodward, All the President's Men "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was TIMESTRING on");
                // display.setCursor(42, 5);
      // display.println("11:55 a.m.");
                // display.setCursor(32, 192);
      // display.println("- All the President's Men");
          return;
        case 2:
          Serial.println(F("11:55 - What time did you arrive at the site? It was 11:55. I remember since I happened to glance at my watch when we got there. We rode our bicycles to the bottom of the hill, as far as we could go, then climbed the rest of the way on foot. - Haruki Murakami, Kafka on the Shore"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What time did you arrive at the");
                // display.setCursor(5, 17);
      // display.println("site? It was TIMESTRING. I");
                // display.setCursor(5, 29);
      // display.println("remember since I happened to glance at my");
                // display.setCursor(5, 41);
      // display.println("watch when we got there. We rode our");
                // display.setCursor(5, 53);
      // display.println("bicycles to the bottom of the hill, as far");
                // display.setCursor(5, 65);
      // display.println("as we could go, then climbed the");
                // display.setCursor(48, 17);
      // display.println("11:55");
                // display.setCursor(67, 192);
      // display.println("- Kafka on the Shore");
          return;
      } // end switch (option)

    // Codegen for 11:56 for 2 quotations:
    case 716:
      option = random(0, 2);
      Serial.print(F("2 options for 11:56. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:56 - A few minutes' light around noon is all that you need to discover the error, and re-set the clock – provide that you bother to go up and make the observation. - Neal Stephenson, Odalisque: The Baroque Cycle #3 "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("A few minutes' light");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING is all that you need to discover");
                // display.setCursor(5, 29);
      // display.println("the error, and re-set the clock –");
                // display.setCursor(5, 41);
      // display.println("provide that you bother to go up and make");
                // display.setCursor(128, 5);
      // display.println("around noon");
                // display.setCursor(88, 192);
      // display.println("- Neal Stephenson");
          return;
        case 1:
          Serial.println(F("11:56 - I wondered what the time is?' said the latter after a pause'. 'I don't know exactly', replied Easton, 'but it can't be far-off twelve.' - Robert Tressell, The Ragged Trousered Philanthropists"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I wondered what the time is?'");
                // display.setCursor(5, 17);
      // display.println("said the latter after a pause'. 'I");
                // display.setCursor(5, 29);
      // display.println("don't know exactly', replied Easton,");
                // display.setCursor(5, 41);
      // display.println("'but it");
                // display.setCursor(25, 41);
      // display.println("can't be far-off twelve");
                // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
          return;
      } // end switch (option)

    // Codegen for 11:57 for 1 quotations:
    case 717:
      Serial.println(F("Only one option for 11:57:"));
    Serial.println(F("11:57 - I wondered what the time is?' said the latter after a pause'. 'I don't know exactly', replied Easton, 'but it can't be far-off twelve.' - Robert Tressell, The Ragged Trousered Philanthropists"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("I wondered what the time is?'");
          // display.setCursor(5, 17);
      // display.println("said the latter after a pause'. 'I");
          // display.setCursor(5, 29);
      // display.println("don't know exactly', replied Easton,");
          // display.setCursor(5, 41);
      // display.println("'but it");
          // display.setCursor(25, 41);
      // display.println("can't be far-off twelve");
          // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
      return;

    // Codegen for 11:58 for 2 quotations:
    case 718:
      option = random(0, 2);
      Serial.print(F("2 options for 11:58. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:58 - And when you go down the steps, it's always 11.58 on the morning of September ninth, 1958. - Stephen King, 11/22/63"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("And when you go down the steps,");
                // display.setCursor(5, 17);
      // display.println("it's always TIMESTRING on the");
                // display.setCursor(53, 17);
      // display.println("11.58");
                // display.setCursor(39, 192);
      // display.println("- Stephen King, 11/22/63");
          return;
        case 1:
          Serial.println(F("11:58 - Two minutes before the clock struck noon, the savage baron was on the platform to inspect the preparation for the frightful ceremony of mid-day. - William Makepeace Thackeray, Burlesques "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING, the savage baron was on the");
                // display.setCursor(5, 41);
      // display.println("platform to inspect the preparation for");
                // display.setCursor(5, 17);
      // display.println("Two minutes before the clock struck noon");
                // display.setCursor(123, 192);
      // display.println("- Burlesques");
          return;
      } // end switch (option)

    // Codegen for 11:59 for 1 quotations:
    case 719:
      Serial.println(F("Only one option for 11:59:"));
    Serial.println(F("11:59 - There is a big grandfather clock there, and as the hands drew near to twelve I don't mind confessing I was as nervous as a cat. - Agatha Christie, The Adventure of Johnnie Waverley: A Hercule Poirot Story"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("There is a big grandfather clock");
          // display.setCursor(5, 17);
      // display.println("there, and as the hands drew");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING I");
          // display.setCursor(5, 41);
      // display.println("don't mind confessing I was as nervous");
          // display.setCursor(5, 29);
      // display.println("near to twelve");
          // display.setCursor(88, 192);
      // display.println("- Agatha Christie");
      return;

    // Codegen for 12:00 for 11 quotations:
    case 720:
      option = random(0, 11);
      Serial.print(F("11 options for 12:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:00 - 'It will soon be an hour and a half,' said the girl who kept the records. The noonday siren blew. 'Exactly a minute,' she said, looking at the stopwatch of which she was so proud. - Yasunari Kawabata, The Master of Go "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'It will soon be an hour and a");
                // display.setCursor(5, 17);
      // display.println("half,' said the girl who kept the");
                // display.setCursor(5, 29);
      // display.println("records. The TIMESTRINGday siren");
                // display.setCursor(5, 41);
      // display.println("blew. 'Exactly a minute,' she said,");
                // display.setCursor(5, 53);
      // display.println("looking at the stopwatch of which she");
                // display.setCursor(36, 29);
      // display.println("noon");
                // display.setCursor(81, 192);
      // display.println("- The Master of Go");
          return;
        case 1:
          Serial.println(F("12:00 - 'There's nobody here!' I insisted. 'It was yourself, Mrs. Linton: you knew it a while since.' 'Myself!' she gasped, 'and the clock is striking twelve! - Emily Brontë, Wuthering Heights "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'There's nobody here!' I");
                // display.setCursor(5, 17);
      // display.println("insisted. 'It was yourself, Mrs. Linton:");
                // display.setCursor(5, 29);
      // display.println("you knew it a while since.'");
                // display.setCursor(5, 41);
      // display.println("'Myself!' she gasped, 'and the clock is");
                // display.setCursor(14, 53);
      // display.println("twelve");
                // display.setCursor(74, 192);
      // display.println("- Wuthering Heights");
          return;
        case 2:
          Serial.println(F("12:00 - A cheap little clock on the wall struck twelve hurriedly, and served to begin the conversation. - Fyodor Dostoyevsky, The Brothers Karamazov "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("A cheap little clock on the wall");
                // display.setCursor(5, 17);
      // display.println("struck TIMESTRING hurriedly,");
                // display.setCursor(5, 29);
      // display.println("and served to begin the");
                // display.setCursor(12, 17);
      // display.println("twelve");
                // display.setCursor(39, 192);
      // display.println("- The Brothers Karamazov");
          return;
        case 3:
          Serial.println(F("12:00 - ... alive now and everywhere in the present, and the hovering faces brightened and blurred about him, became the sound of a canal in the morning, the look of some roofs in the noon sun, and the fragrance of a certain evening flower. Here he was, home at last. - Nick Joaquin, The Woman Who Had Two Navels "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("... alive now and everywhere in");
                // display.setCursor(5, 17);
      // display.println("the present, and the hovering faces");
                // display.setCursor(5, 29);
      // display.println("brightened and blurred about him, became");
                // display.setCursor(5, 41);
      // display.println("the sound of a canal in the morning,");
                // display.setCursor(5, 53);
      // display.println("the look of some roofs in the");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING sun, and the fragrance of a");
                // display.setCursor(5, 77);
      // display.println("certain evening flower. Here he was,");
                // display.setCursor(155, 53);
      // display.println("noon");
                // display.setCursor(109, 192);
      // display.println("- Nick Joaquin");
          return;
        case 4:
          Serial.println(F("12:00 - It was precisely twelve o’clock; twelve by Big Ben; whose stroke was wafted over the northern part of London; blent with that of other clocks, mixed in a thin ethereal way with the clouds and wisps of smoke, and died up there among the seagulls. - Virginia Woolf, Mrs Dalloway"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was precisely");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING; twelve by Big Ben; whose stroke");
                // display.setCursor(5, 29);
      // display.println("was wafted over the northern part of");
                // display.setCursor(5, 41);
      // display.println("London; blent with that of other");
                // display.setCursor(5, 53);
      // display.println("clocks, mixed in a thin ethereal way");
                // display.setCursor(5, 65);
      // display.println("with the clouds and wisps of smoke,");
                // display.setCursor(5, 77);
      // display.println("and died up there among the");
                // display.setCursor(106, 5);
      // display.println("twelve o’clock");
                // display.setCursor(109, 192);
      // display.println("- Mrs Dalloway");
          return;
        case 5:
          Serial.println(F("12:00 - Noon found him momentarily alone, while the family prepared lunch in the kitchen. The cracks in the ceiling widened into gaps. - Paul Harding, Tinkers"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("TIMESTRING found him");
                // display.setCursor(5, 17);
      // display.println("momentarily alone, while the family");
                // display.setCursor(5, 29);
      // display.println("prepared lunch in the kitchen. The");
                // display.setCursor(5, 41);
      // display.println("cracks in the ceiling widened into");
                // display.setCursor(5, 5);
      // display.println("Noon");
                // display.setCursor(46, 192);
      // display.println("- Paul Harding, Tinkers");
          return;
        case 6:
          Serial.println(F("12:00 - On Friday noon, July the twentieth, 1714, the finest bridge in all Peru broke and precipitated five travellers into the gulf below. - Thornton Wilder, The Bridge of San Luis Rey "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("On Friday TIMESTRING, July");
                // display.setCursor(5, 17);
      // display.println("the twentieth, 1714, the finest");
                // display.setCursor(5, 29);
      // display.println("bridge in all Peru broke and");
                // display.setCursor(5, 41);
      // display.println("precipitated five travellers into the gulf");
                // display.setCursor(63, 5);
      // display.println("noon");
                // display.setCursor(11, 192);
      // display.println("- The Bridge of San Luis Rey");
          return;
        case 7:
          Serial.println(F("12:00 - Roaring noon. In a well-fanned Forty-second Street cellar I met Gatsby for lunch. - F. Scott Fitzgerald, The Great Gatsby "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Roaring TIMESTRING. In a");
                // display.setCursor(5, 17);
      // display.println("well-fanned Forty-second Street cellar I");
                // display.setCursor(55, 5);
      // display.println("noon");
                // display.setCursor(81, 192);
      // display.println("- The Great Gatsby");
          return;
        case 8:
          Serial.println(F("12:00 - The Birds begun at Four o'clock - Their period for Dawn - A Music numerous as space - But neighboring as Noon - Emily Dickinson, The Birds begun at Four o'clock"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Birds begun at Four o'clock -");
                // display.setCursor(5, 17);
      // display.println("Their period for Dawn - A Music");
                // display.setCursor(5, 29);
      // display.println("numerous as space - But neighboring as");
                // display.setCursor(5, 41);
      // display.println("Noon");
                // display.setCursor(88, 192);
      // display.println("- Emily Dickinson");
          return;
        case 9:
          Serial.println(F("12:00 - The Oxen Christmas Eve, and twelve of the clock. \"Now they are all on their knees,\" - Thomas Hardy, The Oxen "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("The Oxen Christmas Eve, and");
                // display.setCursor(5, 17);
      // display.println("TIMESTRINGof the clock.");
                // display.setCursor(5, 17);
      // display.println("twelve ");
                // display.setCursor(32, 192);
      // display.println("- Thomas Hardy, The Oxen ");
          return;
        case 10:
          Serial.println(F("12:00 - Then came the stroke of noon, and all these working and professional people dispersed like a trampled anthill into all the streets and directions. The white bridge was swarming with nimble dots. - Robert Walser, The Tanners "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Then came the stroke of");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, and all these working and");
                // display.setCursor(5, 29);
      // display.println("professional people dispersed like a");
                // display.setCursor(5, 41);
      // display.println("trampled anthill into all the streets");
                // display.setCursor(5, 53);
      // display.println("and directions. The white bridge");
                // display.setCursor(143, 5);
      // display.println("noon");
                // display.setCursor(4, 192);
      // display.println("- Robert Walser, The Tanners ");
          return;
      } // end switch (option)

    // Codegen for 12:01 for 3 quotations:
    case 721:
      option = random(0, 3);
      Serial.print(F("3 options for 12:01. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:01 - Most of them were too high off the ground to be reached by anything less than a fireman's ladder and still retained their hands. All registered the same time: 12:01. Conrad looked at his wristwatch, noted that it was just 2:45. - J.G. Ballard, Chronopolis "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Most of them were too high off the");
                // display.setCursor(5, 17);
      // display.println("ground to be reached by anything less");
                // display.setCursor(5, 29);
      // display.println("than a fireman's ladder and still");
                // display.setCursor(5, 41);
      // display.println("retained their hands. All registered");
                // display.setCursor(5, 53);
      // display.println("the same time: TIMESTRING.");
                // display.setCursor(5, 65);
      // display.println("Conrad looked at his wristwatch, noted");
                // display.setCursor(74, 53);
      // display.println("12:01");
                // display.setCursor(11, 192);
      // display.println("- J.G. Ballard, Chronopolis ");
          return;
        case 1:
          Serial.println(F("12:01 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. - Jonathan Trigell, Boy A"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was the twelfth of December,");
                // display.setCursor(5, 17);
      // display.println("the twelfth month. A was twelve. The");
                // display.setCursor(5, 29);
      // display.println("electric clock/radio by his bedside");
                // display.setCursor(40, 41);
      // display.println("12:01");
                // display.setCursor(32, 192);
      // display.println("- Jonathan Trigell, Boy A");
          return;
        case 2:
          Serial.println(F("12:01 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. A was waiting for it to read 12:12, he hoped there would be some sense of cosmic rightness when it did. - Jonathan Trigell, Boy A "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It was the twelfth of December,");
                // display.setCursor(5, 17);
      // display.println("the twelfth month. A was twelve. The");
                // display.setCursor(5, 29);
      // display.println("electric clock/radio by his bedside");
                // display.setCursor(5, 41);
      // display.println("table said TIMESTRING. A was");
                // display.setCursor(5, 53);
      // display.println("waiting for it to read 12:12, he hoped");
                // display.setCursor(5, 65);
      // display.println("there would be some sense of cosmic");
                // display.setCursor(40, 41);
      // display.println("12:01");
                // display.setCursor(25, 192);
      // display.println("- Jonathan Trigell, Boy A ");
          return;
      } // end switch (option)

    // Codegen for 12:02 for 1 quotations:
    case 722:
      Serial.println(F("Only one option for 12:02:"));
    Serial.println(F("12:02 - It had struck twelve o'clock two minutes and a quarter. The Baron's footman hastily seized a large goblet, and gasped with terror - Lewis Carroll, Crundle Castle"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It had struck");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING. The Baron's footman hastily");
          // display.setCursor(5, 41);
      // display.println("seized a large goblet, and gasped with");
          // display.setCursor(5, 17);
      // display.println("twelve o'clock two minutes and a quarter");
          // display.setCursor(95, 192);
      // display.println("- Crundle Castle");
      return;

    // Codegen for 12:03 for 1 quotations:
    case 723:
      Serial.println(F("Only one option for 12:03:"));
    Serial.println(F("12:03 - At 12.03 the sun has already punched its ticket. Sinking, it stains the cobbles and stucco of the platz in a violin-coloured throb of light that you would have to be a stone not to find poignant. - Michael Chabon, The Yiddish Policemen's Union"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING the sun has");
          // display.setCursor(5, 17);
      // display.println("already punched its ticket. Sinking,");
          // display.setCursor(5, 29);
      // display.println("it stains the cobbles and stucco of");
          // display.setCursor(5, 41);
      // display.println("the platz in a violin-coloured");
          // display.setCursor(5, 53);
      // display.println("throb of light that you would have to");
          // display.setCursor(20, 5);
      // display.println("12.03");
          // display.setCursor(95, 192);
      // display.println("- Michael Chabon");
      return;

    // Codegen for 12:04 for 1 quotations:
    case 724:
      Serial.println(F("Only one option for 12:04:"));
    Serial.println(F("12:04 - Though by then it was by Tina's own desk clock 12.04pm I was always touched when, out of a morning's worth of repetition, secretaries continued to answer with good mornings for an hour or so into the afternoon - Nicholson Baker, The Mezzanine"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Though by then it was by Tina's");
          // display.setCursor(5, 17);
      // display.println("own desk clock TIMESTRING I");
          // display.setCursor(5, 29);
      // display.println("was always touched when, out of a");
          // display.setCursor(5, 41);
      // display.println("morning's worth of repetition,");
          // display.setCursor(5, 53);
      // display.println("secretaries continued to answer with good");
          // display.setCursor(5, 65);
      // display.println("mornings for an hour or so into the");
          // display.setCursor(74, 17);
      // display.println("12.04pm");
          // display.setCursor(102, 192);
      // display.println("- The Mezzanine");
      return;

    // Codegen for 12:05 for 0 quotations:
    case 725:
      Serial.println(F("No quotes for 12:05"));
      return;

    // Codegen for 12:06 for 1 quotations:
    case 726:
      Serial.println(F("Only one option for 12:06:"));
    Serial.println(F("12:06 - A few minutes' light around noon is all that you need to discover the error, and re-set the clock – provide that you bother to go up and make the observation. - Neal Stephenson, Odalisque: The Baroque Cycle #3 "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A few minutes' light");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING is all that you need to discover");
          // display.setCursor(5, 29);
      // display.println("the error, and re-set the clock –");
          // display.setCursor(5, 41);
      // display.println("provide that you bother to go up and make");
          // display.setCursor(128, 5);
      // display.println("around noon");
          // display.setCursor(88, 192);
      // display.println("- Neal Stephenson");
      return;

    // Codegen for 12:07 for 1 quotations:
    case 727:
      Serial.println(F("Only one option for 12:07:"));
    Serial.println(F("12:07 - On a Monday Simon Hirsch was going to break his leg at seven minutes after 12, noon, and as soon as Satan told us the day before, Seppi went to betting with me that it would not happen, and soon they got excited and went to betting with me themselves. - Mark Twain, The Chronicle of Young Satan"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("On a Monday Simon Hirsch was");
          // display.setCursor(5, 17);
      // display.println("going to break his leg at");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING, noon, and as soon as Satan told");
          // display.setCursor(5, 53);
      // display.println("us the day before, Seppi went to");
          // display.setCursor(5, 65);
      // display.println("betting with me that it would not");
          // display.setCursor(5, 77);
      // display.println("happen, and soon they got excited and");
          // display.setCursor(5, 29);
      // display.println("seven minutes after 12");
          // display.setCursor(123, 192);
      // display.println("- Mark Twain");
      return;

    // Codegen for 12:08 for 1 quotations:
    case 728:
      Serial.println(F("Only one option for 12:08:"));
    Serial.println(F("12:08 - When a clock struck noon in Washington, D.C., the time was 12:08 in Philadephia, 12:12 in new York, and 12:24 in Boston. - Matthew Goodman, Eighty Days"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("When a clock struck noon in");
          // display.setCursor(5, 17);
      // display.println("Washington, D.C., the time was");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING in Philadephia, 12:12 in new");
          // display.setCursor(126, 17);
      // display.println("12:08");
          // display.setCursor(116, 192);
      // display.println("- Eighty Days");
      return;

    // Codegen for 12:09 for 0 quotations:
    case 729:
      Serial.println(F("No quotes for 12:09"));
      return;

    // Codegen for 12:10 for 2 quotations:
    case 730:
      option = random(0, 2);
      Serial.print(F("2 options for 12:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:10 - Madame Dumas arrived at noon, and ten minutes later Trause handed her his ATM card and instructed her to go to the neighborhood Citibank near Sheridan Square and transfer forty thousand dollars from his savings account to his checking account. - Paul Auster, Oracle Night"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Madame Dumas arrived at");
                // display.setCursor(5, 17);
      // display.println("");
                // display.setCursor(5, 29);
      // display.println("TIMESTRING Trause handed her his ATM card");
                // display.setCursor(5, 41);
      // display.println("and instructed her to go to the");
                // display.setCursor(5, 53);
      // display.println("neighborhood Citibank near Sheridan Square");
                // display.setCursor(5, 65);
      // display.println("and transfer forty thousand");
                // display.setCursor(5, 77);
      // display.println("dollars from his savings account to his");
                // display.setCursor(5, 17);
      // display.println("noon, and ten minutes later");
                // display.setCursor(18, 192);
      // display.println("- Paul Auster, Oracle Night");
          return;
        case 1:
          Serial.println(F("12:10 - Exhausted, Travis barely managed to kiss Nora before falling into a deep sleep. He dreamed of things with yellow eyes, misshapen heads, and crocodile mouths full of sharks’ teeth. He woke five hours later, at twelve-ten Thursday afternoon. - Dean Koontz, Watchers "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Exhausted, Travis barely");
                // display.setCursor(5, 17);
      // display.println("managed to kiss Nora before falling");
                // display.setCursor(5, 29);
      // display.println("into a deep sleep. He dreamed of");
                // display.setCursor(5, 41);
      // display.println("things with yellow eyes, misshapen");
                // display.setCursor(5, 53);
      // display.println("heads, and crocodile mouths full of");
                // display.setCursor(5, 65);
      // display.println("sharks’ teeth. He woke five hours");
                // display.setCursor(5, 77);
      // display.println("later, at TIMESTRING");
                // display.setCursor(27, 77);
      // display.println("twelve-ten");
                // display.setCursor(39, 192);
      // display.println("- Dean Koontz, Watchers ");
          return;
      } // end switch (option)

    // Codegen for 12:11 for 1 quotations:
    case 731:
      Serial.println(F("Only one option for 12:11:"));
    Serial.println(F("12:11 - At 12:11 there was a knock on the door. It was Terry, A could tell. He hadn't known Terry long, but there was something calmer, more patient, that separated Terry's knocks from the rest of the staff. He knocked from genuine politeness, not formality. - Jonathan Trigell, Boy A "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("At TIMESTRING there was a");
          // display.setCursor(5, 17);
      // display.println("knock on the door. It was Terry, A");
          // display.setCursor(5, 29);
      // display.println("could tell. He hadn't known Terry");
          // display.setCursor(5, 41);
      // display.println("long, but there was something calmer,");
          // display.setCursor(5, 53);
      // display.println("more patient, that separated");
          // display.setCursor(5, 65);
      // display.println("Terry's knocks from the rest of the");
          // display.setCursor(5, 77);
      // display.println("staff. He knocked from genuine");
          // display.setCursor(20, 5);
      // display.println("12:11");
          // display.setCursor(25, 192);
      // display.println("- Jonathan Trigell, Boy A ");
      return;

    // Codegen for 12:12 for 1 quotations:
    case 732:
      Serial.println(F("Only one option for 12:12:"));
    Serial.println(F("12:12 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. A was waiting for it to read 12:12, he hoped there would be some sense of cosmic rightness when it did. - Jonathan Trigell, Boy A"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It was the twelfth of December,");
          // display.setCursor(5, 17);
      // display.println("the twelfth month. A was twelve. The");
          // display.setCursor(5, 29);
      // display.println("electric clock/radio by his bedside");
          // display.setCursor(5, 41);
      // display.println("table said 12:01. A was waiting for it");
          // display.setCursor(5, 53);
      // display.println("to read TIMESTRING, he hoped");
          // display.setCursor(5, 65);
      // display.println("there would be some sense of cosmic");
          // display.setCursor(37, 53);
      // display.println("12:12");
          // display.setCursor(32, 192);
      // display.println("- Jonathan Trigell, Boy A");
      return;

    // Codegen for 12:13 for 0 quotations:
    case 733:
      Serial.println(F("No quotes for 12:13"));
      return;

    // Codegen for 12:14 for 1 quotations:
    case 734:
      Serial.println(F("Only one option for 12:14:"));
    Serial.println(F("12:14 - She left London on the twelve-fourteen from Paddington, arriving at Bristol (where she had to change) at two-fifty. - Agatha Christie, The Plymouth Express"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She left London on the");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("from Paddington, arriving at");
          // display.setCursor(5, 41);
      // display.println("Bristol (where she had to change) at");
          // display.setCursor(5, 17);
      // display.println("twelve-fourteen");
          // display.setCursor(53, 192);
      // display.println("- The Plymouth Express");
      return;

    // Codegen for 12:15 for 2 quotations:
    case 735:
      option = random(0, 2);
      Serial.print(F("2 options for 12:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:15 - 'Very well, dear,' she said. 'I caught the 10.20 to Eastnor, which isn't a bad train, if you ever want to go down there. I arrived at a quarter past twelve, and went straight up to the house--you've never seen the house, of course? - P.G. Wodehouse, The Little Nugget "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("'Very well, dear,' she said. 'I");
                // display.setCursor(5, 17);
      // display.println("caught the 10.20 to Eastnor, which");
                // display.setCursor(5, 29);
      // display.println("isn't a bad train, if you ever want to");
                // display.setCursor(5, 41);
      // display.println("go down there. I arrived at a");
                // display.setCursor(5, 53);
      // display.println("");
                // display.setCursor(5, 65);
      // display.println("TIMESTRING, and went straight up to the");
                // display.setCursor(5, 77);
      // display.println("house--you've never seen the house, of");
                // display.setCursor(5, 53);
      // display.println("quarter past twelve");
                // display.setCursor(74, 192);
      // display.println("- The Little Nugget");
          return;
        case 1:
          Serial.println(F("12:15 - What shall I think of that's liberating and refreshing? I'm in the mood when I open my window at night and look at the stars. Unfortunately it's 12.15 on a grey dull day, the aeroplanes are active - Virginia Woolf, A Writer's Diary: Being Extracts from the Diary of Virgina Woolf"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("What shall I think of that's");
                // display.setCursor(5, 17);
      // display.println("liberating and refreshing? I'm in the mood");
                // display.setCursor(5, 29);
      // display.println("when I open my window at night and");
                // display.setCursor(5, 41);
      // display.println("look at the stars. Unfortunately");
                // display.setCursor(5, 53);
      // display.println("it's TIMESTRING on a grey dull");
                // display.setCursor(10, 53);
      // display.println("12.15");
                // display.setCursor(95, 192);
      // display.println("- Virginia Woolf");
          return;
      } // end switch (option)

    // Codegen for 12:16 for 0 quotations:
    case 736:
      Serial.println(F("No quotes for 12:16"));
      return;

    // Codegen for 12:17 for 1 quotations:
    case 737:
      Serial.println(F("Only one option for 12:17:"));
    Serial.println(F("12:17 - Kava ordered two glasses of coffee for himself and his beloved and some cake. When the pair left, exactly seventeen minutes after twelve, the club began to buzz with excitement. - Isaac Bashevis Singer, Vanvild Kava"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Kava ordered two glasses of");
          // display.setCursor(5, 17);
      // display.println("coffee for himself and his beloved and");
          // display.setCursor(5, 29);
      // display.println("some cake. When the pair left,");
          // display.setCursor(5, 41);
      // display.println("exactly");
          // display.setCursor(5, 53);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("TIMESTRING, the club began to buzz with");
          // display.setCursor(5, 53);
      // display.println("seventeen minutes after twelve");
          // display.setCursor(109, 192);
      // display.println("- Vanvild Kava");
      return;

    // Codegen for 12:18 for 0 quotations:
    case 738:
      Serial.println(F("No quotes for 12:18"));
      return;

    // Codegen for 12:19 for 0 quotations:
    case 739:
      Serial.println(F("No quotes for 12:19"));
      return;

    // Codegen for 12:20 for 2 quotations:
    case 740:
      option = random(0, 2);
      Serial.print(F("2 options for 12:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:20 - By twelve-twenty in the afternoon, Vince was seated in a rattan chair with comfortable yellow and green cushions at a table by the windows in that same restaurant. He’d spotted Haines on entering. - Dean Koontz, Watchers "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("By TIMESTRING in");
                // display.setCursor(5, 17);
      // display.println("the afternoon, Vince was seated in a");
                // display.setCursor(5, 29);
      // display.println("rattan chair with comfortable yellow");
                // display.setCursor(5, 41);
      // display.println("and green cushions at a table by the");
                // display.setCursor(5, 53);
      // display.println("windows in that same restaurant. He’d");
                // display.setCursor(20, 5);
      // display.println("twelve-twenty");
                // display.setCursor(39, 192);
      // display.println("- Dean Koontz, Watchers ");
          return;
        case 1:
          Serial.println(F("12:20 - It is 12:20 in New York a Friday three days after Bastille day, yes it is 1959 and I go get a shoeshine because I will get off the 4:19 in Easthampton at 7:15 and then go straight to dinner and I don’t know the people who will feed me - Frank O'Hara, The Day Lady Died"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("It is TIMESTRING in New");
                // display.setCursor(5, 17);
      // display.println("York a Friday three days after");
                // display.setCursor(5, 29);
      // display.println("Bastille day, yes it is 1959 and I go get a");
                // display.setCursor(5, 41);
      // display.println("shoeshine because I will get off the 4:19");
                // display.setCursor(5, 53);
      // display.println("in Easthampton at 7:15 and then go");
                // display.setCursor(5, 65);
      // display.println("straight to dinner and I don’t know the");
                // display.setCursor(35, 5);
      // display.println("12:20");
                // display.setCursor(74, 192);
      // display.println("- The Day Lady Died");
          return;
      } // end switch (option)

    // Codegen for 12:21 for 1 quotations:
    case 741:
      Serial.println(F("Only one option for 12:21:"));
    Serial.println(F("12:21 - Jake think of something. PLEASE! Twelve twenty-one. - Stephen King, 11/22/63"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Jake think of something. PLEASE!");
          // display.setCursor(5, 17);
      // display.println("Twelve twenty-one");
          // display.setCursor(39, 192);
      // display.println("- Stephen King, 11/22/63");
      return;

    // Codegen for 12:22 for 1 quotations:
    case 742:
      Serial.println(F("Only one option for 12:22:"));
    Serial.println(F("12:22 - By twenty-two minutes past twelve we leave, much too soon for our desires, this delightful spot, where the pilgrims are in the habit of bathing who come to visit the Jordan. - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("By");
          // display.setCursor(5, 17);
      // display.println("");
          // display.setCursor(5, 29);
      // display.println("TIMESTRING we leave, much too soon for our");
          // display.setCursor(5, 41);
      // display.println("desires, this delightful spot, where");
          // display.setCursor(5, 53);
      // display.println("the pilgrims are in the habit of");
          // display.setCursor(5, 17);
      // display.println("twenty-two minutes past twelve");
          // display.setCursor(67, 192);
      // display.println("- Félicien de Saulcy");
      return;

    // Codegen for 12:23 for 0 quotations:
    case 743:
      Serial.println(F("No quotes for 12:23"));
      return;

    // Codegen for 12:24 for 1 quotations:
    case 744:
      Serial.println(F("Only one option for 12:24:"));
    Serial.println(F("12:24 - 12:24 My legs are in total agony. I've been kneeling on hard tiles, cleaning the bath, for what seems like hours. There are little ridges where the tiles have dug into my knees, and I'm boiling hot and the cleaning chemicals are making me cough. - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("TIMESTRING My legs are in");
          // display.setCursor(5, 17);
      // display.println("total agony. I've been kneeling on");
          // display.setCursor(5, 29);
      // display.println("hard tiles, cleaning the bath, for");
          // display.setCursor(5, 41);
      // display.println("what seems like hours. There are");
          // display.setCursor(5, 53);
      // display.println("little ridges where the tiles have dug");
          // display.setCursor(5, 65);
      // display.println("into my knees, and I'm boiling hot and");
          // display.setCursor(5, 77);
      // display.println("the cleaning chemicals are making");
          // display.setCursor(5, 5);
      // display.println("12:24");
          // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
      return;

    // Codegen for 12:25 for 1 quotations:
    case 745:
      Serial.println(F("Only one option for 12:25:"));
    Serial.println(F("12:25 - Boys, do it now. God's time is 12.25. - James Joyce, Ulysses"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Boys, do it now. God's time is");
          // display.setCursor(5, 17);
      // display.println("12.25");
          // display.setCursor(53, 192);
      // display.println("- James Joyce, Ulysses");
      return;

    // Codegen for 12:26 for 1 quotations:
    case 746:
      Serial.println(F("Only one option for 12:26:"));
    Serial.println(F("12:26 - 12.25pm. 26. 27. Every time Billy saved a shot he looked heartbroken - Barry Hines, A Kestrel For a Knave"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("12.25pm. TIMESTRING 27.");
          // display.setCursor(5, 17);
      // display.println("Every time Billy saved a shot he");
          // display.setCursor(62, 5);
      // display.println("26.");
          // display.setCursor(46, 192);
      // display.println("- A Kestrel For a Knave");
      return;

    // Codegen for 12:27 for 0 quotations:
    case 747:
      Serial.println(F("No quotes for 12:27"));
      return;

    // Codegen for 12:28 for 1 quotations:
    case 748:
      Serial.println(F("Only one option for 12:28:"));
    Serial.println(F("12:28 - The DRINK CHEER-UP COFFEE wall clock read 12.28. - Stephen King, 11/22/63"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The DRINK CHEER-UP COFFEE wall");
          // display.setCursor(40, 17);
      // display.println("12.28");
          // display.setCursor(39, 192);
      // display.println("- Stephen King, 11/22/63");
      return;

    // Codegen for 12:29 for 0 quotations:
    case 749:
      Serial.println(F("No quotes for 12:29"));
      return;

    // Codegen for 12:30 for 4 quotations:
    case 750:
      option = random(0, 4);
      Serial.print(F("4 options for 12:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:30 - You'll never believe this but (in Spain) they are two hours late for ever meal - two hours Fanny - (can we lunch at half-past twelve today?) - Nancy Mitford, Love in a Cold Climate "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("You'll never believe this but");
                // display.setCursor(5, 17);
      // display.println("(in Spain) they are two hours late");
                // display.setCursor(5, 29);
      // display.println("for ever meal - two hours Fanny - (can");
                // display.setCursor(5, 41);
      // display.println("we lunch at");
                // display.setCursor(59, 41);
      // display.println("half-past twelve");
                // display.setCursor(39, 192);
      // display.println("- Love in a Cold Climate");
          return;
        case 1:
          Serial.println(F("12:30 - 12.30 p.m. Lunch - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("12.30 p.m.");
                // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
          return;
        case 2:
          Serial.println(F("12:30 - At half past twelve, when Catherine’s anxious attention to the weather was over and she could no longer claim any merit from its amendment, the sky began voluntarily to clear. - Jane Austen, Northanger Abbey "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("At");
                // display.setCursor(5, 17);
      // display.println("TIMESTRING, when Catherine’s anxious");
                // display.setCursor(5, 29);
      // display.println("attention to the weather was over and she");
                // display.setCursor(5, 41);
      // display.println("could no longer claim any merit from");
                // display.setCursor(5, 53);
      // display.println("its amendment, the sky began");
                // display.setCursor(20, 5);
      // display.println("half past twelve");
                // display.setCursor(81, 192);
      // display.println("- Northanger Abbey");
          return;
        case 3:
          Serial.println(F("12:30 - Tuesday, 12.30pm... Baker, California... Into the Ballantine Ale now, zombie drunk and nervous. I recognize this feeling: three or four days of booze, drugs, sun, no sleep and burned out adrenalin reserves... - Hunter S. Thompson, Fear and Loathing in Las Vegas"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("Tuesday, TIMESTRING...");
                // display.setCursor(5, 17);
      // display.println("Baker, California... Into the");
                // display.setCursor(5, 29);
      // display.println("Ballantine Ale now, zombie drunk and");
                // display.setCursor(5, 41);
      // display.println("nervous. I recognize this feeling:");
                // display.setCursor(5, 53);
      // display.println("three or four days of booze, drugs,");
                // display.setCursor(5, 65);
      // display.println("sun, no sleep and burned out");
                // display.setCursor(62, 5);
      // display.println("12.30pm");
                // display.setCursor(67, 192);
      // display.println("- Hunter S. Thompson");
          return;
      } // end switch (option)

    // Codegen for 12:31 for 0 quotations:
    case 751:
      Serial.println(F("No quotes for 12:31"));
      return;

    // Codegen for 12:32 for 2 quotations:
    case 752:
      option = random(0, 2);
      Serial.print(F("2 options for 12:32. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:32 - I'm turning it round in confusion, peering at the arrows on the plastic ... Why won't anything come out? OK, I'm going to squeeze it really, really hard- That nearly got my eye. 12:32 FUCK. What has it done to my HAIR? - Sophie Kinsella, The Undomestic Goddess "));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("I'm turning it round in");
                // display.setCursor(5, 17);
      // display.println("confusion, peering at the arrows on the");
                // display.setCursor(5, 29);
      // display.println("plastic ... Why won't anything come");
                // display.setCursor(5, 41);
      // display.println("out? OK, I'm going to squeeze it");
                // display.setCursor(5, 53);
      // display.println("really, really hard- That nearly got my");
                // display.setCursor(5, 65);
      // display.println("eye. TIMESTRING FUCK. What has");
                // display.setCursor(10, 65);
      // display.println("12:32");
                // display.setCursor(39, 192);
      // display.println("- The Undomestic Goddess");
          return;
        case 1:
          Serial.println(F("12:32 - A chutney-biting brigadier named Boyd-Boyd fixed an appointment on the 'phone with Oxted, at Hornborough Station, for the twelve thirty-two. He was to deliver the goods. - Stacy Aumonier, Extremely Entertaining Short Stories"));
// DEBUG: Wrorking on the timestring
                // display.setCursor(5, 5);
      // display.println("A chutney-biting brigadier");
                // display.setCursor(5, 17);
      // display.println("named Boyd-Boyd fixed an appointment");
                // display.setCursor(5, 29);
      // display.println("on the 'phone with Oxted, at");
                // display.setCursor(5, 41);
      // display.println("Hornborough Station, for the");
                // display.setCursor(5, 53);
      // display.println("TIMESTRING.");
                // display.setCursor(5, 53);
      // display.println("twelve thirty-two");
                // display.setCursor(95, 192);
      // display.println("- Stacy Aumonier");
          return;
      } // end switch (option)

    // Codegen for 12:33 for 1 quotations:
    case 753:
      Serial.println(F("Only one option for 12:33:"));
    Serial.println(F("12:33 - It's 12.33 now and I could do it, the station is just down that side road there. - Dorothy L. Sayers, Five Red Herrings"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It's TIMESTRING now and I");
          // display.setCursor(5, 17);
      // display.println("could do it, the station is just down");
          // display.setCursor(34, 5);
      // display.println("12.33");
          // display.setCursor(74, 192);
      // display.println("- Five Red Herrings");
      return;

    // Codegen for 12:34 for 0 quotations:
    case 754:
      Serial.println(F("No quotes for 12:34"));
      return;

    // Codegen for 12:35 for 1 quotations:
    case 755:
      Serial.println(F("Only one option for 12:35:"));
    Serial.println(F("12:35 - That morning he had appeared at the precise time stated in orders. Everyone else had been waiting five minutes and Colour Sergeant Cork called out the marker just as Trimmer appeared. So it was twelve-thirty-five when they were dismissed. - Evelyn Waugh, Men At Arms"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("That morning he had appeared at");
          // display.setCursor(5, 17);
      // display.println("the precise time stated in orders.");
          // display.setCursor(5, 29);
      // display.println("Everyone else had been waiting five");
          // display.setCursor(5, 41);
      // display.println("minutes and Colour Sergeant Cork");
          // display.setCursor(5, 53);
      // display.println("called out the marker just as Trimmer");
          // display.setCursor(5, 65);
      // display.println("appeared. So it was");
          // display.setCursor(67, 65);
      // display.println("twelve-thirty-five");
          // display.setCursor(18, 192);
      // display.println("- Evelyn Waugh, Men At Arms");
      return;

    // Codegen for 12:36 for 0 quotations:
    case 756:
      Serial.println(F("No quotes for 12:36"));
      return;

    // Codegen for 12:37 for 0 quotations:
    case 757:
      Serial.println(F("No quotes for 12:37"));
      return;

    // Codegen for 12:38 for 0 quotations:
    case 758:
      Serial.println(F("No quotes for 12:38"));
      return;

    // Codegen for 12:39 for 1 quotations:
    case 759:
      Serial.println(F("Only one option for 12:39:"));
    Serial.println(F("12:39 - ...and that consequently high water would be at twenty-one minutes past three, the half-ebb at a quarter past seven, low water at thirty-three minutes past nine, and half flood at thirty-nine minutes past twelve. - Victor Hugo, The Toilers of the Sea"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("...and that consequently high");
          // display.setCursor(5, 17);
      // display.println("water would be at twenty-one minutes");
          // display.setCursor(5, 29);
      // display.println("past three, the half-ebb at a quarter");
          // display.setCursor(5, 41);
      // display.println("past seven, low water at");
          // display.setCursor(5, 53);
      // display.println("thirty-three minutes past nine, and half");
          // display.setCursor(5, 65);
      // display.println("flood at");
          // display.setCursor(5, 77);
      // display.println("");
          // display.setCursor(5, 77);
      // display.println("thirty-nine minutes past twelve");
          // display.setCursor(39, 192);
      // display.println("- The Toilers of the Sea");
      return;

    // Codegen for 12:40 for 1 quotations:
    case 760:
      Serial.println(F("Only one option for 12:40:"));
    Serial.println(F("12:40 - A little ormolu clock in the outer corridor indicated twenty minutes to one. The car was due at one-fifteen. Thirty-five minutes: oh, to escape for only that brief period! - Stacy Aumonier, Extremely Entertaining Short Stories (The Octave of Jealousy)"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("A little ormolu clock in the");
          // display.setCursor(5, 17);
      // display.println("outer corridor indicated");
          // display.setCursor(5, 29);
      // display.println("");
          // display.setCursor(5, 41);
      // display.println("TIMESTRING. The car was due at one-fifteen.");
          // display.setCursor(5, 53);
      // display.println("Thirty-five minutes: oh, to escape for only");
          // display.setCursor(5, 29);
      // display.println("twenty minutes to one");
          // display.setCursor(95, 192);
      // display.println("- Stacy Aumonier");
      return;

    // Codegen for 12:41 for 0 quotations:
    case 761:
      Serial.println(F("No quotes for 12:41"));
      return;

    // Codegen for 12:42 for 1 quotations:
    case 762:
      Serial.println(F("Only one option for 12:42:"));
    Serial.println(F("12:42 - She crushed the cigarette out and stood, brushing ash from her black skirt. It was eighteen minutes to one. She went to the house phone and called his room. The telephone rang and rang, but there was no answer. - Herman Wouk, Marjorie Morningstar"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("She crushed the cigarette out");
          // display.setCursor(5, 17);
      // display.println("and stood, brushing ash from her");
          // display.setCursor(5, 29);
      // display.println("black skirt. It was");
          // display.setCursor(5, 41);
      // display.println("");
          // display.setCursor(5, 53);
      // display.println("TIMESTRING. She went to the house phone and");
          // display.setCursor(5, 65);
      // display.println("called his room. The telephone rang");
          // display.setCursor(5, 41);
      // display.println("eighteen minutes to one");
          // display.setCursor(53, 192);
      // display.println("- Marjorie Morningstar");
      return;

    // Codegen for 12:43 for 1 quotations:
    case 763:
      Serial.println(F("Only one option for 12:43:"));
    Serial.println(F("12:43 - Died five minutes ago, you say? he asked. His eye went to the watch on his wrist. Twelve-forty-three, he wrote on the blotter. - Agatha Christie, A Pocket Full of Rye"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Died five minutes ago, you say?");
          // display.setCursor(5, 17);
      // display.println("he asked. His eye went to the watch");
          // display.setCursor(5, 29);
      // display.println("on his wrist.");
          // display.setCursor(73, 29);
      // display.println("Twelve-forty-three");
          // display.setCursor(53, 192);
      // display.println("- A Pocket Full of Rye");
      return;

    // Codegen for 12:44 for 1 quotations:
    case 764:
      Serial.println(F("Only one option for 12:44:"));
    Serial.println(F("12:44 - It is around quarter to one. No sunlight comes into the room now through the windows at right. Outside the day is fine but increasingly sultry, with a faint haziness in the air which softens the glare of the sun. - Eugene O'Neil, Long Day's Journey Into Night "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It is");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. No sunlight comes into the room");
          // display.setCursor(5, 29);
      // display.println("now through the windows at right.");
          // display.setCursor(5, 41);
      // display.println("Outside the day is fine but");
          // display.setCursor(5, 53);
      // display.println("increasingly sultry, with a faint haziness");
          // display.setCursor(5, 65);
      // display.println("in the air which softens the glare");
          // display.setCursor(35, 5);
      // display.println("around quarter to one");
          // display.setCursor(102, 192);
      // display.println("- Eugene O'Neil");
      return;

    // Codegen for 12:45 for 1 quotations:
    case 765:
      Serial.println(F("Only one option for 12:45:"));
    Serial.println(F("12:45 - Look out for D. He has just now, 12:45, come from Carfax hurriedly and hastened towards the South. He seems to be going the round and may want to see you: Mina - Bram Stoker, Dracula "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Look out for D. He has just now,");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING, come from");
          // display.setCursor(5, 29);
      // display.println("Carfax hurriedly and hastened towards");
          // display.setCursor(5, 41);
      // display.println("the South. He seems to be going the");
          // display.setCursor(5, 17);
      // display.println("12:45");
          // display.setCursor(46, 192);
      // display.println("- Bram Stoker, Dracula ");
      return;

    // Codegen for 12:46 for 1 quotations:
    case 766:
      Serial.println(F("Only one option for 12:46:"));
    Serial.println(F("12:46 - It is around quarter to one. No sunlight comes into the room now through the windows at right. Outside the day is fine but increasingly sultry, with a faint haziness in the air which softens the glare of the sun. - Eugene O'Neil, Long Day's Journey Into Night "));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("It is");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING. No sunlight comes into the room");
          // display.setCursor(5, 29);
      // display.println("now through the windows at right.");
          // display.setCursor(5, 41);
      // display.println("Outside the day is fine but");
          // display.setCursor(5, 53);
      // display.println("increasingly sultry, with a faint haziness");
          // display.setCursor(5, 65);
      // display.println("in the air which softens the glare");
          // display.setCursor(35, 5);
      // display.println("around quarter to one");
          // display.setCursor(102, 192);
      // display.println("- Eugene O'Neil");
      return;

    // Codegen for 12:47 for 0 quotations:
    case 767:
      Serial.println(F("No quotes for 12:47"));
      return;

    // Codegen for 12:48 for 0 quotations:
    case 768:
      Serial.println(F("No quotes for 12:48"));
      return;

    // Codegen for 12:49 for 1 quotations:
    case 769:
      Serial.println(F("Only one option for 12:49:"));
    Serial.println(F("12:49 - The first victim of the Krefeld raid died at 12:49 hours Double British Summer Time at B Flight, but it wasn't due to carelessness. - Len Deighton, Bomber"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The first victim of the Krefeld");
          // display.setCursor(5, 17);
      // display.println("raid died at TIMESTRING");
          // display.setCursor(5, 29);
      // display.println("Double British Summer Time at B");
          // display.setCursor(5, 41);
      // display.println("Flight, but it wasn't due to");
          // display.setCursor(54, 17);
      // display.println("12:49 hours");
          // display.setCursor(53, 192);
      // display.println("- Len Deighton, Bomber");
      return;

    // Codegen for 12:50 for 1 quotations:
    case 770:
      Serial.println(F("Only one option for 12:50:"));
    Serial.println(F("12:50 - So presently Bert was sent up to the top of the house to look at a church clock which was visible therefrom, and when he came down he reported that it was ten minutes to one. - Robert Tressell, The Ragged Trousered Philanthropists"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("So presently Bert was sent up to");
          // display.setCursor(5, 17);
      // display.println("the top of the house to look at a");
          // display.setCursor(5, 29);
      // display.println("church clock which was visible");
          // display.setCursor(5, 41);
      // display.println("therefrom, and when he came down he");
          // display.setCursor(5, 53);
      // display.println("reported that it was");
          // display.setCursor(5, 65);
      // display.println("");
          // display.setCursor(5, 65);
      // display.println("ten minutes to one");
          // display.setCursor(88, 192);
      // display.println("- Robert Tressell");
      return;

    // Codegen for 12:51 for 0 quotations:
    case 771:
      Serial.println(F("No quotes for 12:51"));
      return;

    // Codegen for 12:52 for 1 quotations:
    case 772:
      Serial.println(F("Only one option for 12:52:"));
    Serial.println(F("12:52 - The nightclub stood on the junction, flamboyant, still. It was 12.52. - Rupert Thomson, Dreams of Leaving"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The nightclub stood on the");
          // display.setCursor(5, 17);
      // display.println("junction, flamboyant, still. It was");
          // display.setCursor(5, 29);
      // display.println("12.52");
          // display.setCursor(74, 192);
      // display.println("- Dreams of Leaving");
      return;

    // Codegen for 12:53 for 1 quotations:
    case 773:
      Serial.println(F("Only one option for 12:53:"));
    Serial.println(F("12:53 - Aboot twelve miles. We ought tae pass her at Pinmore. She's due there at 12:53. - Dorothy L. Sayers, Five Red Herrings"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Aboot twelve miles. We ought tae");
          // display.setCursor(5, 17);
      // display.println("pass her at Pinmore. She's due there");
          // display.setCursor(8, 29);
      // display.println("12:53");
          // display.setCursor(74, 192);
      // display.println("- Five Red Herrings");
      return;

    // Codegen for 12:54 for 1 quotations:
    case 774:
      Serial.println(F("Only one option for 12:54:"));
    Serial.println(F("12:54 - Is the boat leaving or entering the harbor; is it the ferry, or a whale-watching boat, or a fishing boat? At 5:33 pm there is a blast of two deep, resonant notes a major third apart. On another day there is the same blast at 12:54 pm. On another, exactly 8:00 am. - Lydia Davis, Varieties of Disturbance"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("Is the boat leaving or entering");
          // display.setCursor(5, 17);
      // display.println("the harbor; is it the ferry, or a");
          // display.setCursor(5, 29);
      // display.println("whale-watching boat, or a fishing boat? At");
          // display.setCursor(5, 41);
      // display.println("5:33 pm there is a blast of two deep,");
          // display.setCursor(5, 53);
      // display.println("resonant notes a major third apart. On");
          // display.setCursor(5, 65);
      // display.println("another day there is the same blast at");
          // display.setCursor(5, 77);
      // display.println("TIMESTRING On");
          // display.setCursor(5, 77);
      // display.println("12:54 pm.");
          // display.setCursor(25, 192);
      // display.println("- Varieties of Disturbance");
      return;

    // Codegen for 12:55 for 1 quotations:
    case 775:
      Serial.println(F("Only one option for 12:55:"));
    Serial.println(F("12:55 - The inspector glanced at the clock. Five to one. A busy morning. - Ngaio Marsh, A Man Lay Dead"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The inspector glanced at the");
          // display.setCursor(5, 17);
      // display.println("clock. TIMESTRING. A busy");
          // display.setCursor(12, 17);
      // display.println("Five to one");
          // display.setCursor(4, 192);
      // display.println("- Ngaio Marsh, A Man Lay Dead");
      return;

    // Codegen for 12:56 for 0 quotations:
    case 776:
      Serial.println(F("No quotes for 12:56"));
      return;

    // Codegen for 12:57 for 0 quotations:
    case 777:
      Serial.println(F("No quotes for 12:57"));
      return;

    // Codegen for 12:58 for 1 quotations:
    case 778:
      Serial.println(F("Only one option for 12:58:"));
    Serial.println(F("12:58 - The watch on my wrist showed 12.58pm I'd have time to hit the morgue. - Ilona Andrews, Magic Bites"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("The watch on my wrist showed");
          // display.setCursor(5, 17);
      // display.println("TIMESTRING I'd have time");
          // display.setCursor(5, 17);
      // display.println("12.58pm");
          // display.setCursor(11, 192);
      // display.println("- Ilona Andrews, Magic Bites");
      return;

    // Codegen for 12:59 for 1 quotations:
    case 779:
      Serial.println(F("Only one option for 12:59:"));
    Serial.println(F("12:59 - And I had been looking at my watch since the train had started at 12.59pm - Mark Haddon, The Curious Incident of the Dog in the Night-Time"));
// DEBUG: Wrorking on the timestring
          // display.setCursor(5, 5);
      // display.println("And I had been looking at my watch");
          // display.setCursor(5, 17);
      // display.println("since the train had started at");
          // display.setCursor(156, 17);
      // display.println("12.59pm");
          // display.setCursor(116, 192);
      // display.println("- Mark Haddon");
      return;

  } // end switch (minute)

} // end print_minute()
