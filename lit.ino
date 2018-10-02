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
          Serial.println(F("00:00 - As midnight was striking bronze blows upon the dusky air, Dorian Gray, dressed commonly, and with a muffler wrapped round his throat, crept quietly out of his house. - Oscar Wilde, The Picture of Dorian Gray "));
          return;
        case 1:
          Serial.println(F("00:00 - \"But wait till I tell you,\" he said. :We had a midnight lunch too after all the jollification and when we sallied forth it was blue o'clock the morning after the night before\" - James Joyce, Ulysses "));
          return;
        case 2:
          Serial.println(F("00:00 - \"Midnight,\" you said. What is midnight to the young? And suddenly a festive blaze was flung Across five cedar trunks, snow patches showed, And a patrol car on our bumpy road Came to a crunching stop. Retake, retake! - Vladimir Nabokov, Pale Fire "));
          return;
        case 3:
          Serial.println(F("00:00 - That a man who could hardly see anything more than two feet away from him could be employed as a security guard suggested to me that our job was not to secure anything but to report for work every night, fill the bulky ledger with cryptic remarks like 'Patrolled perimeter 12.00 pm, No Incident' and go to the office every fortnight for our wages and listen to the talkative Ms Elgassier. - Ike Oguine, A Squatter's Tale "));
          return;
        case 4:
          Serial.println(F("00:00 - 'Tis the year's midnight, and it is the day's, Lucy's, who scarce seven hours herself unmasks; The sun is spent, and now his flasks Send forth light squibs, no constant rays; - John Donne, A Nocturnal upon St Lucy's Day "));
          return;
        case 5:
          Serial.println(F("00:00 - At midnight his wife and daughter might still be bustling about, preparing holiday delicacies in the kitchen, straightening up the house, or perhaps getting their kimonos ready or arranging flowers. Oki would sit in the living room and listen to the radio. As the bells rang he would look back at the departing year. He always found it a moving experience. - Yasunari Kawabata, Beauty and Sadness "));
          return;
        case 6:
          Serial.println(F("00:00 - Bernardo: 'Tis now struck twelve; get thee to bed, Francisco. - Shakespeare, Hamlet "));
          return;
        case 7:
          Serial.println(F("00:00 - Big Ben concluded the run-up, struck and went on striking. (...) But, odder still - Big Ben had once again struck midnight. The time outside still corresponded to that registered by the stopped gilt clock, inside. Inside and outside matched exactly, but both were badly wrong. H'm. - Angela Carter, Nights At The Circus "));
          return;
        case 8:
          Serial.println(F("00:00 - But in the end I understood this language. I understood it, I understood it, all wrong perhaps. That is not what matters. It told me to write the report. Does this mean I am freer now than I was? I do not know. I shall learn. Then I went back into the house and wrote, It is midnight. The rain is beating on the windows. It was not midnight. It was not raining. - Samuel Beckett, Molloy "));
          return;
        case 9:
          Serial.println(F("00:00 - Cartridges not allowed after 0000h., to encourage sleep. - David Foster Wallace, Infinite Jest "));
          return;
        case 10:
          Serial.println(F("00:00 - Francisco. You come most carefully upon your hour. Bernardo. 'Tis now struck twelve. Get thee to bed, Francisco. - William Shakespeare, Hamlet "));
          return;
        case 11:
          Serial.println(F("00:00 - Gately can hear the horns and raised voices and u-turn squeals way down below on Wash. That indicate it's around 0000h., the switching hour. - David Foster Wallace, Infinite Jest"));
          return;
        case 12:
          Serial.println(F("00:00 - Hamlet: What hour now? Horatio: I think it lacks of twelve. Marcellus: No, it is struck. - William Shakespeare, Hamlet "));
          return;
        case 13:
          Serial.println(F("00:00 - He is certain he heard footsteps: they come nearer, and then die away. The ray of light beneath his door is extinguished. It is midnight; some one has turned out the gas; the last servant has gone to bed, and he must lie all night in agony with no one to bring him any help. - Marcel Proust, Swann's Way "));
          return;
        case 14:
          Serial.println(F("00:00 - I am conceived to the chimes of midnight on the clock on the mantelpiece in the room across the hall. The clock once belonged to my great-grandmother (a woman called Alice) and its tired chime counts me into the world. - Kate Atkinson, Behind the Scenes at the Museum "));
          return;
        case 15:
          Serial.println(F("00:00 - I took her hand in mine, and bid her be composed; for a succession of shudders convulsed her frame, and she would keep straining her gaze towards the glass. 'There's nobody here!' I insisted. 'It was YOURSELF, Mrs. Linton: you knew it a while since.' 'Myself!' she gasped, 'and the clock is striking twelve! It's true, then! that's dreadful!' - Emily Brontë, Wuthering Heights "));
          return;
        case 16:
          Serial.println(F("00:00 - I was born in the city of Bombay ... On the stroke of midnight, as a matter of fact. Clock-hands joined palms in respectful greeting as I came. Oh, spell it out, spell it out: at the precise instant of India's arrival at independence, I tumbled forth into the world. - Salman Rushdie, Midnight's Children "));
          return;
        case 17:
          Serial.println(F("00:00 - It is midnight. The rain is beating on the windows. I am calm. All is sleeping. Nevertheless I get up and go to my desk. I can't sleep. ... - Samuel Beckett, Molloy "));
          return;
        case 18:
          Serial.println(F("00:00 - It was nearing midnight and the Prime Minister was sitting alone in his office, reading a long memo that was slipping through his brain without leaving the slightest trace of meaning behind. - JK Rowling, Harry Potter and the Half-Blood Prince "));
          return;
        case 19:
          Serial.println(F("00:00 - Midnight had come upon the crowded city. The palace, the night-cellar, the jail, the madhouse; the chambers of birth and death, of health and sickness; the rigid face of the corpse and the calm sleep of the child - midnight was upon them all. - Charles Dickens, Oliver Twist "));
          return;
        case 20:
          Serial.println(F("00:00 - Midnight is approaching, and while the peak of activity has passed, the basal metabolism that maintains life continues undiminished, producing the basso continuo of the city's moan, a monotonous sound that neither rises or falls but is pregnant with foreboding. - Murakami, After Dark "));
          return;
        case 21:
          Serial.println(F("00:00 - Once upon a midnight dreary, while I pondered weak and weary, Over many a quaint and curious volume of forgotten lore, While I nodded, nearly napping, suddenly there came a tapping, As of some one gently rapping, rapping at my chamber door. `'Tis some visitor,' I muttered, `tapping at my chamber door - Only this, and nothing more.' - Edgar Allan Poe, The Raven "));
          return;
        case 22:
          Serial.println(F("00:00 - The clock striketh twelve O it strikes, it strikes! Now body, turn to air, Or Lucifer will bear thee quick to hell. O soul, be changed into little water drops, And fall into the ocean, ne'er to be found. My God, my God, look not so fierce on me! - Christopher Marlowe, Dr Faustus "));
          return;
        case 23:
          Serial.println(F("00:00 - The first night, as soon as the corporal had conducted my uncle Toby up stairs, which was about 10 - Mrs. Wadman threw herself into her arm chair, and crossing her left knee with her right, which formed a resting-place for her elbow, she reclin'd her cheek upon the palm of her hand, and leaning forwards, ruminated until midnight upon both sides of the question.' - Laurence Sterne, The Life and Opinions of Tristram Shandy, Gentleman "));
          return;
        case 24:
          Serial.println(F("00:00 - To begin my life with the beginning of my life, I record that I was born (as I have been informed an believe) on a Friday, at twelve o'clock at night. It was remarked that the clock began to strike, and I began to cry, simultaneously. - Charles Dickens, David Copperfield "));
          return;
        case 25:
          Serial.println(F("00:00 - We have heard the chimes at midnight. - William Shakespeare, Henry IV"));
          return;
      } // end switch (option)

    // Codegen for 00:01 for 1 quotations:
    case 1:
      Serial.println(F("Only one option for 00:01:"));
    Serial.println(F("00:01 - With the appointed execution time of one minute past midnight just seconds away, I knocked on the metal door twice. The lock turned and the door swiftly swung open. - Donald A. Cabana, Death at Midnight"));
      return;

    // Codegen for 00:02 for 1 quotations:
    case 2:
      Serial.println(F("Only one option for 00:02:"));
    Serial.println(F("00:02 - Two minutes past midnight. With me in the lead the fourteen other men of Teams Yellow, White and Red moved out of the clearing and separated for points along the wall where they would cross over into the grounds. - Shashi Warrier, Night of the Krait"));
      return;

    // Codegen for 00:03 for 3 quotations:
    case 3:
      option = random(0, 3);
      Serial.print(F("3 options for 00:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:03 - It was after twelve o'clock when Easton came home. Ruth recognised his footsteps before he reached the house, and her heart seemed to stop beating when she heard the clang of the gate, as it closed after he had passed through. - Robert Tressell, The Ragged Trousered Philanthropists"));
          return;
        case 1:
          Serial.println(F("00:03 - It was just three minutes past midnight when I last saw Archer Harrison alive. I remember, because I said it was two minutes past and he looked at his watch and said it was three minutes past. - George Jean Nathan, Since Ibsen"));
          return;
        case 2:
          Serial.println(F("00:03 - Suddenly I felt a great stillness in the air, then a snapping of tension. I glanced at my watch. Three minutes after midnight. I was breathing normally and my pen moved freely across the page. Whatever stalked me wasn’t quite as clever as I’d feared, I thought, careful not to pause in my work. - Elizabeth Kostova, The Historian "));
          return;
      } // end switch (option)

    // Codegen for 00:04 for 1 quotations:
    case 4:
      Serial.println(F("Only one option for 00:04:"));
    Serial.println(F("00:04 - At four minutes past midnight, January 22, Admiral Lowry's armada of more than 250 ships reached the transport area off Anzio. The sea was calm, the night was black. - Fred Sheehan, Anzio: Epic of Bravery"));
      return;

    // Codegen for 00:05 for 1 quotations:
    case 5:
      Serial.println(F("Only one option for 00:05:"));
    Serial.println(F("00:05 - E.M. Security, normally so scrupulous with their fucking trucks at 0005h., is nowhere around, lending weight to yet another cliché. If you asked Gately what he was feeling right this second he'd have no idea. - David Foster Wallace, Infinite Jest "));
      return;

    // Codegen for 00:06 for 1 quotations:
    case 6:
      Serial.println(F("Only one option for 00:06:"));
    Serial.println(F("00:06 - At six minutes past midnight, death relieved the sufferer. - Glenn Shirley, West of Hell's Fringe"));
      return;

    // Codegen for 00:07 for 1 quotations:
    case 7:
      Serial.println(F("Only one option for 00:07:"));
    Serial.println(F("00:07 - It was seven minutes after midnight. The dog was lying on the grass in the middle of the lawn in front of Mrs Shears' house. Its eyes were closed. It looked as if it was running on its side, the way dogs run when they think they are chasing a cat in a dream. - Mark Haddon, The Curious Incident of the Dog in the Night-Time "));
      return;

    // Codegen for 00:08 for 1 quotations:
    case 8:
      Serial.println(F("Only one option for 00:08:"));
    Serial.println(F("00:08 - \"Hour of the night!\" exclaimed the priest; \"it is day, not night, and the hour is eight past midnight!\" - James Pascoe, The Brigantine"));
      return;

    // Codegen for 00:09 for 1 quotations:
    case 9:
      Serial.println(F("Only one option for 00:09:"));
    Serial.println(F("00:09 - At 12.09am on 18 October, the cavalcade had reached the Karsaz Bridge, still ten kilometres from her destination. - Amir Mir, The Bhutto Murder Trail: From Waziristan to GHQ"));
      return;

    // Codegen for 00:10 for 1 quotations:
    case 10:
      Serial.println(F("Only one option for 00:10:"));
    Serial.println(F("00:10 - It was at ten minutes past midnight. Three police cars, Alsations and a black maria arrive at the farmhouse. The farmer clad only in a jock-strap, refused them entry. - Jonathan Barrow, The Queue"));
      return;

    // Codegen for 00:11 for 1 quotations:
    case 11:
      Serial.println(F("Only one option for 00:11:"));
    Serial.println(F("00:11 - The first incendiaries to hit St Thomas's Hospital had splattered Riddell House at eleven minutes past midnight, from where a few hours earlier the Archbishop of Canterbury had given 'an inspiring address'. - Gavin Mortimer, The Longest Night"));
      return;

    // Codegen for 00:12 for 2 quotations:
    case 12:
      option = random(0, 2);
      Serial.print(F("2 options for 00:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:12 - Clock time is 0 Hours, 12 Minutes, 0 Seconds. Twenty three minutes later, they have their first sight of Venus. Each lies with his Eye clapp'd to the Snout of an identical two and a half foot Gregorian reflector made by Mr Short, with Darkening-Nozzles by Mr Bird. - Thomas Pynchon, Mason & Dixon"));
          return;
        case 1:
          Serial.println(F("00:12 - It was twelve minutes past midnight when mother and daughter saw the first lightning strike. It hit the main barn with such force the ground trembled under their feet. - Fern Michaels, Kentucky heat"));
          return;
      } // end switch (option)

    // Codegen for 00:13 for 0 quotations:
    case 13:
      Serial.println(F("No quotes for 00:13"));
      return;

    // Codegen for 00:14 for 1 quotations:
    case 14:
      Serial.println(F("Only one option for 00:14:"));
    Serial.println(F("00:14 - It was exactly fourteen minutes past midnight when he completed the final call. Among the men he had reched were honourable men. Their voices would be heard by the President. - Robert Ludlum, The Matarese Circle"));
      return;

    // Codegen for 00:15 for 2 quotations:
    case 15:
      option = random(0, 2);
      Serial.print(F("2 options for 00:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:15 - At twelve-fifteen he got out of the van. He tucked the pistol under the waistband of his trousers and crossed the silent, deserted street to the Hudston house. - Dean Koontz, Watchers"));
          return;
        case 1:
          Serial.println(F("00:15 - At twelve-fifteen he got out of the van. He tucked the pistol under the waistband of his trousers and crossed the silent, deserted street to the Hudston house. He let himself through an unlocked wooden gate onto a side patio brightened only by moonlight filtered through the leafy branches of an enormous sheltering coral tree. He paused to pull on a pair of supple leather gloves. - Dean Koontz, Watchers "));
          return;
      } // end switch (option)

    // Codegen for 00:16 for 1 quotations:
    case 16:
      Serial.println(F("Only one option for 00:16:"));
    Serial.println(F("00:16 - At sixteen minutes past midnight, Block 4 was hit and the roof set alight. - Gavin Mortimer, The Longest Night"));
      return;

    // Codegen for 00:17 for 1 quotations:
    case 17:
      Serial.println(F("Only one option for 00:17:"));
    Serial.println(F("00:17 - Kava ordered two glasses of coffee for himself and his beloved and some cake. When the pair left, exactly seventeen minutes after twelve, the club began to buzz with excitement. - Isaac Bashevis Singer, Vanvild Kava"));
      return;

    // Codegen for 00:18 for 1 quotations:
    case 18:
      Serial.println(F("Only one option for 00:18:"));
    Serial.println(F("00:18 - 21st December 1985, 12.18am [In bed] Michael doesn’t believe in Heaven or Hell. He’s got closer to death than most living people and he tells me there was no tunnel of light or dancing angels. I’m a bit disappointed, to be honest. - Mary Horlock, The Book of Lies"));
      return;

    // Codegen for 00:19 for 0 quotations:
    case 19:
      Serial.println(F("No quotes for 00:19"));
      return;

    // Codegen for 00:20 for 1 quotations:
    case 20:
      Serial.println(F("Only one option for 00:20:"));
    Serial.println(F("00:20 - Now she was kneading the little ball of hot paste on the convex margin of the bowl and I could smell the opium. There is no smell like it. Beside the bed the alarm-clock showed twelve-twenty, but already my tension was over. Pyle had diminished. - Graham Greene, The Quiet American"));
      return;

    // Codegen for 00:21 for 1 quotations:
    case 21:
      Serial.println(F("Only one option for 00:21:"));
    Serial.println(F("00:21 - Nobody had been one of Mycroft Ward's most important operatives and for sixty seconds every day, between 12.21am and 12.22am., his laptop was permitted to connect directly with the gigantic online database of self that was Mycroft Ward's mind. - Steven Hall, The Raw Shark Texts"));
      return;

    // Codegen for 00:22 for 1 quotations:
    case 22:
      Serial.println(F("Only one option for 00:22:"));
    Serial.println(F("00:22 - Nobody had been one of Mycroft Ward's most important operatives and for sixty seconds every day, between 12.21am and 12.22am., his laptop was permitted to connect directly with the gigantic online database of self that was Mycroft Ward's mind. - Steven Hall, The Raw Shark Texts"));
      return;

    // Codegen for 00:23 for 1 quotations:
    case 23:
      Serial.println(F("Only one option for 00:23:"));
    Serial.println(F("00:23 - Oskar weighed the wristwatch in his hand, then gave the rather fine piece with its luminous dial showing twenty-three minutes past midnight to little Pinchcoal. He looked up inquiringly at his chief. Störtebeker nodded his assent. And Oskar said, as he adjusted his drum snugly for the trip home: 'Jesus will lead the way. Follow thou me!' - Günter Grass, The Tin Drum"));
      return;

    // Codegen for 00:24 for 1 quotations:
    case 24:
      Serial.println(F("Only one option for 00:24:"));
    Serial.println(F("00:24 - Sanders with Sutton as his gunner began their patrol at 12.24am, turning south towards Beachy Head at 10,000 ft. - Gavin Mortimer, The Longest Night"));
      return;

    // Codegen for 00:25 for 2 quotations:
    case 25:
      option = random(0, 2);
      Serial.print(F("2 options for 00:25. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("00:25 - Charlotte remembered that she had heard Gregoire go downstairs again, almost immediately after entering his bedroom, and before the servants had even bolted the house-doors for the night. He had certainly rushed off to join Therese in some coppice, whence they must have hurried away to Vieux-Bourg station which the last train to Paris quitted at five-and-twenty minutes past midnight. And it was indeed this which had taken place. - Emile Zola, Fruitfulness "));
          return;
        case 1:
          Serial.println(F("00:25 - I mean, look at the time! Twenty-five past midnight! It was a triumph, it really was! - Joanna Trollope, The Soldier's Wife"));
          return;
      } // end switch (option)

    // Codegen for 00:26 for 1 quotations:
    case 26:
      Serial.println(F("Only one option for 00:26:"));
    Serial.println(F("00:26 - \"A Mr Dutta from King's Cross called and told me you were on your way. He said you wanted to see the arrival of yesterday's 12.26am. It'll take me a few minutes to cue up the footage. Our regular security bloke isn't here today; he's up before Haringey Magistrates' Court for gross indecency outside the headquarters of the Dagenham Girl Pipers.\" - Christopher Fowler, Bryant & May Off the Rails"));
      return;

    // Codegen for 00:27 for 0 quotations:
    case 27:
      Serial.println(F("No quotes for 00:27"));
      return;

    // Codegen for 00:28 for 1 quotations:
    case 28:
      Serial.println(F("Only one option for 00:28:"));
    Serial.println(F("00:28 - The DRINK CHEER-UP COFFEE wall clock read 12.28. - Stephen King, 11/22/63"));
      return;

    // Codegen for 00:29 for 1 quotations:
    case 29:
      Serial.println(F("Only one option for 00:29:"));
    Serial.println(F("00:29 - \"What time is it?\" asked Teeny-bits. The station agent hauled out his big silver watch, looked at it critically and announced: \"Twenty-nine minutes past twelve.” “Past twelve!\" repeated Teeny-bits. \"It can't be.\" - Clayton H Ernst, The Mark of the Knife"));
      return;

    // Codegen for 00:30 for 1 quotations:
    case 30:
      Serial.println(F("Only one option for 00:30:"));
    Serial.println(F("00:30 - It was half-past twelve when I returned to the Albany as a last desperate resort. The scene of my disaster was much as I had left it. The baccarat-counters still strewed the table, with the empty glasses and the loaded ash-trays. A window had been opened to let the smoke out, and was letting in the fog instead. - E.W. Hornung, The Amateur Cracksman "));
      return;

    // Codegen for 00:31 for 1 quotations:
    case 31:
      Serial.println(F("Only one option for 00:31:"));
    Serial.println(F("00:31 - Third individual approaches unnoticed and without caution. Once within reach, individual reaches out toward subjects. Recording terminates: timecode: 00:31:02. - Stephen Jones, Zombie Apocalypse! Fightback"));
      return;

    // Codegen for 00:32 for 1 quotations:
    case 32:
      Serial.println(F("Only one option for 00:32:"));
    Serial.println(F("00:32 - Thirty-two minutes past midnight; the way things were going I could be at it all night. Before beginning a completely new search of the dial I had a thought: maybe this safe didn't open on zero as older models did, but on a factory-set number. - Everette Howard Hunt, Ixtapa "));
      return;

    // Codegen for 00:33 for 1 quotations:
    case 33:
      Serial.println(F("Only one option for 00:33:"));
    Serial.println(F("00:33 - \"So that at twelve-thirty-three you bolted the south door?\" \"Yes,\" replied Stephen Maxie easily. \"At thirty-three minutes past midnight.\" - P.D. James, Cover her Face"));
      return;

    // Codegen for 00:34 for 1 quotations:
    case 34:
      Serial.println(F("Only one option for 00:34:"));
    Serial.println(F("00:34 - Thirty-four minutes past midnight. 'We got ten minutes to be back here.' LT didn't argue. Schoolboy knew his former trade. LT's eyes fretted over the museum. 'Not still worrying about the security, are you, because there ain't none.' - Dreda Say Mitchell, Killer Tune"));
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
    Serial.println(F("00:40 - We sat in the car park till twenty to one/ And now I'm engaged to Miss Joan Hunter Dunn. - John Betjeman, A Subaltern's Love Song "));
      return;

    // Codegen for 00:41 for 0 quotations:
    case 41:
      Serial.println(F("No quotes for 00:41"));
      return;

    // Codegen for 00:42 for 1 quotations:
    case 42:
      Serial.println(F("Only one option for 00:42:"));
    Serial.println(F("00:42 - The butt had been growing warm in her fingers; now the glowing end stung her skin. She crushed the cigarette out and stood, brushing ash from her black skirt. It was eighteen minutes to one. She went to the house phone and called his room. The telephone rang and rang, but there was no answer. - Herman Wouk, Marjorie Morningstar"));
      return;

    // Codegen for 00:43 for 1 quotations:
    case 43:
      Serial.println(F("Only one option for 00:43:"));
    Serial.println(F("00:43 - Died five minutes ago, you say? he asked. His eye went to the watch on his wrist. Twelve-forty-three, he wrote on the blotter. - Agatha Christie, A Pocket Full of Rye"));
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
          return;
        case 1:
          Serial.println(F("00:45 - At the thought he jumped to his feet and took down from its hook the coat in which he had left Miss Viner's letter. The clock marked the third quarter after midnight, and he knew it would make no difference if he went down to the post-box now or early the next morning; but he wanted to clear his conscience, and having found the letter he went to the door. - Edith Wharton, The Reef "));
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
      return;

    // Codegen for 00:55 for 1 quotations:
    case 55:
      Serial.println(F("Only one option for 00:55:"));
    Serial.println(F("00:55 - He rolled one way, rolled the other, listened to the loud tick of the clock, and was asleep a minute later. Five to one in the morning. Fifty-one hours to go. - Lee Child, 61 Hours"));
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
          return;
        case 1:
          Serial.println(F("00:56 - Teacher used to lie awake at night facing that clock, batting his eyelashes against his pillowcase to mimic the sound of the rolling drop action. One night, and this first night is lost in the countless later nights of compounding wonder, he discovered a game. Say the time was 12:56. - Dana Standridge, Lessons in Essence"));
          return;
      } // end switch (option)

    // Codegen for 00:57 for 1 quotations:
    case 57:
      Serial.println(F("Only one option for 00:57:"));
    Serial.println(F("00:57 - A minute had passed, and the roller dropped a new leaf. 12:57. 12 + 57 = 69; 6 + 9 = 15; 1 + 5 = 6. 712 + 5 = 717; 71 + 7 = 78; 7 + 8 = 15; 1 + 5 = 6 again. - Dana Standridge, Lessons in Essence"));
      return;

    // Codegen for 00:58 for 1 quotations:
    case 58:
      Serial.println(F("Only one option for 00:58:"));
    Serial.println(F("00:58 - It was downright shameless on his part to come visiting them, especially at night, almost at one in the morning, after all that had happened. - Fyodor Dostoyevsky, The Idiot"));
      return;

    // Codegen for 00:59 for 1 quotations:
    case 59:
      Serial.println(F("Only one option for 00:59:"));
    Serial.println(F("00:59 - ‘What time is it now?’ she said. ‘About one o’clock’. ‘In the morning?’ Herera’s friend leered at her. ‘No, there’s a total eclipse of the sun’. - Jonathan Frantzen, Freedom"));
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
          return;
        case 1:
          Serial.println(F("01:00 - He didn’t know what was at the end of the chute. The opening was narrow (though large enough to take the canary). He dreamed that the chute opened onto vast garbage bins filled with old coffee filters, ravioli in tomato sauce and mangled genitalia. Huge worms, as big as the canary, armed with terrible beaks, would attack the body. Tear off the feet, rip out its intestines, burst the eyeballs. He woke up, trembling; it was only one o’clock. He swallowed three Xanax. So ended his first night of freedom. - Michel Houellebecq, Atomised "));
          return;
        case 2:
          Serial.println(F("01:00 - I looked attentively at her, as she put that singular question to me. It was then nearly one o'clock. All I could discern distinctly by the moonlight was a colourless, youthful face, meagre and sharp to look at about the cheeks and chin; large, grave, wistfully attentive eyes; nervous, uncertain lips; and light hair of a pale, brownish-yellow hue. - Wilkie Collins, The Woman in White "));
          return;
        case 3:
          Serial.println(F("01:00 - I'm the only one awake in this house on this night before the day that will change all our lives. Though it's already that day: the little luminous hands on my alarm clock (which I haven't set) show just gone one in the morning. - Graham Swift, Tomorrow "));
          return;
        case 4:
          Serial.println(F("01:00 - It was the thirtieth of May by now. One am on the thirtieth of May 1940. Quite a famous date on which to be lying awake and staring at the ceiling. Already in the creeks and tidal estuaries of England the pleasure-boats and paddle-steamers were casting their moorings for the day trip to Dunkirk. And, over on the other side, Ted stood as a good a chance as anyone else. - Norman Collins, London Belongs to Me "));
          return;
        case 5:
          Serial.println(F("01:00 - Last night of all, When yon same star that's westward from the pole Had made his course t'illume that part of heaven Where now it burns, Marcellus and myself, The bell then beating one - - William Shakespeare, Hamlet "));
          return;
        case 6:
          Serial.println(F("01:00 - The station was more crowded than he had expected to find it at - what was it? he looked up at the clock - one o'clock in the morning. What in the name of God was he doing on King's Cross station at one o'clock in the morning, with no cigarette and no home that he could reasonably expect to get into without being hacked to death by a homicidal bird? - Douglas Adams, The Long Dark Tea-time of the Soul "));
          return;
      } // end switch (option)

    // Codegen for 01:01 for 1 quotations:
    case 61:
      Serial.println(F("Only one option for 01:01:"));
    Serial.println(F("01:01 - ‘What time is it now?’ she said. ‘About one o’clock’. ‘In the morning?’ Herera’s friend leered at her. ‘No, there’s a total eclipse of the sun’. - Jonathan Frantzen, Freedom"));
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
      return;

    // Codegen for 01:07 for 0 quotations:
    case 67:
      Serial.println(F("No quotes for 01:07"));
      return;

    // Codegen for 01:08 for 1 quotations:
    case 68:
      Serial.println(F("Only one option for 01:08:"));
    Serial.println(F("01:08 - It was 1.08a.m. but he had left the ball at the same time as I did, and had further to travel. - Graeme Simsion, The Rosie Project"));
      return;

    // Codegen for 01:09 for 1 quotations:
    case 69:
      Serial.println(F("Only one option for 01:09:"));
    Serial.println(F("01:09 - They made an unostentatious exit from their coach, finding themselves, when the express had rolled on into the west, upon a station platform in a foreign city at nine minutes past one o'clock in the morning - but at length without their shadow. - Louis Joseph Vance, The Black Bag"));
      return;

    // Codegen for 01:10 for 1 quotations:
    case 70:
      Serial.println(F("Only one option for 01:10:"));
    Serial.println(F("01:10 - February 26, Saturday - Richards went out 1.10am and found it clearing a bit, so we got under way as soon as possible, which was 2:10a.m. - Ernest Shackleton, South: The Endurance Expedition"));
      return;

    // Codegen for 01:11 for 1 quotations:
    case 71:
      Serial.println(F("Only one option for 01:11:"));
    Serial.println(F("01:11 - Declares one of the waiters was the worse for liquor, and that he was giving him a dressing down. Also that it was nearer to one than half past. - Agatha Christie, The Affair at the Victory Ball"));
      return;

    // Codegen for 01:12 for 1 quotations:
    case 72:
      Serial.println(F("Only one option for 01:12:"));
    Serial.println(F("01:12 - It was 1:12am when Father arrived at the police station. I did not see him until 1:28am but I knew he was there because I could hear him. He was shouting, 'I want to see my son,' and 'Why the hell is he locked up?' and, 'Of course I'm bloody angry.' - Mark Haddon, The Curious Incident of the Dog in the Night-Time"));
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
          return;
        case 1:
          Serial.println(F("01:15 - Lily Chen always prepared an 'evening' snack for her husband to consume on his return at 1.15am. - Timothy Mo, Sour Sweet "));
          return;
        case 2:
          Serial.println(F("01:15 - The ghost that got into our house on the night of November 17, 1915, raised such a hullabaloo of misunderstandings that I am sorry I didn't just let it keep on walking, and go to bed. Its advent caused my mother to throw a shoe through a window of the house next door and ended up with my grandfather shooting a patrolman. I am sorry, therefore, as I have said, that I ever paid any attention to the footsteps. They began about a quarter past one o'clock in the morning, a rhythmic, quick-cadenced walking around the dining-room table. - James Thurber, My Life and Hard Times: \"The Night the Ghost Got In\" "));
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
          return;
        case 1:
          Serial.println(F("01:16 - From 1am to 1.16am vouched for by other two conductors. - Agatha Christie, Murder on the Orient Express"));
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
          return;
        case 1:
          Serial.println(F("01:17 - The clocks stopped at 1:17. A long shear of light and then a series of low concussions. He got up and went to the window. What is it? she said. He didnt answer. He went into the bathroom and threw the lightswitch but the power was already gone. A dull rose glow in the windowglass. He dropped to one knee and raised the lever to stop the tub and then turned on both taps as far as they would go. She was standing in the doorway in her nightwear, clutching the jamb, cradling her belly in one hand. What is it? she said. What is happening? - Cormac McCarthy, The Road "));
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
          Serial.println(F("01:20 - \"Well!\" she said, looking like a minor female prophet about to curse the sins of the people. \"May I trespass on your valuable time long enough to ask what in the name of everything bloodsome you think you're playing at, young piefaced Bertie? It is now some twenty minutes past one o'clock in the morning, and not a spot of action on your part.\" - P.G. Wodehouse, Jeeves and the Feudal Spirit "));
          return;
        case 1:
          Serial.println(F("01:20 - Then it was 1.20am, but I hadn't heard Father come upstairs to bed. I wondered if he was asleep downstairs or whether he was waiting to come in and kill me. So I got out my Swiss Army Knife and opened the saw blade so that I could defend myself. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
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
      return;

    // Codegen for 01:23 for 1 quotations:
    case 83:
      Serial.println(F("Only one option for 01:23:"));
    Serial.println(F("01:23 - The clock marked twenty-three minutes past one. He was suddenly full of agitation, yet hopeful. She had come! Who could tell what she would say? She might offer the most natural explanation of her late arrival. - Anatole France, A Mummer's Tale"));
      return;

    // Codegen for 01:24 for 1 quotations:
    case 84:
      Serial.println(F("Only one option for 01:24:"));
    Serial.println(F("01:24 - Larkin had died at 1.24am, turning to the nurse who was with him, squeezing her hand, and saying faintly, 'I am going to the inevitable.' - Hermione Lee, Body Parts: Essays on Life-Writing"));
      return;

    // Codegen for 01:25 for 1 quotations:
    case 85:
      Serial.println(F("Only one option for 01:25:"));
    Serial.println(F("01:25 - He made a last effort; he tried to rise, and sank back. His head fell on the sofa cushions. It was then twenty-five minutes past one o'clock. - Wilkie Collins, The Moonstone"));
      return;

    // Codegen for 01:26 for 1 quotations:
    case 86:
      Serial.println(F("Only one option for 01:26:"));
    Serial.println(F("01:26 - When I reached the stop and got off, it was already one twenty-six A.M. by the bus's own clock. I had been gone over ten hours. - Tanith Lee, The Silver Metal Lover"));
      return;

    // Codegen for 01:27 for 1 quotations:
    case 87:
      Serial.println(F("Only one option for 01:27:"));
    Serial.println(F("01:27 - At twenty-seven minutes past one she felt as if she was levitating out of her body. - Deon Meyer, Trackers"));
      return;

    // Codegen for 01:28 for 1 quotations:
    case 88:
      Serial.println(F("Only one option for 01:28:"));
    Serial.println(F("01:28 - It was 1:12 am when Father arrived at the police station. I did not see him until 1:28 am but I knew he was there because I could hear him. He was shouting, 'I want to see my son,' and 'Why the hell is he locked up?' and, 'Of course I'm bloody angry.' - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
      return;

    // Codegen for 01:29 for 1 quotations:
    case 89:
      Serial.println(F("Only one option for 01:29:"));
    Serial.println(F("01:29 - He exited the men's room at one-twenty-nine A.M. - William Edmund Butterworth, The Narc"));
      return;

    // Codegen for 01:30 for 4 quotations:
    case 90:
      option = random(0, 4);
      Serial.print(F("4 options for 01:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("01:30 - \"Half-past one”, The street lamp sputtered, The street lamp muttered, The street lamp said, \"Regard that woman ...\" - TS Eliot, Rhapsody on a Windy Night "));
          return;
        case 1:
          Serial.println(F("01:30 - Around 1:30 A.M. the door opened and I thought it was Karla, but it was Bug, saying Karla and Laura had gone out for a stag night after they ran out of paint. - Douglas Coupland, Microserfs "));
          return;
        case 2:
          Serial.println(F("01:30 - The late hour helped. It simplified things. It categorized the population. Innocent bystanders were mostly home in bed. I walked for half an hour, but nothing happened. Until one thirty in the morning. Until I looped around to 22nd and Broadway. - Lee Child, Gone Tomorrow "));
          return;
        case 3:
          Serial.println(F("01:30 - The radio alarm clock glowed 1:30 a.m. Bad karaoke throbbed through walls. I was wide awake, straightjacketed by my sweaty sheets. A headache dug its thumbs into my temples. My gut pulsed with gamma interference: I lurched to the toilet. - David Mitchell, Ghostwritten "));
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
      return;

    // Codegen for 01:33 for 1 quotations:
    case 93:
      Serial.println(F("Only one option for 01:33:"));
    Serial.println(F("01:33 - He looked at his watch. One-thirty-three a.m. He had been asleep on this bench for over an hour and a half. - Kat Fox, Skeletons"));
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
      return;

    // Codegen for 01:39 for 0 quotations:
    case 99:
      Serial.println(F("No quotes for 01:39"));
      return;

    // Codegen for 01:40 for 1 quotations:
    case 100:
      Serial.println(F("Only one option for 01:40:"));
    Serial.println(F("01:40 - March twelfth, one-forty am, she leaves a group of drinking buddies to catch a bus home. She never makes it. - Kathy Reichs, Bones to Ashes"));
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
      return;

    // Codegen for 01:45 for 0 quotations:
    case 105:
      Serial.println(F("No quotes for 01:45"));
      return;

    // Codegen for 01:46 for 1 quotations:
    case 106:
      Serial.println(F("Only one option for 01:46:"));
    Serial.println(F("01:46 - That particular phenomenom got Presto up at one forty-six a.m.; silently, he painted his face and naked body with camouflage paint. He opened the door to his room and stepped out into the common lobby. - J.W. Stockton, Fardnock's Revenge"));
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
      return;

    // Codegen for 01:51 for 1 quotations:
    case 111:
      Serial.println(F("Only one option for 01:51:"));
    Serial.println(F("01:51 - At nine minutes to two the other vehicle arrived. At first Milla didn't believe her eyes: that shape, those markings. - Deon Meyer, Trackers"));
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
          Serial.println(F("02:00 - \"The middle of the night?\" Alec asked sharply.\"Can you be more definite?\" \"About two. Just past.\" Daisy noted that he expressed no concern for her safety. - Carola Dunn, Dead in the water "));
          return;
        case 1:
          Serial.println(F("02:00 - As two o'clock pealed from the cathedral bell, Jean Valjean awoke. - Victor Hugo, Les Miserables "));
          return;
        case 2:
          Serial.println(F("02:00 - Get on plane at 2 A.M., amid bundles, chickens, gypsies, sit opposite pair of plump fortune tellers who groan and (very discreetly) throw up all the way to Tbilisi. - J. Updike, Bech: A Book"));
          return;
        case 3:
          Serial.println(F("02:00 - Lady Macbeth: Out, damned spot! out, I say!—One: two: why, then, 'tis time to do't.—Hell is murky!—Fie, my lord, fie! a soldier, and afeard? What need we fear who knows it, when none can call our power to account?—Yet who would have thought the old man to have had so much blood in him. - Shakespeare, Macbeth"));
          return;
        case 4:
          Serial.println(F("02:00 - Somewhere behind a screen a clock began wheezing, as though oppressed by something, as though someone were strangling it. After an unnaturally prolonged wheezing there followed a shrill, nasty, and as it were unexpectedly rapid, chime - as though someone were suddenly jumping forward. It struck two. I woke up, though I had indeed not been asleep but lying half-conscious. - Fyodor Dostoyevsky, Notes from the underground "));
          return;
        case 5:
          Serial.println(F("02:00 - When all had grown quiet and Fyodor Pavlovich went to bed at around two o'clock, Ivan Fyodorovich also went to bed with the firm resolve of falling quickly asleep, as he felt horribly exhausted.' - Fyodor Dostoyevsky, The Brothers Karamazov "));
          return;
      } // end switch (option)

    // Codegen for 02:01 for 1 quotations:
    case 121:
      Serial.println(F("Only one option for 02:01:"));
    Serial.println(F("02:01 - I checked my watch. 2.01am. The cheeseburger Happy Meal was now only a distant memory. I cursed myself for not also ordering a breakfast sandwich for the morning. - Reif Larsen, The Selected Works of T.S. Spivet"));
      return;

    // Codegen for 02:02 for 1 quotations:
    case 122:
      Serial.println(F("Only one option for 02:02:"));
    Serial.println(F("02:02 - \"Wake up.\" \"Having the worst dream.\" \"I should certainly say you were.\" \"It was awful. It just went on and on.\" \"I shook you and shook you and.\" \"Time is it.\" \"It's nearly - almost 2:04.” - David Foster Wallace, Oblivion"));
      return;

    // Codegen for 02:03 for 0 quotations:
    case 123:
      Serial.println(F("No quotes for 02:03"));
      return;

    // Codegen for 02:04 for 1 quotations:
    case 124:
      Serial.println(F("Only one option for 02:04:"));
    Serial.println(F("02:04 - \"Wake up.\" \"Having the worst dream.\" \"I should certainly say you were.\" \"It was awful. It just went on and on.\" \"I shook you and shook you and.\" \"Time is it.\" \"It's nearly - almost 2:04.” - David Foster Wallace, Oblivion"));
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
          return;
        case 1:
          Serial.println(F("02:05 - Then he began ringing the bell. In about ten minutes his valet appeared, half dressed, and looking very drowsy. ‘I am sorry to have had to wake you up, Francis,’ he said, stepping in; ‘but I had forgotten my latch-key. What time is it?’ ‘Five minutes past two, sir,’ answered the man, looking at the clock and yawning. ‘Five minutes past two? How horribly late! You must wake me at nine to-morrow. I have some work to do.’ - Oscar Wilde, The Picture of Dorian Gray "));
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
          return;
        case 1:
          Serial.println(F("02:07 - But I couldn't sleep. And I got out of bed at 2.07 am and I felt scared of Mr. Shears so I went downstairs and out of the front door into Chapter Road. - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 2:
          Serial.println(F("02:07 - Saturday, 17 November — 2.07 a.m. I cannot sleep. Ben is upstairs, back in bed, and I am writing this in the kitchen. He thinks I am drinking a cup of cocoa that he has just made for me. He thinks I will come back to bed soon. I will, but first I must write again. - S. J. Watson, Before I Go to Sleep "));
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
          Serial.println(F("02:10 - “Ten minutes past two, sir,\" answered the man, looking at the clock and blinking. \"Ten minutes past two? How horribly late! ..” - Oscar Wilde, The Picture of Dorian Gray "));
          return;
        case 1:
          Serial.println(F("02:10 - Decided to get under way again as soon as there is any clearance. Snowing and blowing, force about fifty or sixty miles an hour. February 26, Saturday - Richards went out 1:10am and found it clearing a bit, so we got under way as soon as possible, which was 2:10am - Ernest Shackleton, South: The Endurance Expedition"));
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
      return;

    // Codegen for 02:13 for 1 quotations:
    case 133:
      Serial.println(F("Only one option for 02:13:"));
    Serial.println(F("02:13 - Now, listen: your destination is Friday, 4 August 1944, and the window will punch through at 22.30 hours. You're going to a dimension that diverged from our own at 02.13 on the morning of Wednesday 20 February 1918, over twenty-six years earlier. You don't know what it's going to be like... - Chris James, The Second Internet Cafe, Part 1: The Dimension Researcher"));
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
          return;
        case 1:
          Serial.println(F("02:15 - It did. When the alarm rang at two fifteen, Lew shut it off, snapped on the little bedside lamp, then swung his feet to the floor to sit on the edge of the bed, holding his eyes open. - Jack Finney, The Night People "));
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
          Serial.println(F("02:17 - \"What time is it now?\" He turned her very dusty alarm clock to check. \"Two-seventeen,\" he marveled. It was the strangest time he'd seen in his entire life. \"I apologize that the room is so messy,\" Lalitha said. \"I like it. I love how you are. Are you hungry? I'm a little hungry.\" \"No, Walter.\" She smiled. \"I'm not hungry. But I can get you something.\" \"I was thinking, like, a glass of soy milk. Soy beverage.\" - Jonathan Franzen, Freedom "));
          return;
        case 1:
          Serial.println(F("02:17 - One of the \"choppers\" stopped, did an about-turn and came back to me. The flare spluttered and faded, and now the glare of the spotlight blinded me. I sat very still. It was 2.17. Against the noise of the blades a deeper resonant sound bit into the chill black air. - Len Deighton, The Ipcress File"));
          return;
      } // end switch (option)

    // Codegen for 02:18 for 1 quotations:
    case 138:
      Serial.println(F("Only one option for 02:18:"));
    Serial.println(F("02:18 - It was 2:18 in the morning, and Donna could see no one else in any other office working so late. - Jane Smiley, Moo"));
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
          return;
        case 1:
          Serial.println(F("02:20 - The night of his third walk Lew slept in his own apartment. When his eyes opened at two twenty, by the green hands of his alarm, he knew that this time he'd actually been waiting for it in his sleep. - Jack Finney, The Night People "));
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
          return;
        case 1:
          Serial.println(F("02:21 - It was the urge to look up at the sky. But of course there was no sun nor moon nor stars overhead. Darkness hung heavy over me. Each breath I took, each wet footstep, everything wanted to slide like mud to the ground. I lifted my left hand and pressed on the light of my digital wristwatch. Two-twenty-one. It was midnight when we headed underground, so only a little over two hours had passed. We continued walking down, down the narrow trench, mouths clamped tight. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
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
      return;

    // Codegen for 02:25 for 1 quotations:
    case 145:
      Serial.println(F("Only one option for 02:25:"));
    Serial.println(F("02:25 - You see it is time: 2.25am. You get out of bed. - David Peace, Nineteen Eighty-Three: The Red Riding Quartet, Book Four"));
      return;

    // Codegen for 02:26 for 1 quotations:
    case 146:
      Serial.println(F("Only one option for 02:26:"));
    Serial.println(F("02:26 - Listened to a voicemail message left at 2.26am by Claude. - Richard Mason, The Lighted Rooms"));
      return;

    // Codegen for 02:27 for 1 quotations:
    case 147:
      Serial.println(F("Only one option for 02:27:"));
    Serial.println(F("02:27 - The moon didn’t shine again until 2.27am. It was enough to show Wallander that he was positioned some distance below the tree. - Henning Mankell, One Step Behind"));
      return;

    // Codegen for 02:28 for 1 quotations:
    case 148:
      Serial.println(F("Only one option for 02:28:"));
    Serial.println(F("02:28 - 2.28am: Ran out of sheep and began counting other farmyard animals. - Mike Gayle, Mr Commitment"));
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
          Serial.println(F("02:30 - \"Get into the mood, Shirl!\" Lew said. \"The party's already started! Yippee! You dressed for a party, Harry?\" \"Yep. Something told me to put on dinner clothes when I went to bed tonight.\" \"I'm in mufti myself: white gloves and matching tennis shoes. But I'm sorry to report that Jo is still in her Dr. Dentons. What're you wearing, Shirl?\" \"My old drum majorette's outfit. The one I wore to the State Finals. Listen, we can't tie up the phones like this.\" \"Why not?\" said Harry. \"Who's going to call at 2:30 a.m. with a better idea? Yippee, to quote Lew, we're having a party! What're we serving, Lew?\" \"Beer, I guess. Haven't got any wine, have we, Jo?\" \"Just for cooking.\" - Jack Finney, The Night People "));
          return;
        case 1:
          Serial.println(F("02:30 - At about half past two she had been woken by the creak of footsteps out on the stairs. At first she had been frightened. - Sarah Waters, The Little Stranger"));
          return;
        case 2:
          Serial.println(F("02:30 - Inc, I tried to pull her off about 0230, and there was this fucking… sound. - David Foster Wallace, Infinite Jest "));
          return;
        case 3:
          Serial.println(F("02:30 - It is 2.30am and I am tight. As a tick, as a lord, as a newt. Must write this down before the sublime memories fade and blur. - William Boyd, Any Human Heart "));
          return;
      } // end switch (option)

    // Codegen for 02:31 for 1 quotations:
    case 151:
      Serial.println(F("Only one option for 02:31:"));
    Serial.println(F("02:31 - And then I woke up because there were people shouting in the flat and it was 2.31am. And one of the people was Father and I was frightened. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
      return;

    // Codegen for 02:32 for 1 quotations:
    case 152:
      Serial.println(F("Only one option for 02:32:"));
    Serial.println(F("02:32 - The last guests departed at 2.32 a.m., two hours and two minutes after the scheduled completion time. - Graeme Simsion, The Rosie Project"));
      return;

    // Codegen for 02:33 for 1 quotations:
    case 153:
      Serial.println(F("Only one option for 02:33:"));
    Serial.println(F("02:33 - But it wasn't going on! It was two-thirty-four, well. Two-thirty-three and nothing had happened. Suppose he got a room call, or the elevator night-bell rang, now. - Jim Thompson, A Swell-looking Babe"));
      return;

    // Codegen for 02:34 for 1 quotations:
    case 154:
      Serial.println(F("Only one option for 02:34:"));
    Serial.println(F("02:34 - But it wasn't going on! It was two-thirty-four, well. Two-thirty-three and nothing had happened. Suppose he got a room call, or the elevator night-bell rang, now. - Jim Thompson, A Swell-looking Babe"));
      return;

    // Codegen for 02:35 for 1 quotations:
    case 155:
      Serial.println(F("Only one option for 02:35:"));
    Serial.println(F("02:35 - For what happened at 2.35 we have the testimony of the priest, a young, intelligent, and well-educated person; of Patrolman William J. Monohan of the Central Station, an officer of the highest reliability who had paused at that part of his beat to inspect the crowd. - HP Lovecraft, The Haunter of the Dark"));
      return;

    // Codegen for 02:36 for 1 quotations:
    case 156:
      Serial.println(F("Only one option for 02:36:"));
    Serial.println(F("02:36 - It was about 2.36am when a provost colonel arrived to arrest me. At 2.36 1/2 I remembered the big insulating gauntlets. But even had I remembered before, what could I have done? - Len Deighton, The Ipcress File"));
      return;

    // Codegen for 02:37 for 1 quotations:
    case 157:
      Serial.println(F("Only one option for 02:37:"));
    Serial.println(F("02:37 - June 13, 1990. Thirty-seven minutes past two in the morning. And sixteen seconds. - Stephen King, The Stand"));
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
      return;

    // Codegen for 02:44 for 0 quotations:
    case 164:
      Serial.println(F("No quotes for 02:44"));
      return;

    // Codegen for 02:45 for 1 quotations:
    case 165:
      Serial.println(F("Only one option for 02:45:"));
    Serial.println(F("02:45 - 0245h., Ennet House, the hours that are truly wee. - David Foster Wallace, Infinite Jest "));
      return;

    // Codegen for 02:46 for 2 quotations:
    case 166:
      option = random(0, 2);
      Serial.print(F("2 options for 02:46. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("02:46 - 2.46am. The chain drive whirred and the paper target slid down the darkened range, ducking in and out of shafts of yellow incandescent light. At the firing station, a figure waited in the shadows. As the target passed the twenty-five-foot mark, the man opened fire: eight shots-rapid, unhesitating. - Steve Sohmer, Patriots"));
          return;
        case 1:
          Serial.println(F("02:46 - Vicki shoved her glasses at her face and peered at the clock. Two forty-six. 'I don't have time for this' she muttered, sttling back against the pillows, heart still slamming against her ribs. - Tanya Huff, Blood Lines "));
          return;
      } // end switch (option)

    // Codegen for 02:47 for 1 quotations:
    case 167:
      Serial.println(F("Only one option for 02:47:"));
    Serial.println(F("02:47 - The glowing numbers read 2.47am. Moisés sighs and turns back to the bathroom door. Finally, the doorknob turns and Conchita comes back to bed. She resumes her place next to Moisés. Relieved, he pulls her close. - Daniel A. Olivas, The Book of Want"));
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
          Serial.println(F("02:55 - \"It's the way the world will end, Harry. Recorded cocktail music nuclear-powered to play on for centuries after all life has been destroyed. Selections from 'No, No, Nanette,' throughout eternity. That do you for 2:55 a.m.?\" - Jack Finney, The Night People "));
          return;
        case 1:
          Serial.println(F("02:55 - Time to go: 2.55am. Two-handed, Cec lifted his peak cap from the chair. - Iain Sinclair, Downriver"));
          return;
      } // end switch (option)

    // Codegen for 02:56 for 1 quotations:
    case 176:
      Serial.println(F("Only one option for 02:56:"));
    Serial.println(F("02:56 - It was 2:56 when the shovel touched the coffin. We all heard the sound and looked at each other. - Jonathan Safran Foer, Extremely Loud and Incredibly Close "));
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
      return;

    // Codegen for 03:00 for 18 quotations:
    case 180:
      option = random(0, 18);
      Serial.print(F("18 options for 03:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:00 - \"She died this morning, very early, about three o'clock.\" - Virginia Woolf, The Voyage Out "));
          return;
        case 1:
          Serial.println(F("03:00 - Three a.m. That’s our reward. Three in the morn. The soul’s midnight. The tide goes out, the soul ebbs. And a train arrives at an hour of despair. Why? - Ray Bradbury, Something Wicked This Way Comes "));
          return;
        case 2:
          Serial.println(F("03:00 - According to her watch it was shortly after three o'clock, and according to everything else it was night-time. - Douglas Adams, The Long Dark Tea-time of the Soul "));
          return;
        case 3:
          Serial.println(F("03:00 - At three am I was walking the floor and listening to Katchaturian working in a tractor factory. He called it a violin concerto. I called it a loose fan belt and the hell with it. - Raymond Chandler, The Long Goodbye "));
          return;
        case 4:
          Serial.println(F("03:00 - At three o' clock in the morning Eurydice is bound to come into it. After all, why did I sit here like a telegrapher at a lost outpost if not to receive messages from everywhere about the lost Eurydice who was never mine to begin with but whom I lamented and sought continually both professionally and amateurishly. This is not a digression. Where I am at three o' clock in the morning - and by now every hour is three o' clock in the morning - there are no digressions, it's all one thing. - Russell Hoban, The Medusa Frequency "));
          return;
        case 5:
          Serial.println(F("03:00 - But at three o’clock in the morning, a forgotten package has the same tragic importance as a death sentence, and the cure doesn’t work -- and in a real dark night of the soul it is always three o’clock in the morning, day after day. - F. Scott Fitzgerald, The Crack-Up "));
          return;
        case 6:
          Serial.println(F("03:00 - Early mornings, my mother is about, drifting in her pale nightie, making herself a cup of tea in the kitchen. Water begins to boil in the kettle; it starts as a private, secluded sound, pure as rain, and grows to a steady, solipsistic bubbling. Not till she has had one cup of tea, so weak that it has a colour accidentally golden, can she begin her day. She is an insomniac. Her nights are wide-eyed and excited with worry. Even at three o'clock in the morning one might hear her eating a Bain Marie biscuit in the kitchen. - Amit Chaudhuri, Afternoon Raag "));
          return;
        case 7:
          Serial.println(F("03:00 - I slam the phone down but it misses the base. I hit the clock instead, which flashes 3 a.m. - Dan Holloway, Songs from the Other Side of the Wall "));
          return;
        case 8:
          Serial.println(F("03:00 - In a real dark night of the soul it is always 3 o'clock in the morning. - F. Scott Fitzgerald, The Crack-Up "));
          return;
        case 9:
          Serial.println(F("03:00 - It was six untroubled days later – the best days at the camp so far, lavish July light thickly spread everywhere, six masterpiece mountain midsummer days, one replicating the other – that someone stumbled jerkily, as if his ankles were in chains, to the Comanche cabin’s bathroom at three A.M. - Philip Roth, Nemesis"));
          return;
        case 10:
          Serial.println(F("03:00 - It was three in the morning when his taxi stopped by giant mounds of snow outside his hotel. He had not eaten in hours. - Ian McEwan, Solar "));
          return;
        case 11:
          Serial.println(F("03:00 - Once I saw a figure I shall never forget. It was three o'clock at night, as I was going home from Blacky as usual; it was a short-cut for me, and there would be nobody in the street at this time of night, I thought, especially not in this frightful cold. - Max Frisch, I'm Not Stiller"));
          return;
        case 12:
          Serial.println(F("03:00 - Roused from her sleep, Freya Gaines groped for the switch of the vidphone; groggily she found it and snapped it on. 'Lo,' she mumbled, wondering what time it was. She made out the luminous dial of the clock beside the bed. Three AM. Good grief. - Philip K Dick, The Game Players of Titan "));
          return;
        case 13:
          Serial.println(F("03:00 - Schact clears his mouth and swallows mightily. 'Tavis can't even regrout tile in the locker room without calling a Community meeting or appointing a committee. The Regrouting Committee's been dragging along since may. Suddenly they're pulling secret 0300 milk-switches? It doesn't ring true, Jim. - David Foster Wallace, Infinite Jest "));
          return;
        case 14:
          Serial.println(F("03:00 - Three in the morning, thought Charles Halloway, seated on the edge of his bed. Why did the train come at that hour? For, he thought, it’s a special hour. Women never wake then, do they? They sleep the sleep of babes and children. But men in middle age? They know that hour well. - Ray Bradbury, Something Wicked This Way Comes "));
          return;
        case 15:
          Serial.println(F("03:00 - What's the time?\" said the man, eyeing George up and down with evident suspicion; \"why, if you listen you will hear it strike.\" George listened, and a neighbouring clock immediately obliged. \"But it's only gone three!\" said George in an injured tone, when it had finished. - Jerome K Jerome, Three Men in a Boat "));
          return;
        case 16:
          Serial.println(F("03:00 - When Sophie awoke, it was 3:00 a.m. - Paula Fox, Desperate Characters "));
          return;
        case 17:
          Serial.println(F("03:00 - You hearken, Missy. It’s three o’clock in the morning and I’ve got all my faculties as well as ever I had in my life. I know all my property and where the money’s put out. And I’ve made everything ready to change my mind, and do as I like at the last. Do you hear, Missy? I’ve got my faculties.” - George Eliot, Middlemarch "));
          return;
      } // end switch (option)

    // Codegen for 03:01 for 1 quotations:
    case 181:
      Serial.println(F("Only one option for 03:01:"));
    Serial.println(F("03:01 - It was now about three o'clock in the morning and Francis Macomber, who had been asleep a little while after he had stopped thinking about the lion, wakened and then slept again. - Ernest Hemingway, The Short Happy Life of Francis Macomber "));
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
      return;

    // Codegen for 03:05 for 1 quotations:
    case 185:
      Serial.println(F("Only one option for 03:05:"));
    Serial.println(F("03:05 - On the Sunday before Christmas she awoke at 3:05 a.m. and though: Thirty-six hours. Four hours later she got up thinking: Thirty-two hours. Late in the day she took Alfred to the street-association Christmas party at Dale and Honey Driblett’s, sat him down safely with Kirby Root, and proceeded to remind all her neighbors that her favorite grandson, who’d been looking forward all year to a Christmas in St. Jude, was arriving tomorrow afternoon. - Jonathan Franzen, The Corrections "));
      return;

    // Codegen for 03:06 for 0 quotations:
    case 186:
      Serial.println(F("No quotes for 03:06"));
      return;

    // Codegen for 03:07 for 1 quotations:
    case 187:
      Serial.println(F("Only one option for 03:07:"));
    Serial.println(F("03:07 - Wayne late-logged in: 3.07am -the late-late show. He parked. He dumped his milk can. He yawned, he stretched. He scratched. - James Ellroy, The Cold Six Thousand"));
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
          return;
        case 1:
          Serial.println(F("03:10 - Love again; wanking at ten past three - Philip Larkin, Love Again"));
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
      return;

    // Codegen for 03:15 for 1 quotations:
    case 195:
      Serial.println(F("Only one option for 03:15:"));
    Serial.println(F("03:15 - Above the door of Room 69 the clock ticked on at 3:15. The motion was accelerating. What had once been the gymnasium was now a small room, seven feet wide, a tight, almost perfect cube. - JG Ballard, Manhole 69"));
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
          Serial.println(F("03:17 - The two of us sat there, listening—Boris more intently than me. “Who’s that with him then?” I said. “Some whore.” He listened for a moment, brow furrowed, his profile sharp in the moonlight, and then lay back down. “Two of them.” I rolled over, and checked my iPod. It was 3:17 in the morning. - Donna Tartt, The Goldfinch"));
          return;
        case 1:
          Serial.println(F("03:17 - He turned to the monitors again and flicked through the screens, each one able to display eight different camera mountings, giving Kurt 192 different still lives of Green Oaks at 3.17 a.m. this March night. - Catherine O'Flynn, What Was Lost "));
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
      return;

    // Codegen for 03:20 for 1 quotations:
    case 200:
      Serial.println(F("Only one option for 03:20:"));
    Serial.println(F("03:20 - Prabath Kumara, 16. 17th November 1989. At 3.20am from the home of a friend. - Michael Ondaatje, Anil's Ghost"));
      return;

    // Codegen for 03:21 for 1 quotations:
    case 201:
      Serial.println(F("Only one option for 03:21:"));
    Serial.println(F("03:21 - Next, he remembered that the morrow of Christmas would be the twenty-seventh day of the moon, and that consequently high water would be at twenty-one minutes past three, the half-ebb at a quarter past seven, low water at thirty-three minutes past nine, and half flood at thirty-nine minutes past twelve. - Victor Hugo, The Toilers of the Sea"));
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
          return;
        case 1:
          Serial.println(F("03:30 - At half-past three A.M. he lost one illusion: officers sent to reconnoitre informed him that the enemy was making no movement. - Victor Hugo, Les Miserables "));
          return;
        case 2:
          Serial.println(F("03:30 - It's 3:30 A.M. in Mrs. Ralph's finally quiet house when Garp decides to clean the kitchen, to kill the time until dawn. Familiar with a housewife's tasks, Garp fills the sink and starts to wash the dishes. - John Irving, The World According to Garp "));
          return;
        case 3:
          Serial.println(F("03:30 - Let's go to sleep, I say. \"Look at what time it is.\" The clock radio is right there beside the bed. Anyone can see it says three-thirty. - Raymond Carver, Whoever Was Using This Bed"));
          return;
        case 4:
          Serial.println(F("03:30 - Now, look. I am not going to call Dr. McGrath at three thirty in the morning to ask if it's all right for my son to eat worms. That's flat. - Thomas Rockwell, How to Eat Fried Worms "));
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
      return;

    // Codegen for 03:34 for 1 quotations:
    case 214:
      Serial.println(F("Only one option for 03:34:"));
    Serial.println(F("03:34 - It was 3:34 am. and he was wide-awake. He'd heard the phone ring and the sound of his uncle's voice. - Muriel Jensen, Always Florence"));
      return;

    // Codegen for 03:35 for 1 quotations:
    case 215:
      Serial.println(F("Only one option for 03:35:"));
    Serial.println(F("03:35 - He could just see the hands of the alarm clock in the darkness: 3.35 a.m. He adjusted his pillow and shut his eyes. - Henning Mankell, The Dogs of Riga"));
      return;

    // Codegen for 03:36 for 1 quotations:
    case 216:
      Serial.println(F("Only one option for 03:36:"));
    Serial.println(F("03:36 - As I near Deadhorse, it's 3:36 a.m. and seventeen below. Tall, sodium vapor lights spill on the road and there are no trees, only machines, mechanical shadows. There isn't even a church. It tells you everything. - Richard C Matheson, Zoopraxis"));
      return;

    // Codegen for 03:37 for 1 quotations:
    case 217:
      Serial.println(F("Only one option for 03:37:"));
    Serial.println(F("03:37 - It was three thirty-seven A.M., and for once Maggie was asleep. She had got to be a pretty good sleeper in the last few months. Clyde was prouder of this fact than anything. - Stephen Bury, The Cobweb"));
      return;

    // Codegen for 03:38 for 1 quotations:
    case 218:
      Serial.println(F("Only one option for 03:38:"));
    Serial.println(F("03:38 - At 3.38am, it began to snow in Bowling Green, Kentucky. The geese circling the city flew back to the park, landed, and hunkered down to sit it out on their island in the lake. - Connie Willis, Just Like the Ones we Used to Know"));
      return;

    // Codegen for 03:39 for 1 quotations:
    case 219:
      Serial.println(F("Only one option for 03:39:"));
    Serial.println(F("03:39 - 23 October 1893 3.39am. Upon further thought, I feel it necessary to explain that exile into the Master's workshop is not an unpleasant fate. It is not simply some bare-walled cellar devoid of stimulation - quite the opposite. - William Jablonsky, The Clockwork man"));
      return;

    // Codegen for 03:40 for 1 quotations:
    case 220:
      Serial.println(F("Only one option for 03:40:"));
    Serial.println(F("03:40 - His bedside clock shows three forty. He has no idea what he's doing out of bed: he has no need to relieve himself, nor is he disturbed by a dream or some element of the day before, or even by the state of the world. - Ian McEwan, Saturday"));
      return;

    // Codegen for 03:41 for 1 quotations:
    case 221:
      Serial.println(F("Only one option for 03:41:"));
    Serial.println(F("03:41 - The alarm clock said 3.41am. He sat up. Why was the alarm clock slow? He picked up the alarm clock and adjusted the hands to show the same time as his wristwatch: 3.44am - Henning Mankell, The Dogs of Riga"));
      return;

    // Codegen for 03:42 for 1 quotations:
    case 222:
      Serial.println(F("Only one option for 03:42:"));
    Serial.println(F("03:42 - \"We are due in Yellow Sky at 3:42,\" he said, looking tenderly into her eyes. \"\"Oh, are we?\"\" she said, as if she had not been aware of it. To evince surprise at her husband's statement was part of her wifely amiability. - Stephen Crane, Bride Comes to Yellow Sky"));
      return;

    // Codegen for 03:43 for 1 quotations:
    case 223:
      Serial.println(F("Only one option for 03:43:"));
    Serial.println(F("03:43 - The clock says 3.43am. The thermometer says it's a chilly fourteen degrees Fahrenheit. The weatherman says the cold spell will last until Thursday, so bundle up and bundle up some more. There are icicles barring the window of the bat cave. - David Mitchell, Ghostwritten"));
      return;

    // Codegen for 03:44 for 1 quotations:
    case 224:
      Serial.println(F("Only one option for 03:44:"));
    Serial.println(F("03:44 - It was dark. After she had switched the light on and been to the toilet, she checked her watch: 3.44 a.m. She undressed, put the cat out the door and returned to the twin bed. - Will Self, Liver: Leberknödel"));
      return;

    // Codegen for 03:45 for 1 quotations:
    case 225:
      Serial.println(F("Only one option for 03:45:"));
    Serial.println(F("03:45 - LORD CAVERSHAM: Well, sir! what are you doing here? Wasting your life as usual! You should be in bed, sir. You keep too late hours! I heard of you the other night at Lady Rufford's dancing till four o' clock in the morning! LORD GORING: Only a quarter to four, father. - Oscar Wilde, An Ideal Husband"));
      return;

    // Codegen for 03:46 for 0 quotations:
    case 226:
      Serial.println(F("No quotes for 03:46"));
      return;

    // Codegen for 03:47 for 1 quotations:
    case 227:
      Serial.println(F("Only one option for 03:47:"));
    Serial.println(F("03:47 - I stayed awake until 3:47. That was the last time I looked at my watch before I fell asleep. It has a luminous face and lights up if you press a button so I could read it in the dark. I was cold and I was frightened Father might come out and find me. But I felt safer in the garden because I was hidden. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
      return;

    // Codegen for 03:48 for 0 quotations:
    case 228:
      Serial.println(F("No quotes for 03:48"));
      return;

    // Codegen for 03:49 for 1 quotations:
    case 229:
      Serial.println(F("Only one option for 03:49:"));
    Serial.println(F("03:49 - It was 3.49 when he hit me because of the two hundred times I had said, \"I don't know.\" He hit me a lot after that. - Len Deighton, The Ipcress File"));
      return;

    // Codegen for 03:50 for 1 quotations:
    case 230:
      Serial.println(F("Only one option for 03:50:"));
    Serial.println(F("03:50 - She had used her cell phone to leave several messages on the answering machine in Sao Paulo of the young dentist of the previous evening, whose name was Fernando. The first was recorded at ten or five to four in the morning. I'm never going to forget you ... I'm sure we'll meet again somewhere. - Peter Robb, A Death in Brazil: A Book of Omissions"));
      return;

    // Codegen for 03:51 for 2 quotations:
    case 231:
      option = random(0, 2);
      Serial.print(F("2 options for 03:51. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:51 - I lacked the will and physical strength to get out of bed and move through the dark house, clutching walls and stair rails. To feel my way, reinhabit my body, re-enter the world. Sweat trickled down my ribs. The digital reading on the clock-radio was 3:51. Always odd numbered at times like this. What does it mean? Is death odd-numbered? - Don DeLillo, White Noise "));
          return;
        case 1:
          Serial.println(F("03:51 - The digital reading on the clock-radio was 3:51. Always odd numbers at times like this. What does it mean? Is death odd-numbered? - Don DeLillo, White Noise"));
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
      return;

    // Codegen for 03:55 for 1 quotations:
    case 235:
      Serial.println(F("Only one option for 03:55:"));
    Serial.println(F("03:55 - Here in the cavernous basement at 3.55 a.m., in a single pool of light, is Theo Perowne. - Ian McEwan, Saturday"));
      return;

    // Codegen for 03:56 for 0 quotations:
    case 236:
      Serial.println(F("No quotes for 03:56"));
      return;

    // Codegen for 03:57 for 1 quotations:
    case 237:
      Serial.println(F("Only one option for 03:57:"));
    Serial.println(F("03:57 - Certain facts were apparent: dark; cold; thundering boots; quilts; pillow; light under the door – the materials of reality - but I could not pin these materials down in time. And the raw materials of reality without that glue of time are materials adrift and reality is as meaningless as the balsa parts of a model airplane scattered to the wind...I am in my old room, yes, in the dark, certainly, and it is cold, obviously, but what time is it? \"Nearly four, son.\" But I mean what time? - Ken Kesey, Sometimes a Great Notion "));
      return;

    // Codegen for 03:58 for 2 quotations:
    case 238:
      option = random(0, 2);
      Serial.print(F("2 options for 03:58. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("03:58 - The ancient house was deserted, the crumbling garage padlocked, and one was just able to discern - by peering through a crack in the bubbling sun on the window - the face of a clock on the opposite wall. The clock had stopped at two minutes to four early in the morning, or who could tell, it may have been earlier still, yesterday in the afternoon, a couple of hours after Kaiser had left Kamaria for Bartica. - Wilson Harris, Heartland"));
          return;
        case 1:
          Serial.println(F("03:58 - The clock atop the clubhouse reads 3:58. - Don Delillo, Underworld "));
          return;
      } // end switch (option)

    // Codegen for 03:59 for 1 quotations:
    case 239:
      Serial.println(F("Only one option for 03:59:"));
    Serial.println(F("03:59 - And the raw materials of reality without that glue of time are materials adrift and reality is as meaningless as the balsa parts of a model airplane scattered to the wind...I am in my old room, yes, in the dark, certainly, and it is cold, obviously, but what time is it? \"Nearly four, son.\" - Ken Kesey, Sometimes a Great Notion"));
      return;

    // Codegen for 04:00 for 7 quotations:
    case 240:
      option = random(0, 7);
      Serial.print(F("7 options for 04:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:00 - \"Nothing happened,\" he said wanly. \"I waited, and about four o'clock she came to the window and stood there for a minute and then turned out the light.\" - F. Scott Fitzgerald, The Great Gatsby "));
          return;
        case 1:
          Serial.println(F("04:00 - I looked at the clock and it was (yes, you guessed it) four am. I should have taken comfort from the fact that approximately quarter of the Greenwich Mean Time world had just jolted awake also and were lying, staring miserably into the darkness, worrying ...\" - Marian Keyes, Watermelon "));
          return;
        case 2:
          Serial.println(F("04:00 - Suddenly, he started to cry. Curled up on the sofa he sobbed loudly. Michel looked at his watch; it was just after 4am. On the screen a wild cat had a rabbit in its mouth. - Michel Houellebecq, Atomised "));
          return;
        case 3:
          Serial.println(F("04:00 - The Birds begun at Four o'clock— Their period for Dawn— - Emily Dickinson, The Birds begun at Four o'clock "));
          return;
        case 4:
          Serial.println(F("04:00 - The night before Albert Kessler arrived in Santa Teresa, at four in the morning, Sergio Gonzalez Rodriguez got a call from Azucena Esquivel Plata, reporter and PRI congresswoman. - Roberto Bolano, 2666"));
          return;
        case 5:
          Serial.println(F("04:00 - Waking at four to soundless dark, I stare. In time the curtain-edges will grow light. Till then I see what's really always there: Unresting death, a whole day nearer now, Making all thought impossible but how And where and when I shall myself die. - Philip Larkin, Aubade "));
          return;
        case 6:
          Serial.println(F("04:00 - When he noticed that the chefs from the grand hotels and restaurants - a picky, impatient bunch - tended to move around from seller to seller, buying apples here and broccoli there, he asked if he could have tea available for them. Tommy agreed, and the chefs, grateful for a hot drink at four in the morning, lingered and bought. - Jennifer Donnelly, The Tea Rose "));
          return;
      } // end switch (option)

    // Codegen for 04:01 for 1 quotations:
    case 241:
      Serial.println(F("Only one option for 04:01:"));
    Serial.println(F("04:01 - Suddenly, he started to cry. Curled up on the sofa he sobbed loudly. Michel looked at his watch; it was just after 4am. On the screen a wild cat had a rabbit in its mouth. - Michel Houellebecq, Atomised"));
      return;

    // Codegen for 04:02 for 1 quotations:
    case 242:
      Serial.println(F("Only one option for 04:02:"));
    Serial.println(F("04:02 - I walked up and down the row. No one gave me a second look. Finally I sat down next to a man. He paid no attention. My watch said 4:02. Maybe he was late. - Nicole Krauss, The History of Love"));
      return;

    // Codegen for 04:03 for 1 quotations:
    case 243:
      Serial.println(F("Only one option for 04:03:"));
    Serial.println(F("04:03 - It's 4:03 a.m. on a supremely cold January morning and I'm just getting home. I've been out dancing and I'm only half drunk but utterly exhausted. - Audrey Niffenegger, The Time Traveler's Wife"));
      return;

    // Codegen for 04:04 for 1 quotations:
    case 244:
      Serial.println(F("Only one option for 04:04:"));
    Serial.println(F("04:04 - Four minutes after four! It's still very early and to get from here to there won't take me more than 15 minutes, even walking slowly. She told me around five o'clock. Wouldn't it be better to wait on the corner? - Cirilo Villaverde, Angel Hill"));
      return;

    // Codegen for 04:05 for 1 quotations:
    case 245:
      Serial.println(F("Only one option for 04:05:"));
    Serial.println(F("04:05 - Leaves were being blown against my window. It was 4.05am. The moon had shifted in the sky, glaring through a clotted mass of clouds like a candled egg. - Joyce Carol Oates, We Were the Mulvaneys"));
      return;

    // Codegen for 04:06 for 1 quotations:
    case 246:
      Serial.println(F("Only one option for 04:06:"));
    Serial.println(F("04:06 - Dexter looked at Kate's note, then her face, then the clock. It was 4.06am, the night before they would go to the restaurant. - Chris Pavone, The Expats"));
      return;

    // Codegen for 04:07 for 1 quotations:
    case 247:
      Serial.println(F("Only one option for 04:07:"));
    Serial.println(F("04:07 - 4.07am. Why am I standing? My shoulders feel cold and I'm shivering. I become aware that I'm standing in the middle of the room. I immediately look at the bedroom door. Closed, with no signs of a break-in. Why did I get up? - Miha Mazzini, Guarding Hanna: A Novel"));
      return;

    // Codegen for 04:08 for 1 quotations:
    case 248:
      Serial.println(F("Only one option for 04:08:"));
    Serial.println(F("04:08 - It was at 4:08 a.m. beneath the cool metal of a jungle gym that all Andrew's dreams came true. He kissed his one true love and swore up and down that it would last forever to this exhausted companion throughout their long trek home. - Seth O'Connell, Dying in the Twilight of Summer"));
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
      return;

    // Codegen for 04:12 for 2 quotations:
    case 252:
      option = random(0, 2);
      Serial.print(F("2 options for 04:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:12 - Finally, she signalled with her light that she'd made it to the top. I signalled back, then shined the light downward to see how far the water had risen. I couldn't make out a thing. My watch read four-twelve in the morning. Not yet dawn. The morning papers still not delivered, trains not yet running, citizens of the surface world fast asleep, oblivious to all this. I pulled the rope taut with both hands, took a deep breath, then slowly began my climb. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
          return;
        case 1:
          Serial.println(F("04:12 - Karen felt the bed move beneath Harry's weight. Lying on her side she opened her eyes to see digital numbers in the dark, 4:12 in pale green. Behind her Harry continued to move, settling in. She watched the numbers change to 4:13. - Elmore Leonard, Get Shorty"));
          return;
      } // end switch (option)

    // Codegen for 04:13 for 1 quotations:
    case 253:
      Serial.println(F("Only one option for 04:13:"));
    Serial.println(F("04:13 - Karen felt the bed move beneath Harry's weight. Lying on her side she opened her eyes to see digital numbers in the dark, 4:12 in pale green. Behind her Harry continued to move, settling in. She watched the numbers change to 4:13. - Elmore Leonard, Get Shorty"));
      return;

    // Codegen for 04:14 for 1 quotations:
    case 254:
      Serial.println(F("Only one option for 04:14:"));
    Serial.println(F("04:14 - At 4:14 a.m., the two men returned to the Jeep. After the passenger replaced the cans in the back of the Jeep, the driver backed out of the driveway and headed east. The last images found on the film appeared to be flames or smoke. - David H Swendsen, A Real Nightmare"));
      return;

    // Codegen for 04:15 for 1 quotations:
    case 255:
      Serial.println(F("Only one option for 04:15:"));
    Serial.println(F("04:15 - Alice wants to warn her that a defect runs in the family, like flat feet or diabetes: they're all in danger of ending up alone by their own stubborn choice. The ugly kitchen clock says four-fifteen. - Barbara Kingsolver, Pigs in Heaven"));
      return;

    // Codegen for 04:16 for 2 quotations:
    case 256:
      option = random(0, 2);
      Serial.print(F("2 options for 04:16. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:16 - I stooped to pick up my watch from the floor. Four-sixteen. Another hour until dawn. I went to the telephone and dialled my own number. It'd been a long time since I'd called home, so I had to struggle to remember the number. I let it ring fifteen times; no answer. I hung up, dialled again, and let it ring another fifteen times. Nobody. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
          return;
        case 1:
          Serial.println(F("04:16 - They pulled into the visitor's carpark at four sixteen am. He knew it was four sixteen because the entrance to the maternity unit sported a digital clock beneath the signage. - Maree Anderson, Freaks in the City: Book Two of the Freaks Series"));
          return;
      } // end switch (option)

    // Codegen for 04:17 for 1 quotations:
    case 257:
      Serial.println(F("Only one option for 04:17:"));
    Serial.println(F("04:17 - He awoke at 4.17am in a sweat. He had been dreaming of Africa again, and then the dream had continued in the U.S. when he was a young man. But Inbata had been there, watching him. - Douglas Phinney, The Vile"));
      return;

    // Codegen for 04:18 for 1 quotations:
    case 258:
      Serial.println(F("Only one option for 04:18:"));
    Serial.println(F("04:18 - I grabbed the alarm clock, threw it on my lap, and slapped the red and black buttons with both hands. The ringing didn't stop. The telephone! The clock read four-eighteen. It was dark outside. Four-eighteen a.m. I got out of bed and picked up the receiver. \"Hello?\" - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
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
          return;
        case 1:
          Serial.println(F("04:23 - Her chip pulsed the time. 04:23:04. It had been a long day. - William Gibson, Neuromancer "));
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
          Serial.println(F("04:30 - At the end of a relationship, it is the one who is not in love who makes the tender speeches. I was overwhelmed by a sense of betrayal, betrayal because a union in which I had invested so much had been declared bankrupt without my feeling it to be so. Chloe had not given it a chance, I argued with myself, knowing the hopelessness of these inner courts announcing hollow verdicts at four thirty in the morning. - Alain de Botton, Essays on Love "));
          return;
        case 1:
          Serial.println(F("04:30 - Hester Thrale undulates in in a false fox jacket at 2330 as usual even though she has to be up at like 0430 for the breakfast shift at the Provident Nursing Home and sometimes eats breakfast with Gately, both their faces nodding perilously close to their Frosted Flakes. - David Foster Wallace, Infinite Jest"));
          return;
        case 2:
          Serial.println(F("04:30 - Tonight Clenette H. and the deeply whacked out Yolanda W. come back in from Footprints around 2315 in purple skirts and purple lipstick and ironed hair, tottering on heels and telling each other what a wicked time they just had. Hester Thrale undulates in in a false fox jacket at 2330 as usual even though she has to be up at like 0430 for the breakfast shift at the Provident Nursing Home and sometimes eats breakfast with Gately, both their faces nodding perilously close to their Frosted Flakes. - David Foster Wallace, Infinite Jest "));
          return;
      } // end switch (option)

    // Codegen for 04:31 for 1 quotations:
    case 271:
      Serial.println(F("Only one option for 04:31:"));
    Serial.println(F("04:31 - An earthquake hit Los Angeles at 4:31 this morning and the images began arriving via CNN right away. - Douglas Coupland, Microserfs"));
      return;

    // Codegen for 04:32 for 1 quotations:
    case 272:
      Serial.println(F("Only one option for 04:32:"));
    Serial.println(F("04:32 - On his first day of kindergarten, Peter Houghton woke up at 4:32 a.m. He padded into his parents' room and asked if it was time yet to take the school bus. - Jodi Picoult, Nineteen Minutes"));
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
      return;

    // Codegen for 04:36 for 1 quotations:
    case 276:
      Serial.println(F("Only one option for 04:36:"));
    Serial.println(F("04:36 - At 4:36 that morning, alone in my hotel room, it had been a much better scene. Spencer had blanched, confounded by the inescapable logic of my accusation. A few drops of perspiration had formed on his upper lip. A tiny vein had started to throb in his temple. - Ross Thomas, The Brass Go-Between"));
      return;

    // Codegen for 04:37 for 0 quotations:
    case 277:
      Serial.println(F("No quotes for 04:37"));
      return;

    // Codegen for 04:38 for 1 quotations:
    case 278:
      Serial.println(F("Only one option for 04:38:"));
    Serial.println(F("04:38 - At 4.38 a.m. as the sun is coming up over Gorley Woods, I hear a strange rustling in the grass beside me. I peer closely but can see nothing. - Jonathan Barrow, The Queue"));
      return;

    // Codegen for 04:39 for 0 quotations:
    case 279:
      Serial.println(F("No quotes for 04:39"));
      return;

    // Codegen for 04:40 for 1 quotations:
    case 280:
      Serial.println(F("Only one option for 04:40:"));
    Serial.println(F("04:40 - I settled into a daily routine. Wake up at 4.40am, shower, get on the train north by ten after five. - Tina Fey, Bossypants"));
      return;

    // Codegen for 04:41 for 1 quotations:
    case 281:
      Serial.println(F("Only one option for 04:41:"));
    Serial.println(F("04:41 - At 4:41 Crane's voice crackled through the walkie-talkie as if he'd read their thoughts of mutiny. “Everyone into the elevator. Now!” Only moments before the call he and C.J. had finished what they hoped would be a successful diversion. - Roland S. Jefferson, Damaged Goods: A Novel"));
      return;

    // Codegen for 04:42 for 0 quotations:
    case 282:
      Serial.println(F("No quotes for 04:42"));
      return;

    // Codegen for 04:43 for 1 quotations:
    case 283:
      Serial.println(F("Only one option for 04:43:"));
    Serial.println(F("04:43 - The time is four forty-three in the mornin an it's almost light oot there. - Suhayl Saadi, Pyschoraag"));
      return;

    // Codegen for 04:44 for 0 quotations:
    case 284:
      Serial.println(F("No quotes for 04:44"));
      return;

    // Codegen for 04:45 for 2 quotations:
    case 285:
      option = random(0, 2);
      Serial.print(F("2 options for 04:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("04:45 - He lies still in the darkness and listens. His wife's breathing at his side is so faint that he can scarcely hear it. One of these mornings she'll be lying dead beside me and I won't even notice, he thinks. Or maybe it'll be me. Daybreak will reveal that one of us has been left alone. He checks the clock on the table next to the bed. The hands glow and register 4:45 a.m. - Henning Mankell, Faceless Killers "));
          return;
        case 1:
          Serial.println(F("04:45 - His wife's breathing at his side is so faint that he can scarcely hear it. One of these mornings she'll be lying dead beside me and I won't even notice, he thinks. Or maybe it'll be me. Daybreak will reveal that one of us has been left alone. He checks the clock on the table next to the bed. The hands glow and register 4:45 a.m. - Henning Mankell, Faceless Killers"));
          return;
      } // end switch (option)

    // Codegen for 04:46 for 1 quotations:
    case 286:
      Serial.println(F("Only one option for 04:46:"));
    Serial.println(F("04:46 - The phone rang again at four-forty-six.\"Hello,\" I said. \"Hello,\" came a woman's voice. \"Sorry about the time before. There's a disturbance in the sound field. Sometimes the sound goes away.\" \"The sound goes away?\" \"Yes,\" she said. \"The sound field's slipping. Can you hear me?\" \"Loud and clear,\" I said. It was the granddaughter of that kooky old scientist who'd given me the unicorn skull. The girl in the pink suit. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
      return;

    // Codegen for 04:47 for 0 quotations:
    case 287:
      Serial.println(F("No quotes for 04:47"));
      return;

    // Codegen for 04:48 for 1 quotations:
    case 288:
      Serial.println(F("Only one option for 04:48:"));
    Serial.println(F("04:48 - At 4:48 the happy hour when clarity visits warm darkness which soaks my eyes I know no sin - Sarah Kane, 4:48 Psychosis"));
      return;

    // Codegen for 04:49 for 0 quotations:
    case 289:
      Serial.println(F("No quotes for 04:49"));
      return;

    // Codegen for 04:50 for 1 quotations:
    case 290:
      Serial.println(F("Only one option for 04:50:"));
    Serial.println(F("04:50 - Even the hands of his watch and the hands of all the thirteen clocks were frozen. They had all frozen at the same time, on a snowy night, seven years before, and after that it was always ten minutes to five in the castle. - James Thurber, The 13 Clocks"));
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
    Serial.println(F("04:54 - Six minutes to five. Six minutes to go. Suddenly I felt quite clearheaded. There was an unexpected light in the cell; the boundaries were drawn, the roles well defined. The time of doubt and questioning and uncertainty was over. - Elie Wiesel, Dawn: A Novel"));
      return;

    // Codegen for 04:55 for 1 quotations:
    case 295:
      Serial.println(F("Only one option for 04:55:"));
    Serial.println(F("04:55 - 4:55 - Mank holding phone. Turns to Caddell - 'Who is this?' Caddell: 'Jim.' (shrugs) 'I think he's our man in Cincinnati.' - Hunter S. Thompson, Fear and Loathing: On the Campaign Trail '72"));
      return;

    // Codegen for 04:56 for 0 quotations:
    case 296:
      Serial.println(F("No quotes for 04:56"));
      return;

    // Codegen for 04:57 for 1 quotations:
    case 297:
      Serial.println(F("Only one option for 04:57:"));
    Serial.println(F("04:57 - The second said the same thing a few minutes before five, and mentioned eternity... I'm sure I'll meet you in the other world. Four minutes later she left a last, fleeting message: My love. Fernando. It's Suzana. Then, it seemed, she had shot herself. - Peter Robb, A Death in Brazil: A Book of Omissions"));
      return;

    // Codegen for 04:58 for 1 quotations:
    case 298:
      Serial.println(F("Only one option for 04:58:"));
    Serial.println(F("04:58 - He wants to look death in the face. Two minutes to five. I took a handkerchief out of my pocket, but John Dawson ordered me to put it back. An Englishman dies with his eyes open. He wants to look death in the face. - Elie Wiesel, Dawn: A Novel"));
      return;

    // Codegen for 04:59 for 1 quotations:
    case 299:
      Serial.println(F("Only one option for 04:59:"));
    Serial.println(F("04:59 - The whole place smells like death no matter what the fuck you do. Gately gets to the shelter at 0459.9h and just shuts his head off as if his head had a control switch. - David Foster Wallace, Infinite Jest "));
      return;

    // Codegen for 05:00 for 8 quotations:
    case 300:
      option = random(0, 8);
      Serial.print(F("8 options for 05:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:00 - Five o'clock had hardly struck on the morning of the 19th of January, when Bessie brought a candle into my closet and found me already up and nearly dressed. - Charlotte Brontë, Jane Eyre "));
          return;
        case 1:
          Serial.println(F("05:00 - Five o'clock had hardly struck on the morning of the 19th of January, when Bessie brought a candle into my closet and found me already up and nearly dressed. I had risen half-an-hour before her entrance, and had washed my face, and put on my clothes by the light of a half-moon just setting, whose rays streamed through the narrow window near my crib. - Charlotte Brontë, Jane Eyre "));
          return;
        case 2:
          Serial.println(F("05:00 - It was in the township of Dunwich, in a large and hardly inhabited farmhouse set against a hillside 4 miles from the village and a mile and a half from any other dwelling, that Wilbur Whately was born at 5 a.m. on Sunday, 2 February, 1913. The date was recalled because it was Candlemas, which people in Dunwich curiously observe under another name... - H.P. Lovecraft, The Dunwich Horror "));
          return;
        case 3:
          Serial.println(F("05:00 - Just after five o'clock on this chill September morning, the fishmonger's cart, containing Kirsten and Emilia and such possessions as they have been able to assemble in the time allowed to them, is driven out of the gates of Rosenborg? - Rose Tremain, Music and Silence "));
          return;
        case 4:
          Serial.println(F("05:00 - The cold eye of the Duke was dazzled by the gleaming of a thousand jewels that sparkled on the table. His ears were filled with chiming as the clocks began to strike. \"One!\" said Hark. \"Two!\" cried Zorn of Zorna. \"Three!\" the Duke's voice almost whispered. 'Four!\" sighed Saralinda. \"Five!\" the Golux crowed, and pointed at the table. \"The task is done, the terms are met,\" he said. - James Thurber, The 13 Clocks "));
          return;
        case 5:
          Serial.println(F("05:00 - The day came slow, till five o'clock. Then sprang before the hills. Like hindered rubies, or the light. A sudden musket spills - Emily Dickinson, The Day Came Slow, Till Five O' Clock"));
          return;
        case 6:
          Serial.println(F("05:00 - There are worse things than having behaved foolishly in public. There are worse things than these miniature betrayals, committed or endured or suspected; there are worse things than not being able to sleep for thinking about them. It is 5 a.m. All the worse things come stalking in and stand icily about the bed looking worse and worse and worse. - Fleur Adcock, Things "));
          return;
        case 7:
          Serial.println(F("05:00 - What causes young people to \"come out,\" but the noble ambition of matrimony? What sends them trooping to watering-places? What keeps them dancing till five o'clock in the morning through a whole mortal season? - William Makepeace Thackeray, Vanity Fair "));
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
          Serial.println(F("05:01 - \"Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. Inside the safe,\" continued Poirot, with distaste, \"were the Crown Jewels of the Russian Royal Family.\" - Agatha Christie, The clocks "));
          return;
        case 1:
          Serial.println(F("05:01 - Just after five o'clock on this chill September morning, the fishmonger's cart, containing Kirsten and Emilia and such possessions as they have been able to assemble in the time allowed to them, is driven out of the gates of Rosenborg? - Rose Tremain, Music and Silence"));
          return;
      } // end switch (option)

    // Codegen for 05:02 for 1 quotations:
    case 302:
      Serial.println(F("Only one option for 05:02:"));
    Serial.println(F("05:02 - It was 5:02 a.m., December 14. In another fifty-eight minutes he would set sail for America. He did not want to leave his bride; he did not want to go. - Brenda Joyce, The Prize"));
      return;

    // Codegen for 05:03 for 1 quotations:
    case 303:
      Serial.println(F("Only one option for 05:03:"));
    Serial.println(F("05:03 - It was 5:03 a.m. It didn't matter. She wasn't going to get back to sleep. She threw off her covers and, swearing at herself, Caleb and Mr. Griffin, she headed into the shower. - Heather Graham, Unhallowed ground"));
      return;

    // Codegen for 05:04 for 3 quotations:
    case 304:
      option = random(0, 3);
      Serial.print(F("3 options for 05:04. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:04 - \"Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. Inside the safe,\" continued Poirot, with distaste, \"were the Crown Jewels of the Russian Royal Family.\" - Agatha Christie, The clocks "));
          return;
        case 1:
          Serial.println(F("05:04 - 5.04 a.m. on the substandard clock radio. Because why do people always say the day starts now? Really it starts in the middle of the night at a fraction of a second past midnight. - Ali Smith, The Accidental "));
          return;
        case 2:
          Serial.println(F("05:04 - Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. Inside the safe, continued Poirot, with distaste, \"were the Crown Jewels of the Russian Royal Family.\" - Agatha Christie, The Clocks"));
          return;
      } // end switch (option)

    // Codegen for 05:05 for 1 quotations:
    case 305:
      Serial.println(F("Only one option for 05:05:"));
    Serial.println(F("05:05 - The baby, a boy, is born at five past five in the morning. - Jhumpa Lahiri, The Namesake"));
      return;

    // Codegen for 05:06 for 1 quotations:
    case 306:
      Serial.println(F("Only one option for 05:06:"));
    Serial.println(F("05:06 - 5:06 a.m. I wake up strangely energized, my stomach growling. Upstairs, the overstocked fridge offers me its bounty of sympathy food. - Jonathon Tropper, This is Where I Leave you"));
      return;

    // Codegen for 05:07 for 1 quotations:
    case 307:
      Serial.println(F("Only one option for 05:07:"));
    Serial.println(F("05:07 - \"Oh yes. His clocks were set at one minute past five, four minutes past five and seven minutes past five. That was the combination number of a safe, 515457. The safe was concealed behind a reproduction of the Mona Lisa. Inside the safe,\" continued Poirot, with distaste, \"were the Crown Jewels of the Russian Royal Family.\" - Agatha Christie, The clocks "));
      return;

    // Codegen for 05:08 for 1 quotations:
    case 308:
      Serial.println(F("Only one option for 05:08:"));
    Serial.println(F("05:08 - Ambrose and I will marry at Fort McHenry at 5:08 EDST this coming Saturday, Rosh Hashanah! - John Barth, Letters"));
      return;

    // Codegen for 05:09 for 1 quotations:
    case 309:
      Serial.println(F("Only one option for 05:09:"));
    Serial.println(F("05:09 - The primal flush of triumph which had saturated the American's humor on this signal success, proved but fictive and transitory when inquiry of the station attendants educed the information that the two earliest trains to be obtained were the 5:09 to Dunkerque and the 5:37 for Ostend. - Louis Joseph Vance, The Black Bag"));
      return;

    // Codegen for 05:10 for 2 quotations:
    case 310:
      option = random(0, 2);
      Serial.print(F("2 options for 05:10. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:10 - \"Oh, my husband, I have done the deed which will relieve you of the wife whom you hate! I have taken the poison--all of it that was left in the paper packet, which was the first that I found. If this is not enough to kill me, I have more left in the bottle. Ten minutes past five. \"You have just gone, after giving me my composing draught. My courage failed me at the sight of you. I thought to myself, 'If he look at me kindly, I will confess what I have done, and let him save my life.' You never looked at me at all. You only looked at the medicine. I let you go without saying a word. - Wilkie Collins, The Law and the Lady "));
          return;
        case 1:
          Serial.println(F("05:10 - I settled into a daily routine. Wake up at 4:40am, shower, get on the train north by ten after five. - Tina Fey, Bossypants"));
          return;
      } // end switch (option)

    // Codegen for 05:11 for 1 quotations:
    case 311:
      Serial.println(F("Only one option for 05:11:"));
    Serial.println(F("05:11 - Today was Tuesday, the fifteenth of August; the sun had risen at eleven minutes past five this morning and would set at two minutes before seven this evening. - Donald E Westlake, The Hot Rock"));
      return;

    // Codegen for 05:12 for 1 quotations:
    case 312:
      Serial.println(F("Only one option for 05:12:"));
    Serial.println(F("05:12 - At twelve minutes and six seconds past five o'clock on the morning of April 18th, 1906, the San francisco peninsula began to shiver in the grip of an earthquake which, when its ultimate consequences are considered, was the most disastrous in the recorded history of the North American continent. - Herbert Asbury, Slummer's Paradise"));
      return;

    // Codegen for 05:13 for 1 quotations:
    case 313:
      Serial.println(F("Only one option for 05:13:"));
    Serial.println(F("05:13 - Lying on my side in bed, I stared at my alarm clock until it became a blemish, its red hue glowing like a welcome sign beckoning me into the depths of hell's crimson-colored cavities. 5:13 am. To describe this Monday as a blue Monday was an understatement. - Nakia D Johnson, Uptempo"));
      return;

    // Codegen for 05:14 for 1 quotations:
    case 314:
      Serial.println(F("Only one option for 05:14:"));
    Serial.println(F("05:14 - The time was 5.14am, a very strange time indeed for the sheriff to have seen what he claimed he saw as he made his early-morning rounds, first patrolling back and forth along the deserted, snowbound streets of Kingdom City before extending his vigilance northward, along County Road. - Thomas H Cook, Into the Web"));
      return;

    // Codegen for 05:15 for 2 quotations:
    case 315:
      option = random(0, 2);
      Serial.print(F("2 options for 05:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("05:15 - By the first week of May, Ralph was waking up to birdsong at 5:15 a.m. He tried earplugs for a few nights, although he doubted from the outset that they would work. It wasn’t the newly returned birds that were waking him up, nor the occasional delivery-truck backfire out on Harris Avenue. He had always been the sort of guy who could sleep in the middle of a brass marching bad, and he didn’t think that had changed. What had changed was inside his head. - Stephen King, Insomnia "));
          return;
        case 1:
          Serial.println(F("05:15 - Weird conversation with Brown, a tired & confused old man who's been jerked out of bed at 5:15. - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
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
          return;
        case 1:
          Serial.println(F("05:16 - She could go back to sleep. But typical and ironic, she is completely awake. It is completely light outside now; you can see for miles. Except there is nothing to see here; trees and fields and that kind of thing. 5:16 a.m on the substandard clock radio. She is really awake. - Ali Smith, The Accidental "));
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
      return;

    // Codegen for 05:24 for 1 quotations:
    case 324:
      Serial.println(F("Only one option for 05:24:"));
    Serial.println(F("05:24 - If I could count precisely to sixty between two passing orange minutes on her digital clock, starting at 523am. and ending exactly as it melted into 5:24, then when she woke she would love me and not say this had been a terrible mistake. - Arthur Phillips, The Tragedy of Arthur"));
      return;

    // Codegen for 05:25 for 1 quotations:
    case 325:
      Serial.println(F("Only one option for 05:25:"));
    Serial.println(F("05:25 - George's train home from New Street leaves at 5.25. On the return journey, there are rarely schoolboys. - Julian Barnes, Arthur and George"));
      return;

    // Codegen for 05:26 for 1 quotations:
    case 326:
      Serial.println(F("Only one option for 05:26:"));
    Serial.println(F("05:26 - I think this is actually bump number 1,970. And the boy keeps plugging away at the same speed. There isn’t a sound from them. Not a moan. Poor them. Poor me. I look at the clock. 05:26. - Hallgrímur Helgason, 101 Reykjavik"));
      return;

    // Codegen for 05:27 for 0 quotations:
    case 327:
      Serial.println(F("No quotes for 05:27"));
      return;

    // Codegen for 05:28 for 1 quotations:
    case 328:
      Serial.println(F("Only one option for 05:28:"));
    Serial.println(F("05:28 - I pulled into the Aoyama supermarket parking garage at five-twenty-eight. The sky to the east was getting light. I entered the store carrying my bag. Almost no one was in the place. A young clerk in a striped uniform sat reading a magazine; a woman of indeterminate age was buying a cartload of cans and instant food. I turned past the liquor display and went straight to the snack bar. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
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
          Serial.println(F("05:30 - Gideon has been most unlike Gideon. As Walter Eastman is preoccupied himself, he has not had time, or more to the point, inclination, to notice aberrant behaviour. For instance, it is half-past five in the summer morning. Young Chase's narrow bachelor bed has evidently been slept in, for it is rumpled in that barely disturbed way which can never be counterfeited. His jug's empty and there's grey water in the basin, cleanly boy. The window is open, admitting the salubrious sea-breeze. He doesn't smoke anyway. What an innocent room it is. - Timothy Mo, An Insular Possession "));
          return;
        case 1:
          Serial.println(F("05:30 - It was by this time half-past five, and the sun was on the point of rising; but I found the kitchen still dark and silent. … The stillness of early morning slumbered everywhere .. the carriage horses stamped from time to time in their closed stables: all else was still. - Charlotte Brontë, Jane Eyre "));
          return;
        case 2:
          Serial.println(F("05:30 - On the day they were going to kill him, Santiago Nasar got up at five-thirty in the morning to wait for the boat the bishop was coming on. - Gabriel García Márquez, Chronicle of a Death Foretold "));
          return;
      } // end switch (option)

    // Codegen for 05:31 for 1 quotations:
    case 331:
      Serial.println(F("Only one option for 05:31:"));
    Serial.println(F("05:31 - 5:31 - Mank on phone to lawyer: 'Jesus, I think we gotta go in there and get those ballots! Impound 'em! Every damn one!' - Hunter S Thompson, Fear and Loathing: On the Campaign Trail '72"));
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
    Serial.println(F("05:34 - I asked \"What time is sunrise?”' A second's silence while the crestfallen Bush absorbed his rebuke, and then another voice answered: ‘Five-thirty-four, sir.' - C.S. Forester, The Commodore"));
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
          return;
        case 1:
          Serial.println(F("05:35 - I squinted at the clock. 'It says twenty-five before six,' I said and rolled away from him. - Luke Rhinehart, the dice man "));
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
      return;

    // Codegen for 05:38 for 1 quotations:
    case 338:
      Serial.println(F("Only one option for 05:38:"));
    Serial.println(F("05:38 - Kovac,’ said Johnny sleepily. It was very rare for the quantum computer and not Sol to wake him up. ‘What’s going on? What time is it?’ ‘Good morning, Johnny,’ said the ship. ‘It is 5.38 a.m.’ ‘What?’ said Johnny. ‘It’s Saturday.’ ‘I told you he wouldn’t like it,’ said Sol, presumably to Kovac. ‘It’s hardly a matter of likes or dislikes,’ said the computer. ‘I have information I deem important enough to pass on at the earliest opportunity – whatever time it is.’ - Keith Mansfield, Johnny Mackintosh: Battle for Earth "));
      return;

    // Codegen for 05:39 for 0 quotations:
    case 339:
      Serial.println(F("No quotes for 05:39"));
      return;

    // Codegen for 05:40 for 1 quotations:
    case 340:
      Serial.println(F("Only one option for 05:40:"));
    Serial.println(F("05:40 - Twenty minutes to six. 'Rob's boys were already on the platform, barrows ready. The only thing that ever dared to be late around here was the train. Rob's boys were in fact Bill Bing, thirty, sucking a Woodbine, and Arthur, sixty, half dead. - Bruce Robinson, The Peculiar Memories of Thomas Penman"));
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
      return;

    // Codegen for 05:44 for 0 quotations:
    case 344:
      Serial.println(F("No quotes for 05:44"));
      return;

    // Codegen for 05:45 for 1 quotations:
    case 345:
      Serial.println(F("Only one option for 05:45:"));
    Serial.println(F("05:45 - At 5:45 a power-transformer on a pole beside the abandoned Tracker Brothers’ Truck Depot exploded in a flash of purple light, spraying twisted chunks of metal onto the shingled roof. - Stephen King, IT"));
      return;

    // Codegen for 05:46 for 1 quotations:
    case 346:
      Serial.println(F("Only one option for 05:46:"));
    Serial.println(F("05:46 - Herbert could feel nothing. He wrote a legal-sounding phrase to the effect that the sentence had been carried out at 5.46am, adding, 'without a snag'. The burial party had cursed him quietly as they'd hacked at the thick roots and tight soil. - William Brodrick, A Whispered Name"));
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
    Serial.println(F("05:55 - It was 5.55am and raining hard when I pedalled up to the bike stand just outside the forecourt of the station and dashed inside. I raced past the bookstall, where all the placards of the Yorkshire Post (a morning paper) read 'York Horror', but also 'Terrific February Gales at Coast'. - Andrew Martin, The Lost Luggage Porter"));
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
          Serial.println(F("06:00 - ‘What’s the time?’ I ask, and telling him so that he knows, ‘My mother likes “peace and quiet” to sleep late on Saturday mornings.’ ‘She does, does she? It’s six o’clock. I couldn’t sleep,’ he says wearily, like an afterthought, as if it’s what he expects. ‘Why are you up so early?’ ‘I woke up and needed my panda. I can’t find him.’ ‘Where do you think he can be?’ His face changes and he smiles again, bending down to look under the table and behind the curtain. But he isn’t clowning or teasing. He’s in earnest. - Patsy Hickman, The Saints "));
          return;
        case 1:
          Serial.println(F("06:00 - But every morning, even if there's been a nighttime session and he has only slept two hours, he gets up at six and reads his paper while he drinks a strong cup of coffee. In this way Papa constructs himself every day. - Muriel Barbery, The Elegance of the Hedgehog "));
          return;
        case 2:
          Serial.println(F("06:00 - I had risen half-an-hour before her entrance, and had washed my face, and put on my clothes by the light of a half-moon just setting, whose rays streamed through the narrow window near my crib. I was to leave Gateshead that day by a coach which passed the lodge gates at six a.m. - Charlotte Brontë, Jane Eyre"));
          return;
        case 3:
          Serial.println(F("06:00 - Lying awake in my attic room, i hear a clock strike six downstairs. It was fairly light and people were beginning to walk up and down the stairs...- i heard the clock strike eight downstairs before i rose and got dressed... I looked up - the clock tower of our saviour's showed ten. - Knut Hamsun, Hunger "));
          return;
        case 4:
          Serial.println(F("06:00 - On the 15th of September 1840, about six o'clock in the morning, the Ville-de-Montereau, ready to depart, pouring out great whirls of smoke by the quai Saint-Bernard. - Gustave Flaubert, L'Education sentimentale "));
          return;
        case 5:
          Serial.println(F("06:00 - Rise from bed ............... . 6.00 A.M. - F. Scott Fitzgerald, The Great Gatsby "));
          return;
        case 6:
          Serial.println(F("06:00 - The ball went on for a long time, until six in the morning; all were exhausted and wishing they had been in bed for at least three hours; but to leave early was like proclaiming the party a failure and offending the host and hostess who had taken such a lot of trouble, poor dears. - Giuseppe Tomasi di Lampedusa, The Leopard "));
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
      return;

    // Codegen for 06:06 for 1 quotations:
    case 366:
      Serial.println(F("Only one option for 06:06:"));
    Serial.println(F("06:06 - At 6:06, every toilet on Merit Street suddenly exploded in a geyser of shit and raw sewage as some unimaginable reversal took place in the pipes which fed the holding tanks of the new waste-treatment plant in the Barrens. - Stephen King, IT"));
      return;

    // Codegen for 06:07 for 0 quotations:
    case 367:
      Serial.println(F("No quotes for 06:07"));
      return;

    // Codegen for 06:08 for 1 quotations:
    case 368:
      Serial.println(F("Only one option for 06:08:"));
    Serial.println(F("06:08 - At six oh-eight a.m. two men wearing ragged trench coats approached the Casino. The shorter of the men burst into flames. - Ilona Andrews, Magic Bleeds"));
      return;

    // Codegen for 06:09 for 0 quotations:
    case 369:
      Serial.println(F("No quotes for 06:09"));
      return;

    // Codegen for 06:10 for 1 quotations:
    case 370:
      Serial.println(F("Only one option for 06:10:"));
    Serial.println(F("06:10 - The bus left the station at ten past six - and she sat proud, like an accustomed traveller, apart from her father, John Henry, and Berenice. But after a while a serious doubt came in her, which even the answers of the bus-driver could not quite satisfy. - Carson McCullers, The Member of the Wedding"));
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
          return;
        case 1:
          Serial.println(F("06:15 - Father expected his shaving-water to be ready at a quarter past six. Just seven minutes late, Dorothy took the can upstairs and knocked at her father's door. - George Orwell, A Clergyman's Daughter"));
          return;
        case 2:
          Serial.println(F("06:15 - It was 6.15 am. Just starting to get light. A small knot of older teenagers were leaning against a nearby wall. They looked as though they had been out all night.Two of the guys stared at us. Their eyes hard and threatening. - Sophie McKenzie, Girl Missing"));
          return;
        case 3:
          Serial.println(F("06:15 - It was 6.15 am. Just starting to get light. A small knot of older teenagers were leaning against a nearby wall. They looked as though they had been out all night.Two of the guys stared at us. Their eyes hard and threatening. - Sophie McKenzie, Girl Missing "));
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
      return;

    // Codegen for 06:18 for 0 quotations:
    case 378:
      Serial.println(F("No quotes for 06:18"));
      return;

    // Codegen for 06:19 for 1 quotations:
    case 379:
      Serial.println(F("Only one option for 06:19:"));
    Serial.println(F("06:19 - 6.19 am, 8th June 2004, the jet of your pupil set in the gold of your eye. - Carol Ann Duffy, Venus"));
      return;

    // Codegen for 06:20 for 1 quotations:
    case 380:
      Serial.println(F("Only one option for 06:20:"));
    Serial.println(F("06:20 - It was 6:20 a.m., and my parents and I were standing, stunned and haf-awake, in the parking lot of a Howard Johnson's in Iowa. - Austin Grossman, Soon I Will Be Invincible"));
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
          return;
        case 1:
          Serial.println(F("06:25 - Still, it's your consciousness that's created it. Not somethin' just anyone could do. Others could be wanderin' around forever in who-knows-what contradictory chaos of a world. You're different. You seem t'be the immortal type.\" \"When's the turnover into that world going to take place?\" asked the chubby girl. The Professor looked at his watch. I looked at my watch. Six-twenty-five. Well past daybreak. Morning papers delivered. \"According t'my estimates, in another twenty-nine hours and thirty-five minutes,\" said the Professor. \"Plus or minus forty-five minutes. I set it at twelve noon for easy reference. Noon tomorrow. - Haruki Murakami, Hard Boiled Wonderland and the End of the World "));
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
          return;
        case 1:
          Serial.println(F("06:27 - Early in the morning, late in the century, Cricklewood Broadway. At 0627 hours on January 1, 1975, Alfred Archibald Jones was dressed in corduroy and sat in a fume-filled Cavalier Musketeer Estate, facedown on the steering wheel, hoping the judgment would not be too heavy upon him. - Zadie Smith, White Teeth "));
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
          return;
        case 1:
          Serial.println(F("06:30 - Daniel and the FBI men listened to the sounds of his mother waking up his father. Daniel still held the door-knob. He was ready to close the door the second he was told to.\"What time is it?\" said his father in a drugged voice. \"Oh my God, it's six-thirty,\" his mother said. - E.L. Doctorow, The Book of Daniel"));
          return;
        case 2:
          Serial.println(F("06:30 - It was six-thirty. When the baby's cry came, they could not pick it out, and Sam, eagerly thrusting his face amongst their ears, said, \"Listen, there, there, that's the new baby.\" He was red with delight and success. - Christina Stead, The Man Who Loved Children "));
          return;
        case 3:
          Serial.println(F("06:30 - It was very cold sitting in the truck and after a while he got out and walked around and flailed at himself with his arms and stamped his boots. Then he got back in the truck. The bar clock said six-thirty...By eight-thirty he’d decided that it that was it would take to make the cab arrive then that’s what he would do and he started the engine. - Cormac McCarthy, Cities of the Plain"));
          return;
        case 4:
          Serial.println(F("06:30 - Nervously she jumped up and listened; the house itself was as still as ever; the footsteps had retreated. Through her wide-open window the brilliant rays of the morning sun were flooding her room with light. She looked up at the clock; it was half-past six—too early for any of the household to be already astir. - Baroness Orczy, The Scarlet Pimpernel "));
          return;
        case 5:
          Serial.println(F("06:30 - Six-thirty was clearly a preposterous time and he, the client, obviously hadn't meant it seriously. A civilised six-thirty for twelve noon was almost certainly what he had in mind, and if he wanted to cut up rough about it, Dirk would have no option but to start handing out some serious statistics. Nobody got murdered before lunch. But nobody. People weren't up to it. You needed a good lunch to get both the blood-sugar and blood-lust levels up. Dirk had the figures to prove it. - Douglas Adams, The Long Dark Tea-time of the Soul "));
          return;
        case 6:
          Serial.println(F("06:30 - Sometimes they were hooded carts, sometimes they were just open carts, with planks for seats, on which sat twelve cloaked and bonneted women, six a side, squeezed together, for the interminable journey. As late as 1914 I knew the carrier of Croydon-cum-Clopton, twelve miles from Cambridge; his cart started at 6.30 in the morning and got back at about ten at night. Though he was not old, he could neither read nor write; but he took commissions all along the road - a packet of needles for Mrs. This, and a new teapot for Mrs. That - and delivered them all correctly on the way back. - Gwen Raverat, Period Piece "));
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
      return;

    // Codegen for 06:33 for 1 quotations:
    case 393:
      Serial.println(F("Only one option for 06:33:"));
    Serial.println(F("06:33 - Woke 6.33 a.m. Last session with Anderson. He made it plain he's seen enough of me, and from now on I'm better alone. To sleep 8:00? (These count-downs terrify me.) He paused, then added: Goodbye, Eniwetok. - JG Ballard, The Voices of Time "));
      return;

    // Codegen for 06:34 for 0 quotations:
    case 394:
      Serial.println(F("No quotes for 06:34"));
      return;

    // Codegen for 06:35 for 1 quotations:
    case 395:
      Serial.println(F("Only one option for 06:35:"));
    Serial.println(F("06:35 - My watch lay on the dressing-table close by; glancing at it, I saw that the time was twenty-five minutes to seven. I had been told that the family breakfasted at nine, so I had nearly two-and-a-half hours of leisure. Of course, I would go out, and enjoy the freshness of the morning. - J.S. Fletcher, Ravensdene Court"));
      return;

    // Codegen for 06:36 for 1 quotations:
    case 396:
      Serial.println(F("Only one option for 06:36:"));
    Serial.println(F("06:36 - Kaldren pursues me like luminescent shadow. He has chalked up on the gateway '96,688,365,498,702'. Should confuse the mail man. Woke 9:05. To sleep 6:36. - JG Ballard, The Voices of Time "));
      return;

    // Codegen for 06:37 for 1 quotations:
    case 397:
      Serial.println(F("Only one option for 06:37:"));
    Serial.println(F("06:37 - The dashboard clock said 6.37am Town frowned, and checked his wristwatch, which blinked that it was 1.58pm. Great, he thought. I was either up on that tree for eight hours, or for minus a minute. - Neil Gaiman, American Gods"));
      return;

    // Codegen for 06:38 for 1 quotations:
    case 398:
      Serial.println(F("Only one option for 06:38:"));
    Serial.println(F("06:38 - The clock on the dashboard said it was 6.38am. He left the keys in the car, and walked toward the tree. - Neil Gaiman, American Gods"));
      return;

    // Codegen for 06:39 for 0 quotations:
    case 399:
      Serial.println(F("No quotes for 06:39"));
      return;

    // Codegen for 06:40 for 1 quotations:
    case 400:
      Serial.println(F("Only one option for 06:40:"));
    Serial.println(F("06:40 - At eleven o'clock the phone rang, and still the figure did not respond, any more than it has responded when the phone had rung at twenty-five to seven in the morning, and again at twenty to seven - Douglas Adams, The Long Dark Tea-Time of the Soul"));
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
      return;

    // Codegen for 06:44 for 1 quotations:
    case 404:
      Serial.println(F("Only one option for 06:44:"));
    Serial.println(F("06:44 - Simon is happy to travel scum class when he's on his own and even sometimes deliberately aims for the 6.25. But today the .25 is delayed to 6.44. - Mark Lawson, The Deaths"));
      return;

    // Codegen for 06:45 for 2 quotations:
    case 405:
      option = random(0, 2);
      Serial.print(F("2 options for 06:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("06:45 - As the clock pointed to a quarter to seven, the dog woke and shook himself. After waiting in vain for the footman, who was accustomed to let him out, the animal wandered restlessly from one closed door to another on the ground floor; and, returning to his mat in great perplexity, appealed to the sleeping family, with a long and melancholy howl.' - Wilkie Collins, No Name "));
          return;
        case 1:
          Serial.println(F("06:45 - He was still hurriedly thinking all this through, unable to decide to get out of the bed, when the clock struck quarter to seven. There was a cautious knock at the door near his head. \"Gregor\", somebody called - it was his mother - \"it's quarter to seven. Didn't you want to go somewhere?\" - Franz Kafka, Metamorphosis"));
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
          return;
        case 1:
          Serial.println(F("06:46 - Then I hung about in the hall waiting for the milkman. That was the worst part of the business, for I was fairly choking to get out of doors. Six-thirty passed, then six-forty, but still he did not come. The fool had chosen this day of all days to be late. At one minute after the quarter to seven I heard the rattle of the cans outside. I opened the front door, and there was my man, singling out my cans from a bunch he carried and whistling through his teeth. He jumped a bit at the sight of me. - John Buchan, The Thirty-Nine Steps "));
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
      return;

    // Codegen for 06:50 for 1 quotations:
    case 410:
      Serial.println(F("Only one option for 06:50:"));
    Serial.println(F("06:50 - Will, my fiancé, was coming from Boston on the six-fifty train - the dawn train, the only train that still stopped in the small Ohio city where I lived. - Mary Robison, Pretty Ice"));
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
      return;

    // Codegen for 07:00 for 4 quotations:
    case 420:
      option = random(0, 4);
      Serial.print(F("4 options for 07:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:00 - \"Seven o'clock, already\", he said to himself when the clock struck again, \"seven o'clock, and there's still a fog like this.\" - Franz Kafka, Metamorphosis "));
          return;
        case 1:
          Serial.println(F("07:00 - At seven o’clock in the morning, Rubashov was awakened by a bugle, but he did not get up. Soon he heard sounds in the corridor. He imagined that someone was to be tortured, and he dreaded hearing the first screams of pain. When the footsteps reached his own section, he saw through the eye hole that guards were serving breakfast. Rubashov did not receive any breakfast because he had reported himself ill. He began to pace up and down the cell, six and a half steps to the window, six and a half steps back. - Arthur Koestler, Darkness at Noon "));
          return;
        case 2:
          Serial.println(F("07:00 - I had left directions that I was to be called at seven; for it was plain that I must see Wemmick before seeing any one else, and equally plain that this was a case in which his Walworth sentiments, only, could be taken. It was a relief to get out of the room where the night had been so miserable, and I needed no second knocking at the door to startle me from my uneasy bed. - Charles Dickens, Great Expectations"));
          return;
        case 3:
          Serial.println(F("07:00 - She locked herself in, made no reply to my bonjour through the door; she was up at seven o'clock, the samovar was taken in to her from the kitchen. - Fyodor Dostoyevsky, Crime and Punishment "));
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
      return;

    // Codegen for 07:03 for 1 quotations:
    case 423:
      Serial.println(F("Only one option for 07:03:"));
    Serial.println(F("07:03 - 7:03am General Tanz woke up as though aroused by a mental alarm-clock. - Hans Hellmut Kirst, The Night of the Generals"));
      return;

    // Codegen for 07:04 for 1 quotations:
    case 424:
      Serial.println(F("Only one option for 07:04:"));
    Serial.println(F("07:04 - Sunday evening at almost the same hour (to be precise, at about 7:04 p.m.) she rings the front door bell at the home of Walter Moeding, Crime Commissioner, who is at that moment engaged, for professional rather than private reasons, in disguising himself as a sheikh. - Heinrich Böll, The Lost Honour of Katharina Blum"));
      return;

    // Codegen for 07:05 for 3 quotations:
    case 425:
      option = random(0, 3);
      Serial.print(F("3 options for 07:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:05 - He really couldn't believe that the old woman who'd phoned him last night would show up this morning, as she'd said she would. He decided he'd wait until five minutes after seven o'clock, and then he'd call in, take the day off, and make every effort in the book to locate someone reliable. - Raymond Carver, Where I'm Calling From "));
          return;
        case 1:
          Serial.println(F("07:05 - Outside my window the sky hung low and gray. It looked like snow, which added to my malaise. The clock read five after seven. I punched the remote control and watched the morning news as I lay in bed. - Haruki Murakami, Dance Dance Dance"));
          return;
        case 2:
          Serial.println(F("07:05 - Ryan missed the dawn. He boarded a TWA 747 that left Dulles on time, at 7:05 A.M. The sky was overcast, and when the aircraft burst through the cloud layer into sunlight, Ryan did something he had never done before. For the first time in his life, Jack Ryan fell asleep on an airplane. - Tom Clancy, The Hunt for Red October "));
          return;
      } // end switch (option)

    // Codegen for 07:06 for 2 quotations:
    case 426:
      option = random(0, 2);
      Serial.print(F("2 options for 07:06. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:06 - So far so good. There followed a little passage of time when we stood by the duty desk, drinking coffee and studiously not mentioning what we were all thinking and hoping: that Percy was late, that maybe Percy wasn't going to show up at all. Considering the hostile reviews he'd gotten on the way he'd handled the electrocution, that seemed at least possible. But Percy subscribed to that old axiom about how you should get right back on the horse that had thrown you, because here he came through the door at six minutes past seven, resplendent in his blue uniform with his sidearm on one hip and his hickory stick in its ridiculous custom-made holster on the other. - Stephen King, The Green Mile "));
          return;
        case 1:
          Serial.println(F("07:06 - Percy subscribed to that old axiom about how you should get right back on the horse that had thrown you, because here he came through the door at six minutes past seven, resplendent in his blue uniform with his sidearm on one hip and his hickory stick in its ridiculous custom-made holster on the other. - Stephen King, The Green Mile"));
          return;
      } // end switch (option)

    // Codegen for 07:07 for 0 quotations:
    case 427:
      Serial.println(F("No quotes for 07:07"));
      return;

    // Codegen for 07:08 for 1 quotations:
    case 428:
      Serial.println(F("Only one option for 07:08:"));
    Serial.println(F("07:08 - Reacher had no watch but he figured when he saw Gregory it must have been between eight and nine minutes after seven o'clock. - Lee Child, The Hard Way"));
      return;

    // Codegen for 07:09 for 2 quotations:
    case 429:
      option = random(0, 2);
      Serial.print(F("2 options for 07:09. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:09 - In the living room the voice-clock sang, Tick-tock, seven o'clock, time to get up, time to get up, seven o 'clock! as if it were afraid that nobody would. The morning house lay empty. The clock ticked on, repeating and repeating its sounds into the emptiness. Seven-nine, breakfast time, seven-nine! - Ray Bradbury, There Will Come Soft Rains "));
          return;
        case 1:
          Serial.println(F("07:09 - Seven-nine, breakfast time, seven-nine! - Ray Bradbury, There Will Come Soft Rains"));
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
          return;
        case 1:
          Serial.println(F("07:10 - There were many others waiting to execute the same operation, so she would have to move fast, elbow her way to the front so that she emerged first. The time was 7:10 in the morning. The manoeuvre would start at 7:12. She looked apprehensively at the giant clock at the railway station. - Mini Nair, The Fourth Passenger "));
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
      return;

    // Codegen for 07:13 for 1 quotations:
    case 433:
      Serial.println(F("Only one option for 07:13:"));
    Serial.println(F("07:13 - It was all the more surprising and indeed alarming a little later, said Austerlitz, when I looked out of the corridor window of my carriage just before the train left at seven-thirteen, to find it dawning upon me with perfect certainty that I had seen the pattern of glass and steel roof above the platforms before. - WG Sebald, Austerlitz"));
      return;

    // Codegen for 07:14 for 1 quotations:
    case 434:
      Serial.println(F("Only one option for 07:14:"));
    Serial.println(F("07:14 - At 7.14 Harry knew he was alive. He knew that because the pain could be felt in every nerve fibre. - Jo Nesbo, The Redeemer"));
      return;

    // Codegen for 07:15 for 4 quotations:
    case 435:
      option = random(0, 4);
      Serial.print(F("4 options for 07:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("07:15 - At 7:15 A.M., January 25th, we started flying northwestward under McTighe's pilotage with ten men, seven dogs, a sledge, a fuel and food supply, and other items including the plane's wireless outfit. - H.P. Lovecraft, At the Mountains of Madness "));
          return;
        case 1:
          Serial.println(F("07:15 - Gough again knocked on Mr and Mrs Kent's bedroom door. This time it was opened - Mary Kent had got out of bed and put on her dressing gown, having just checked her husband's watch: it was 7.15. A confused conversation ensued, in which each woman seemed to assume Saville was with the other. - Kate Summerscale, The Suspicions of Mr Whicher"));
          return;
        case 2:
          Serial.println(F("07:15 - Gough again knocked on Mr and Mrs Kent's bedroom door. This time it was opened - Mary Kent had got out of bed and put on her dressing gown, having just checked her husband's watch: it was 7.15. A confused conversation ensued, in which each woman seemed to assume Saville was with the other. - Kate Summerscale, The Suspicions of Mr Whicher "));
          return;
        case 3:
          Serial.println(F("07:15 - It was early in April in the year ’83 that I woke one morning to find Sherlock Holmes standing, fully dressed, by the side of my bed. He was a late riser, as a rule, and as the clock on the mantelpiece showed me that it was only a quarter-past seven, I blinked up at him in some surprise, and perhaps just a little resentment, for I was myself regular in my habits. - Arthur Conan Doyle, The Adventure of the Speckled Band "));
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
      return;

    // Codegen for 07:18 for 0 quotations:
    case 438:
      Serial.println(F("No quotes for 07:18"));
      return;

    // Codegen for 07:19 for 1 quotations:
    case 439:
      Serial.println(F("Only one option for 07:19:"));
    Serial.println(F("07:19 - I opened the sunroof and turned up the CD player volume to combat fatigue, and at 7.19am on Saturday, with the caffeine still running all around my brain, Jackson Browne and I pulled into Moree. - Graeme Simsion, The Rosie Project"));
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
          return;
        case 1:
          Serial.println(F("07:20 - He who had been a boy very credulous of life was no longer greatly interested in the possible and improbable adventures of each new day. He escaped from reality till the alarm-clock rang, at seven-twenty. - Sinclair Lewis, Babbitt"));
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
      return;

    // Codegen for 07:26 for 0 quotations:
    case 446:
      Serial.println(F("No quotes for 07:26"));
      return;

    // Codegen for 07:27 for 1 quotations:
    case 447:
      Serial.println(F("Only one option for 07:27:"));
    Serial.println(F("07:27 - His appointment with the doctor was for 8.45. It was 7.27. - Henning Mankell, The Return of the Dancing Master"));
      return;

    // Codegen for 07:28 for 0 quotations:
    case 448:
      Serial.println(F("No quotes for 07:28"));
      return;

    // Codegen for 07:29 for 1 quotations:
    case 449:
      Serial.println(F("Only one option for 07:29:"));
    Serial.println(F("07:29 - At 7.29 in the morning of 1 July, the cinematographer finds himself filming silence itself. - Elizabeth Speller, At Break of Day"));
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
          return;
        case 1:
          Serial.println(F("07:30 - Precisely at half past seven the station-master came into the traffic office. He weighed almost sixteen stone, but women always said that he was incredibly light on his feet when he danced. - Bohumil Hrabal, Closely Observed Trains "));
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
      return;

    // Codegen for 07:33 for 0 quotations:
    case 453:
      Serial.println(F("No quotes for 07:33"));
      return;

    // Codegen for 07:34 for 1 quotations:
    case 454:
      Serial.println(F("Only one option for 07:34:"));
    Serial.println(F("07:34 - 7:34. Monday morning, Blackeberg. The burglar alarm at the ICA grocery store on Arvid Morne's way is set off. - John Ajvide Lindqvist, Let The Right One In"));
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
          return;
        case 1:
          Serial.println(F("07:35 - I looked at my watch. Seven thirty-five. - Kathy Reichs, Bare Bones "));
          return;
      } // end switch (option)

    // Codegen for 07:36 for 1 quotations:
    case 456:
      Serial.println(F("Only one option for 07:36:"));
    Serial.println(F("07:36 - 7:36, sunrise. The hospital blinds were much better, darker than her own. - John Ajvide Lindqvist, Let The Right One In"));
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
      return;

    // Codegen for 07:40 for 1 quotations:
    case 460:
      Serial.println(F("Only one option for 07:40:"));
    Serial.println(F("07:40 - 7.40 a.m. Have breakfast. - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
      return;

    // Codegen for 07:41 for 0 quotations:
    case 461:
      Serial.println(F("No quotes for 07:41"));
      return;

    // Codegen for 07:42 for 1 quotations:
    case 462:
      Serial.println(F("Only one option for 07:42:"));
    Serial.println(F("07:42 - Seven forty-two am., Mr Gasparian: I curse you. I curse your arms so they will wither and die and fall off your body... - Ilona Andrews, Magic Bleeds"));
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
          Serial.println(F("07:44 - And there I was, complaining that all this was just inconvenient, Anna castigates herself. The Goth was obviously right. What does it matter, really, if I'm a bit late for work? She voices her thoughts: \"It's not exactly how you'd choose to go, is it? You'd rather die flying a kite with your grandchildren, or at a great party or something. Not on the seven forty-four.\" - Sarah Rayner, One moment, one morning "));
          return;
        case 1:
          Serial.println(F("07:44 - The Goth was obviously right. What does it matter, really, if I'm a bit late for work? She voices her thoughts: \"It's not exactly how you'd choose to go, is it? You'd rather die flying a kite with your grandchildren, or at a great party or something. Not on the seven forty-four.\" - Sarah Rayner, One Moment, One Morning"));
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
          return;
        case 1:
          Serial.println(F("07:45 - Mr Green left for work at a quarter to eight, as he did every morning. He walked down his front steps carrying his empty-looking leatherette briefcase with the noisy silver clasps, opened his car door, and ducked his head to climb into the driver's seat. - Suzanne Berne, A crime in the neighborhood "));
          return;
      } // end switch (option)

    // Codegen for 07:46 for 1 quotations:
    case 466:
      Serial.println(F("Only one option for 07:46:"));
    Serial.println(F("07:46 - He awoke with a start. The clock on his bedside table said 7.46 a.m. He cursed, jumped out of bed and dressed. He stuffed his toothbrush and toothpaste in his jacket pocket, and parked outside the station just before 8 a.m. In reception, Ebba beckoned to him. - Henning Mankell, The Dogs of Riga"));
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
      return;

    // Codegen for 07:51 for 1 quotations:
    case 471:
      Serial.println(F("Only one option for 07:51:"));
    Serial.println(F("07:51 - Vimes fished out the Gooseberry as a red-hot cabbage smacked into the road behind him. \"Good morning!\" he said brightly to the surprised imp. \"What is the time, please?\" \"Er...nine minutes to eight, Insert Name Here,\" said the imp. - Terry Pratchett, Thud! "));
      return;

    // Codegen for 07:52 for 0 quotations:
    case 472:
      Serial.println(F("No quotes for 07:52"));
      return;

    // Codegen for 07:53 for 1 quotations:
    case 473:
      Serial.println(F("Only one option for 07:53:"));
    Serial.println(F("07:53 - \"What time is it?\" \"Seven to eight. Won't be long now ...\" - Robert Goddard, Never go back"));
      return;

    // Codegen for 07:54 for 0 quotations:
    case 474:
      Serial.println(F("No quotes for 07:54"));
      return;

    // Codegen for 07:55 for 1 quotations:
    case 475:
      Serial.println(F("Only one option for 07:55:"));
    Serial.println(F("07:55 - at 7.55 this morning the circus ran away to join me. - Roger McGough, Tightrope, from Selected Poems 1967-1987"));
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
          return;
        case 1:
          Serial.println(F("07:56 - The Castle Gate - only the Castle Gate - and it was four minutes to eight. - Thomas Mann, Buddenbrooks"));
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
      return;

    // Codegen for 08:00 for 18 quotations:
    case 480:
      option = random(0, 18);
      Serial.print(F("18 options for 08:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:00 - \"I'm not crying,\" Maria said when Carter called from the desert at 8 a.m. \"I'm perfectly alright\". \"You don't sound perfectly alright - Joan Didion, Play it as is Lays "));
          return;
        case 1:
          Serial.println(F("08:00 - 8.00 a.m. Put school clothes on - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 2:
          Serial.println(F("08:00 - At 8 o'clock on Thursday morning Arthur didn't feel very good. - Douglas Adams, Hitch-Hikers Guide to the Galaxy "));
          return;
        case 3:
          Serial.println(F("08:00 - At eight o'clock on Thursday morning Arthur didn't feel very good. He woke up blearily, got up, wandered blearily round his room, opened a window, saw a bulldozer, found his slippers and stomped off to the bathroom to wash. - Douglas Adams, Hitch-hikers guide to the galaxy "));
          return;
        case 4:
          Serial.println(F("08:00 - At eight o’clock, a shaft of daylight came to wake us. The thousand facets of the lava on the rock face picked it up as it passed, scattering like a shower of sparks. - Jules Verne, Journey to the Centre of the Earth "));
          return;
        case 5:
          Serial.println(F("08:00 - But for now it was still eight o'clock, and as I walked along the avenue under that brilliant blue sky, I was happy, my friends, as happy as any man who had ever lived. - Paul Auster, Brooklyn Follies"));
          return;
        case 6:
          Serial.println(F("08:00 - By eight o'clock Stillman would come out, always in his long brown overcoat, carrying a large, old-fashioned carpet bag. For two weeks this routine did not vary. The old man would wander through the streets of the neighbourhood, advancing slowly, sometimes by the merest of increments, pausing, moving on again, pausing once more, as though each step had to be weighed and measured before it could take its place among the sum total of steps. - Paul Auster, City of Glass "));
          return;
        case 7:
          Serial.println(F("08:00 - Dressed in sweater, anorak and long johns, he lay in bed, hemmed in on three sides by chunky wooden beams, and ate all the salted snacks in the minibar, and then all the sugary snacks, and when he was woken by reception at eight the following morning to be told that everyone was waiting for him downstairs, the wrapper of a Mars bar was still folded in his fist. - Ian McEwan, Solar "));
          return;
        case 8:
          Serial.println(F("08:00 - I hear noise at the ward door, off up the hall out of my sight. That ward door starts opening at eight and opens and closes a thousand times a day, kashash, click. - Ken Kesey, One Flew Over the Cuckoo's Nest "));
          return;
        case 9:
          Serial.println(F("08:00 - It was dated from Rosings, at eight o'clock in the morning, and was as follows: - \"Be not alarmed, madam, on receiving this letter, by the apprehension of its containing any repetition of those sentiments or renewal of those offerings which were last night so disgusting to you. - Jane Austen, Pride and Prejudice "));
          return;
        case 10:
          Serial.println(F("08:00 - Mr. Pumblechook and I breakfasted at eight o'clock in the parlour behind the shop, while the shopman took his mug of tea and hunch of bread-and-butter on a sack of peas in the front premises. - Charles Dickens, Great Expectations "));
          return;
        case 11:
          Serial.println(F("08:00 - Mrs. Rochester! She did not exist: she would not be born till to-morrow, some time after eight o'clock a.m.; and I would wait to be assured she had come into the world alive, before I assigned to her all that property. - Charlotte Brontë, Jane Eyre "));
          return;
        case 12:
          Serial.println(F("08:00 - So here I'll watch the night and wait To see the morning shine, When he will hear the stroke of eight And not the stroke of nine; - A E Housman, A shropshire Lad "));
          return;
        case 13:
          Serial.println(F("08:00 - Someone must have been telling lies about Joseph K. for without having done anything wrong he was arrested one fine morning. His landlady's cook, who always brought him breakfast at eight o'clock, failed to appear on this occasion. - Franz Kafka, The Trial "));
          return;
        case 14:
          Serial.println(F("08:00 - The next morning I woke up at oh eight oh oh hours, my brothers, and as I still felt shagged and fagged and fashed and bashed and as my glazzies were stuck together real horrorshow with sleepglue, I thought I would not go to school . - Anthony Burgess, A Clockwork Orange "));
          return;
        case 15:
          Serial.println(F("08:00 - Three days after the quarrel, Prince Stepan Arkadyevitch Oblonsky--Stiva, as he was called in the fashionable world-- woke up at his usual hour, that is, at eight o'clock in the morning, not in his wife's bedroom, but on the leather-covered sofa in his study. - Leo Tolstoy, Anna Karenina "));
          return;
        case 16:
          Serial.println(F("08:00 - Through the curtained windows of the furnished apartment which Mrs. Horace Hignett had rented for her stay in New York rays of golden sunlight peeped in like the foremost spies of some advancing army. It was a fine summer morning. The hands of the Dutch clock in the hall pointed to thirteen minutes past nine; those of the ormolu clock in the sitting-room to eleven minutes past ten; those of the carriage clock on the bookshelf to fourteen minutes to six. In other words, it was exactly eight; and Mrs. Hignett acknowledged the fact by moving her head on the pillow, opening her eyes, and sitting up in bed. She always woke at eight precisely. - P.G. Wodehouse, Three Men and a Maid "));
          return;
        case 17:
          Serial.println(F("08:00 - When he opened the windows in the morning, the sky was as overcast as it had been, but the air seemed fresher, and regret set in. Had giving notice not been impetuous and wrongheaded, the result of an inconsequential indisposition? If he had held off a bit, if he had not been so quick to lose heart, if he had instead tried to adjust to the air or wait for the weather to improve, he would now have been free of stress and strain and looking forward to a morning on the beach like the one the day before. Too late. He must go on wanting what he had wanted yesterday. He dressed and rode down to the ground floor at eight for breakfast. - Thomas Mann, Death in Venice "));
          return;
      } // end switch (option)

    // Codegen for 08:01 for 1 quotations:
    case 481:
      Serial.println(F("Only one option for 08:01:"));
    Serial.println(F("08:01 - Eight-one, tick-tock, eight-one o'clock, off to school, off to work, run, run, eight-one! - Ray Bradbury, There Will Come Soft Rains"));
      return;

    // Codegen for 08:02 for 1 quotations:
    case 482:
      Serial.println(F("Only one option for 08:02:"));
    Serial.println(F("08:02 - ... bingeley ... Eight oh two eh em, Death of Corporal Littlebottombottom ... Eight oh three eh em ... Death of Sergeant Detritus ... Eight oh threethreethree eh em and seven seconds seconds ... Death of Constable Visit ... Eight oh three eh em and nineninenine seconds ... Death of death of death of ... - Terry Pratchett, Jingo"));
      return;

    // Codegen for 08:03 for 2 quotations:
    case 483:
      option = random(0, 2);
      Serial.print(F("2 options for 08:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:03 - ... bingeley ... Eight oh two eh em, Death of Corporal Littlebottombottom ... Eight oh three eh em ... Death of Sergeant Detritus ... Eight oh threethreethree eh em and seven seconds seconds ... Death of Constable Visit ... Eight oh three eh em and nineninenine seconds ... Death of death of death of ... - Terry Pratchett, Jingo"));
          return;
        case 1:
          Serial.println(F("08:03 - He taught me that if I had to meet someone for an appointment, I must refuse to follow the 'stupid human habit' of arbitrarily choosing a time based on fifteen-minute intervals. 'Never meet people at 7:45 or 6:30, Jasper, but pick times like 7:12 and 8:03!' - Steve Toltz, A Fraction of the Whole"));
          return;
      } // end switch (option)

    // Codegen for 08:04 for 1 quotations:
    case 484:
      Serial.println(F("Only one option for 08:04:"));
    Serial.println(F("08:04 - ... every clerk had his particular schedule of hours, which coincided with a single pair of tram runs coming from the city: A had to come in at 8, B at 8:04, C at 8:08 and so on, and the same for quitting times, in such a manner that never would two colleagues have the opportunity to travel in the same tramcar. - Primo Levi, The Periodic Table"));
      return;

    // Codegen for 08:05 for 1 quotations:
    case 485:
      Serial.println(F("Only one option for 08:05:"));
    Serial.println(F("08:05 - 8.05 a.m. Pack school bag - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
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
    Serial.println(F("08:08 - ... every clerk had his particular schedule of hours, which coincided with a single pair of tram runs coming from the city: A had to come in at 8, B at 8:04, C at 8:08 and so on, and the same for quitting times, in such a manner that never would two colleagues have the opportunity to travel in the same tramcar. - Primo Levi, The Periodic Table"));
      return;

    // Codegen for 08:09 for 1 quotations:
    case 489:
      Serial.println(F("Only one option for 08:09:"));
    Serial.println(F("08:09 - He followed the squeals down a hallway. A wall clock read 8:09 - 10:09 Dallas time. - James Ellroy, American Tabloid"));
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
          return;
        case 1:
          Serial.println(F("08:10 - Amory rushed into the house and the rest followed with a limp mass that they laid on the sofa in the shoddy little front parlor. Sloane, with his shoulder punctured, was on another lounge. He was half delirious, and kept calling something about a chemistry lecture at 8:10. - F. Scott Fitzgerald, This Side of Paradise"));
          return;
        case 2:
          Serial.println(F("08:10 - Cell count down to 400,000. Woke 8:10. To sleep 7:15. (Appear to have lost my watch without realising it, had to drive into town to buy another.) - JG Ballard, The Voices of Time "));
          return;
      } // end switch (option)

    // Codegen for 08:11 for 1 quotations:
    case 491:
      Serial.println(F("Only one option for 08:11:"));
    Serial.println(F("08:11 - 'Care for a turn on the engine?' he called to the doxies, and pointed up at the footplate. They laughed but voted not to, climbing up with their bathtub into one of the rattlers instead. They both had very fetching hats, with one flower apiece, but the prettiness of their faces made you think it was more. For some reason they both wore white rosettes pinned to their dresses. I looked again at the clock: eight-eleven. - Andrew Martin, The Blackpool Highflyer "));
      return;

    // Codegen for 08:12 for 1 quotations:
    case 492:
      Serial.println(F("Only one option for 08:12:"));
    Serial.println(F("08:12 - At 8:12 a.m., just before the moment of pff, all the business of the cellars was being transacted - garbage transferred from small cans into large ones; early wide-awake grandmas, rocky with insomnia, dumped wash into the big tubs; boys in swimming trunks rolled baby carriages out into the cool morning. - Grace Paley, In Time Which Made A Monkey Of Us All"));
      return;

    // Codegen for 08:13 for 1 quotations:
    case 493:
      Serial.println(F("Only one option for 08:13:"));
    Serial.println(F("08:13 - At 8:13 a.m. the alarm clock in the laboratory gave the ringing word. Eddie touched a button in the substructure of an ordinary glass coffeepot, from whose spout two tubes proceeded into the wall. - Grace Paley, In Time Which Made A Monkey Of Us All"));
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
          Serial.println(F("08:15 - It was in the winter when this happened, very near the shortest day, and a week of fog into the bargain, so the fact that it was still very dark when George woke in the morning was no guide to him as to the time. He reached up, and hauled down his watch. It was a quarter-past eight. - Jerome K Jerome, Three Men in a Boat "));
          return;
        case 1:
          Serial.println(F("08:15 - You scrutinized your wrist: \"It's eight fifteen. (And here time forked.) I'll turn it on.\" The screen In its blank broth evolved a lifelike blur, And music welled. - Vladimir Nabokov, Pale Fire "));
          return;
      } // end switch (option)

    // Codegen for 08:16 for 1 quotations:
    case 496:
      Serial.println(F("Only one option for 08:16:"));
    Serial.println(F("08:16 - I walk through the fruit trees toward a huge, square, brown patch of earth with vegetation growing in serried rows. These must be the vegetables. I prod one of them cautiously with my foot. It could be a cabbage or a lettuce. Or the leaves of something growing underground, maybe. To be honest, it could be an alien. I have no idea. I sit down on a mossy wooden bench and look at a nearby bush covered in white flowers. Mm. Pretty. Now what? What do people do in their gardens? I feel I should have something to read. Or someone to call. My fingers are itching to move. I look at my watch. Still only eight sixteen. Oh God. - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 08:17 for 2 quotations:
    case 497:
      option = random(0, 2);
      Serial.print(F("2 options for 08:17. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("08:17 - Breakfast over, my uncle drew from his pocket a small notebook, intended for scientific observations. He consulted his instruments, and recorded: “Monday, July 1. “Chronometer, 8.17 a.m.; barometer, 297 in.; thermometer, 6° (43° F.). Direction, E.S.E.” This last observation applied to the dark gallery, and was indicated by the compass. - Jules Verne, A Journey to the Centre of the Earth"));
          return;
        case 1:
          Serial.println(F("08:17 - Come on, I can't give up yet. I'll just sit here for a bit and enjoy the peace. I lean back and watch a little speckled bird pecking the ground nearby for a while. Then I look at my watch again: eight seventeen. I can't do this. - Sophie Kinsella, The Undomestic Goddess "));
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
      return;

    // Codegen for 08:20 for 1 quotations:
    case 500:
      Serial.println(F("Only one option for 08:20:"));
    Serial.println(F("08:20 - When the typewriters happen to pause (8:20 and other mythical hours), and there are no flights of American bombers in the sky, and the motor traffic's not too heavy in Oxford Street, you can hear winter birds cheeping outside, busy at the feeders the girls have put up. - Thomas Pynchon, Gravity's Rainbow"));
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
          Serial.println(F("08:23 - And then Wedderburn looked at his watch. \"Twenty-three minutes past eight. I am going up by the quarter to twelve train, so that there is plenty of time. I think I shall wear my alpaca jacket - it is quite warm enough - and my grey felt hat and brown shoes. I suppose” - HG Wells, The Flowering of The Strange Orchid"));
          return;
        case 1:
          Serial.println(F("08:23 - At 8:23 there seemed every chance of a lasting alliance starting between Florin and Guilder. At 8:24 the two nations were very close to war. - William Goldman, The Princess Bride"));
          return;
      } // end switch (option)

    // Codegen for 08:24 for 1 quotations:
    case 504:
      Serial.println(F("Only one option for 08:24:"));
    Serial.println(F("08:24 - At 8:23 there seemed every chance of a lasting alliance starting between Florin and Guilder. At 8:24 the two nations were very close to war. - William Goldman, The Princess Bride"));
      return;

    // Codegen for 08:25 for 0 quotations:
    case 505:
      Serial.println(F("No quotes for 08:25"));
      return;

    // Codegen for 08:26 for 1 quotations:
    case 506:
      Serial.println(F("Only one option for 08:26:"));
    Serial.println(F("08:26 - It exploded much later than intended, probably a good twelve hours later, at twenty-six minutes past eight on Monday morning. Several defunct wristwatches, the property of victims, confirmed the time. As with its predecessors over the last few months, there had been no warning. - John Le Carre, The Little Drummer Girl"));
      return;

    // Codegen for 08:27 for 1 quotations:
    case 507:
      Serial.println(F("Only one option for 08:27:"));
    Serial.println(F("08:27 - The lecture was to be given tomorrow, and it was now almost eight-thirty. - John Kennedy Toole, A Confederacy of Dunces"));
      return;

    // Codegen for 08:28 for 1 quotations:
    case 508:
      Serial.println(F("Only one option for 08:28:"));
    Serial.println(F("08:28 - And at 8.28 on the following morning, with a novel chilliness about the upper lip, and a vast excess of strength and spirits, I was sitting in a third-class carriage, bound for Germany, and dressed as a young sea-man, in a pea-jacket, peaked cap, and comforter. - Erskine Childers, The Riddle of the Sands"));
      return;

    // Codegen for 08:29 for 1 quotations:
    case 509:
      Serial.println(F("Only one option for 08:29:"));
    Serial.println(F("08:29 - At 8.29 I punched the front doorbell in Elgin Crescent. It was opened by a small oriental woman in a white apron. She showed me into a large, empty sitting room with an open fire and a couple of huge oil paintings. - Sebastian Faulks, Engleby"));
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
          return;
        case 1:
          Serial.println(F("08:30 - It is around 8:30. Sunshine comes through the windows at right. As the curtain rises, the family has just finished breakfast. - Eugene O'Neill, Long Day's Journey Into Night "));
          return;
        case 2:
          Serial.println(F("08:30 - On July 25th, 8:30 a.m. the bitch Novaya dies whelping. At 10 o'clock she is lowered into her cool grave, at 7:30 that same evening we see our first floes and greet them wishing they were the last. - Christoph Ransmayr, The Terrors of Ice and Darkness "));
          return;
        case 3:
          Serial.println(F("08:30 - The lecture was to be given tomorrow, and it was now almost eight-thirty. - John Kennedy Toole, A Confederacy of Dunces"));
          return;
        case 4:
          Serial.println(F("08:30 - When he woke, at eight-thirty, he was alone in the bedroom. He put on his dressing gown and put in his hearing aid and went into the living room. - David Lodge, Deaf Sentence "));
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
          return;
        case 1:
          Serial.println(F("08:32 - 8.32 a.m. Catch bus to school - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
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
          Serial.println(F("08:35 - It was thirty-five minutes past eight by the big clock of the central building when Mathieu crossed the yard towards the office which he occupied as chief designer. For eight years he had been employed at the works where, after a brilliant and special course of study, he had made his beginning as assistant draughtsman when but nineteen years old, receiving at that time a salary of one hundred francs a month. - Emile Zola, Fruitfulness "));
          return;
        case 1:
          Serial.println(F("08:35 - Old gummy granny (thrusts a dagger towards Stephen's hand) Remove him, acushla. At 8.35 a.m. you will be in heaven and Ireland will be free (she prays) O good God take him! - James Joyce, Ulysses"));
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
      return;

    // Codegen for 08:38 for 0 quotations:
    case 518:
      Serial.println(F("No quotes for 08:38"));
      return;

    // Codegen for 08:39 for 1 quotations:
    case 519:
      Serial.println(F("Only one option for 08:39:"));
    Serial.println(F("08:39 - Doug McGuire noticed the early hour, 8:39 A.M. on the one wall clock that gave Daylight Savings Time for the East Coast. - Winn Schwartau, Terminal Compromise"));
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
          return;
        case 1:
          Serial.println(F("08:40 - It was when I stood before her, avoiding her eyes, that I took note of the surrounding objects in detail, and saw that her watch had stopped at twenty minutes to nine, and that a clock in the room had stopped at twenty minutes to nine. - Charles Dickens, Great Expectations"));
          return;
      } // end switch (option)

    // Codegen for 08:41 for 1 quotations:
    case 521:
      Serial.println(F("Only one option for 08:41:"));
    Serial.println(F("08:41 - By forty-one minutes past eight we are five hundred yards from the water’s edge, and between our road and the foot of the mountain we descry the piled-up remains of a ruined tower. - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
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
          Serial.println(F("08:43 - \"You understand this tape recorder is on?\" \"Uh huh\" \"And it's Wednesday, May 15, at eight forty-three in the mornin'.\" \"If you say so\" - John Grisham, A Time to Kill "));
          return;
        case 1:
          Serial.println(F("08:43 - 8.43 a.m. Go past tropical fish shop - Mark Haddon, The Curious Incident Of The Dog In The Night-Time"));
          return;
      } // end switch (option)

    // Codegen for 08:44 for 1 quotations:
    case 524:
      Serial.println(F("Only one option for 08:44:"));
    Serial.println(F("08:44 - Several soldiers - some with their uniforms unbuttoned - were looking over a motorcycle, arguing about it. The sergeant looked at his watch; it was eight forty-four. They had to wait until nine. Hladik, feeling more insignificant than ill-fortuned, sat down on a pile of firewood. - Jorge Luis Borges, The Secret Miracle"));
      return;

    // Codegen for 08:45 for 1 quotations:
    case 525:
      Serial.println(F("Only one option for 08:45:"));
    Serial.println(F("08:45 - He paid the waitress and left the café. It was 8:45. The sun pressed against the inside of a thin layer of cloud. He unbuttoned his jacket as he hurried down Queensway. His mind, unleashed, sprang forwards. - Rupert Thomson, Dreams of leaving"));
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
          Serial.println(F("08:47 - \"Just on my way to the cottage. It's, er, ..8.47. Bit misty on the roads.....\" - Douglas Adams, Dirk Gently's Holistic Detective Agency "));
          return;
        case 1:
          Serial.println(F("08:47 - 8.47. Bit misty on the roads - Douglas Adams, Dirk Gently's Holistic Detective Agency"));
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
          return;
        case 1:
          Serial.println(F("08:50 - It was 8:50 in the morning and Bernie and I were alone on an Astoria side street, not far from a sandwich shop that sold a sopressatta sub called \"The Bypass\". I used to eat that sandwich weekly, wash it down with espresso soda, smoke a cigarette, go for a jog. Now I was too near the joke to order the sandwich, and my son's preschool in the throes of doctrinal schism. - Sam Lipsyte, The Ask "));
          return;
        case 2:
          Serial.println(F("08:50 - Punctually at ten minutes to nine, a quarter hour after early mass, the boy stood in his Sunday uniform outside his father's door. - Joseph Roth, The Radetzky March"));
          return;
      } // end switch (option)

    // Codegen for 08:51 for 1 quotations:
    case 531:
      Serial.println(F("Only one option for 08:51:"));
    Serial.println(F("08:51 - 8.51 a.m. Arrive at school - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
      return;

    // Codegen for 08:52 for 1 quotations:
    case 532:
      Serial.println(F("Only one option for 08:52:"));
    Serial.println(F("08:52 - Message one. Tuesday, 8.52am. Is anybody there? Hello? - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
      return;

    // Codegen for 08:53 for 0 quotations:
    case 533:
      Serial.println(F("No quotes for 08:53"));
      return;

    // Codegen for 08:54 for 1 quotations:
    case 534:
      Serial.println(F("Only one option for 08:54:"));
    Serial.println(F("08:54 - It was Mrs. Poppets that woke me up next morning. She said: “Do you know that it’s nearly nine o’clock, sir?” “Nine o’ what?” I cried, starting up. “Nine o’clock,” she replied, through the keyhole. “I thought you was a- oversleeping yourselves.” - Jerome K Jerome, Three Men in a Boat "));
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
          return;
        case 1:
          Serial.println(F("08:55 - George pulled out his watch and looked at it: it was five minutes to nine! - Jerome K Jerome, Three Men in a Boat "));
          return;
      } // end switch (option)

    // Codegen for 08:56 for 1 quotations:
    case 536:
      Serial.println(F("Only one option for 08:56:"));
    Serial.println(F("08:56 - It was nearly nine o'clock and the sun was fiercer every minute.' - George Orwell, Burmese Days"));
      return;

    // Codegen for 08:57 for 1 quotations:
    case 537:
      Serial.println(F("Only one option for 08:57:"));
    Serial.println(F("08:57 - You'll have to hurry. Many a long year before that, in one of the bygone centuries, a worthy citizen of Wrychester, Martin by name, had left a sum of money to the Dean and Chapter of the Cathedral on condition that as long as ever the Cathedral stood, they should cause to be rung a bell from its smaller bell-tower for three minutes before nine o'clock every morning, all the year round. - JS Fletcher, The Paradise Mystery"));
      return;

    // Codegen for 08:58 for 1 quotations:
    case 538:
      Serial.println(F("Only one option for 08:58:"));
    Serial.println(F("08:58 - It was two minutes of nine now - two minutes before the bombs were set to explode - and three or four people were gathered in front of the bank waiting for it to open. - Jim Thompson, The Getaway"));
      return;

    // Codegen for 08:59 for 1 quotations:
    case 539:
      Serial.println(F("Only one option for 08:59:"));
    Serial.println(F("08:59 - She had been lying in bed reading about Sophie and Alberto's conversation on Marx and had fallen asleep. The reading lamp by the bed had been on all night. The green glowing digits on her desk alarm clock showed 8:59. - Jostein Gaarder, Sophie's World"));
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
          return;
        case 1:
          Serial.println(F("09:00 - 'Look. Ignatius. I'm beat. I've been on the road since nine o'clock yesterday morning.' - John Kennedy Toole, A Confederacy of Dunces "));
          return;
        case 2:
          Serial.println(F("09:00 - On the third morning after their arrival, just as all the clocks in the city were striking nine individually, and somewhere about nine hundred and ninety-nine collectively, Sam was taking the air in George Yard, when a queer sort of fresh painted vehicle drove up, out of which there jumped with great agility, throwing the reins to a stout man who sat beside him, a queer sort of gentleman, who seemed made for the vehicle, and the vehicle for him. - Charles Dickens, The Pickwick Papers "));
          return;
        case 3:
          Serial.println(F("09:00 - 14 June 9:00 am woke up - Steve Toltz, A Fraction of the Whole"));
          return;
        case 4:
          Serial.println(F("09:00 - 9.00 a.m. School assembly - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 5:
          Serial.println(F("09:00 - A fly buzzed, the wall clock began to strike. After the nine golden strokes faded, the district captain began. \"How is Herr Colonel Marek?\" \"Thank you, Papá, he's fine.\" \"Still weak in geometry?\" \"Thank you, Papá, a little better.\" \"Read any books?\" \"Yessir, Papá.\" - Joseph Roth, The Radetzky March "));
          return;
        case 6:
          Serial.println(F("09:00 - As nine o' clock was left behind, the preposterousness of the delay overwhelmed me, and I went in a kind of temper to the owner and said that I thought he should sign on another cook and weigh spars and be off. - John Hershey, A Single Pebble "));
          return;
        case 7:
          Serial.println(F("09:00 - At nine o'clock, one morning late in July, Gatsby's gorgeous car lurched up the rocky drive to my door and gave out a burst of melody from its three-noted horn - F. Scott Fitzgerald, The Great Gatsby "));
          return;
        case 8:
          Serial.println(F("09:00 - He was at breakfast at nine, and for the twentieth time consulted his \"Bradshaw,\" to see at what earliest hour Dr. Grantly could arrive from Barchester. - Anthony Trollope, The Warden "));
          return;
        case 9:
          Serial.println(F("09:00 - He won't stand beating. Now, if you only kept on good terms with him, he'd do almost anything you liked with the clock. For instance, suppose it were nine o'clock in the morning, just time to begin lessons: you'd only have to whisper a hint to Time, and round goes the clock in a twinkling! Half-past one, time for dinner! - Lewis Carroll, Alice's Adventures in Wonderland "));
          return;
        case 10:
          Serial.println(F("09:00 - It was around nine o'clock that I crossed the border into Cornwall. This was at least three hours before the rain began and the clouds were still all of a brilliant white. In fact, many of the sights that greeted me this morning were among the most charming I have so far encountered. It was unfortunate, then, that I could not for much of the time give to them the attention they warranted; for one may as well declare it, one was in a condition of some preoccupation with the thought that - barring some unseen complication - one would be meeting Miss Kenton again before the day's end. - Kazuo Ishiguro, The Remains of the Day "));
          return;
        case 11:
          Serial.println(F("09:00 - Opening his window, Aschenbach thought he could smell the foul stench of the lagoon. A sudden despondency came over him. He considered leaving then and there. Once, years before, after weeks of a beautiful spring, he had been visited by this sort of weather and it so affected his health he had been obliged to flee. Was not the same listless fever setting in? The pressure in the temples, the heavy eyelids? Changing hotels again would be a nuisance, but if the wind failed to shift he could not possibly remain here. To be on the safe side, he did not unpack everything. At nine he went to breakfast in the specially designated buffet between the lobby and the dining room. - Thomas Mann, Death in Venice "));
          return;
        case 12:
          Serial.println(F("09:00 - Sometimes what I wouldn't give to have us sitting in a bar again at 9.00am telling lies to one another, far from God. - Denis Johnson, Jesus' Son "));
          return;
        case 13:
          Serial.println(F("09:00 - The clock struck nine when I did send the nurse; In half an hour she promised to return. Perchance she cannot meet him: that's not so. - Shakespeare, Romeo and Juliet "));
          return;
        case 14:
          Serial.println(F("09:00 - To where Saint Mary Woolnoth kept the hours With a dead sound on the final stroke of nine. - T S Eliot, The Waste Land "));
          return;
        case 15:
          Serial.println(F("09:00 - Unreal City, Under the brown fog of a winter dawn, A crowd flowed over London Bridge, so many, I had not thought death had undone so many. Sighs, short and infrequent, were exhaled, And each man fixed his eyes before his feet. Flowed up the hill and down King William Street, To where Saint Mary Woolnoth kept the hours With a dead sound on the final stroke of nine. - T S Eliot, The Waste Land "));
          return;
      } // end switch (option)

    // Codegen for 09:01 for 1 quotations:
    case 541:
      Serial.println(F("Only one option for 09:01:"));
    Serial.println(F("09:01 - 9:01am lay in bed, staring at ceiling. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:02 for 1 quotations:
    case 542:
      Serial.println(F("Only one option for 09:02:"));
    Serial.println(F("09:02 - 9:02am lay in bed, staring at ceiling. - Steve Toltz, A Fraction of the Whole"));
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
          return;
        case 1:
          Serial.println(F("09:03 - This isn't a very good start to the new school year.\" I stared at her. What was she talking about? Why was she looking at her watch? I wasn't late. Okay, the school bell had rung as I was crossing the playground, but you always get five minutes to get to your classroom. \"It's three minutes past nine,\" Miss Beckworth announced. \"You're late.\" - Jacqueline Wilson, The Lottie Project "));
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
          return;
        case 1:
          Serial.println(F("09:04 - In the light of a narrow-beam lantern, Pierce checked his watch. It was 9.04. - Michael Crichton, The Great Train Robbery"));
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
          return;
        case 1:
          Serial.println(F("09:05 - Kaldren pursues me like luminescent shadow. He has chalked up on the gateway '96,688,365,498,702'. Should confuse the mail man. Woke 9:05. To sleep 6:36. - JG Ballard, The Voices of Time "));
          return;
        case 2:
          Serial.println(F("09:05 - The tour of the office doesn't take that long. In fact, we're pretty much done by 9:05 a.m. … and even though it's just a room with a window and a pin board and two doors and two desks... I can't help feeling a buzz as I lead them around. It's mine. My space. My company. - Sophie Kinsella, Twenties Girl "));
          return;
        case 3:
          Serial.println(F("09:05 - The tour of the office doesn't take that long. In fact, we're pretty much done by 9:05 a.m. Ed looks at everything twice and says it's all great, and gives me a list of contacts who might be helpful, then has to leave for his own office. - Sophie Kinsella, Twenties Girl"));
          return;
      } // end switch (option)

    // Codegen for 09:06 for 1 quotations:
    case 546:
      Serial.println(F("Only one option for 09:06:"));
    Serial.println(F("09:06 - 9:06am lay in bed, staring at ceiling - Steve Toltz, A Fraction of the Whole"));
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
          return;
        case 1:
          Serial.println(F("09:07 - It was a sparkling morning, 9:07 by the clock when Mrs. Flett stepped aboard the Imperial Limited at the Tyndall station, certain that her life was ruined, but managing, through an effort of will, to hold herself erect and to affect an air of preoccupation and liveliness. - Carol Shields, The Stone Diaries"));
          return;
      } // end switch (option)

    // Codegen for 09:08 for 1 quotations:
    case 548:
      Serial.println(F("Only one option for 09:08:"));
    Serial.println(F("09:08 - 9.08am rolled over onto left side. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:09 for 1 quotations:
    case 549:
      Serial.println(F("Only one option for 09:09:"));
    Serial.println(F("09:09 - 9.09am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:10 for 1 quotations:
    case 550:
      Serial.println(F("Only one option for 09:10:"));
    Serial.println(F("09:10 - 9.10am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:11 for 1 quotations:
    case 551:
      Serial.println(F("Only one option for 09:11:"));
    Serial.println(F("09:11 - 9:11am lay in bed, staring at wall - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:12 for 1 quotations:
    case 552:
      Serial.println(F("Only one option for 09:12:"));
    Serial.println(F("09:12 - 9.12am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
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
          return;
        case 1:
          Serial.println(F("09:13 - She tucked the phone in the crook of her neck and thumbed hurriedly through her pink messages. Dr. Provetto, at 9:13 A.M. - Lisas Scottoline, Mistaken Identity"));
          return;
      } // end switch (option)

    // Codegen for 09:14 for 1 quotations:
    case 554:
      Serial.println(F("Only one option for 09:14:"));
    Serial.println(F("09:14 - 9.14am lay in bed, staring at wall. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:15 for 4 quotations:
    case 555:
      option = random(0, 4);
      Serial.print(F("4 options for 09:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:15 - \"Great!\" Jones commented. \"I've never seen it do that before. That's all right. Okay.\" Jones pulled a handful of pencils from his back pocket. \"Now, I got the contact first at 0915 or so, and the bearing was about two-six-nine.\" - Tom Clancy, The Hunt for Red October "));
          return;
        case 1:
          Serial.println(F("09:15 - 9:15am doubled over pillow, sat up to see out window - Steve Toltz, A Fraction of the Whole"));
          return;
        case 2:
          Serial.println(F("09:15 - 9.15 a.m. First morning class - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 3:
          Serial.println(F("09:15 - Miss Pettigrew pushed open the door of the employment agency and went in as the clock struck a quarter past nine. - Winifred Watson, Miss Pettigrew Lives For a Day"));
          return;
      } // end switch (option)

    // Codegen for 09:16 for 1 quotations:
    case 556:
      Serial.println(F("Only one option for 09:16:"));
    Serial.println(F("09:16 - 9.16am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:17 for 1 quotations:
    case 557:
      Serial.println(F("Only one option for 09:17:"));
    Serial.println(F("09:17 - 9.17am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:18 for 1 quotations:
    case 558:
      Serial.println(F("Only one option for 09:18:"));
    Serial.println(F("09:18 - 9.18am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
      return;

    // Codegen for 09:19 for 1 quotations:
    case 559:
      Serial.println(F("Only one option for 09:19:"));
    Serial.println(F("09:19 - 9.19am sat in bed, staring out window. - Steve Toltz, A Fraction of the Whole"));
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
          return;
        case 1:
          Serial.println(F("09:20 - At twenty minutes past nine, the Duke of Dunstable, who had dined off a tray in his room, was still there, waiting for his coffee and liqueur. - P.G. Wodehouse, Uncle Fred in the Springtime "));
          return;
        case 2:
          Serial.println(F("09:20 - The following morning at 9.20 Mr Cribbage straightened his greasy old tie, combed his Hitler moustache and arranged the few strands of his hair across his bald patch. - Louis de Bernieres, Red Dog "));
          return;
      } // end switch (option)

    // Codegen for 09:21 for 1 quotations:
    case 561:
      Serial.println(F("Only one option for 09:21:"));
    Serial.println(F("09:21 - It was nine twenty-one. With one minute to go, there was no sign of Herbert's mother. - Dan Rhodes, This is Life"));
      return;

    // Codegen for 09:22 for 1 quotations:
    case 562:
      Serial.println(F("Only one option for 09:22:"));
    Serial.println(F("09:22 - No more throwing stones at him, and I'll see you back here exactly one week from now. She looked at her watch. 'At nine twenty-two next Wednesday.' - Dan Rhodes, This is Life"));
      return;

    // Codegen for 09:23 for 1 quotations:
    case 563:
      Serial.println(F("Only one option for 09:23:"));
    Serial.println(F("09:23 - 9.23. What possessed me to buy this comb? - James Joyce, Ulysses"));
      return;

    // Codegen for 09:24 for 1 quotations:
    case 564:
      Serial.println(F("Only one option for 09:24:"));
    Serial.println(F("09:24 - 9.24 I'm swelled after that cabbage. A speck of dust on the patent leather of her boot. - James Joyce, Ulysses"));
      return;

    // Codegen for 09:25 for 1 quotations:
    case 565:
      Serial.println(F("Only one option for 09:25:"));
    Serial.println(F("09:25 - A man I would cross the street to avoid at nine o'clock - by nine twenty-five I wanted to fuck him until he wept. My legs trembled with it. My voice floated out of my mouth when I opened it to speak. The glass wall of the meeting room was huge and suddenly too transparent. - Anne Enright, The Forgotten Waltz "));
      return;

    // Codegen for 09:26 for 0 quotations:
    case 566:
      Serial.println(F("No quotes for 09:26"));
      return;

    // Codegen for 09:27 for 1 quotations:
    case 567:
      Serial.println(F("Only one option for 09:27:"));
    Serial.println(F("09:27 - From twenty minutes past nine until twenty-seven minutes past nine, from twenty-five minutes past eleven until twenty-eight minutes past eleven, from ten minutes to three until two minutes to three the heroes of the school met in a large familiarity whose Olympian laughter awed the fearful small boy that flitted uneasily past and chilled the slouching senior that rashly paused to examine the notices in assertion of an unearned right. - Compton Mackenzie, Sinister Street"));
      return;

    // Codegen for 09:28 for 2 quotations:
    case 568:
      option = random(0, 2);
      Serial.print(F("2 options for 09:28. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:28 - \"This clock right?\" he asked the butler in the hall. \"Yes, sir.\" The clock showed twenty-eight minutes past nine. \"The clocks here have to be right, sir,\" the butler added with pride and a respectful humour, on the stairs. - Arnold Bennett, Lord Raingo"));
          return;
        case 1:
          Serial.println(F("09:28 - He entered No. 10 for the first time, he who had sat on the Government benches for eight years and who had known the Prime Minister from youth up. \"This clock right?\" he asked the butler in the hall. \"Yes, sir.\" The clock showed twenty-eight minutes past nine. \"The clocks here have to be right, sir,\" the butler added with pride and a respectful humour, on the stairs. - Arnold Bennett, Lord Raingo "));
          return;
      } // end switch (option)

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
          return;
        case 1:
          Serial.println(F("09:30 - It was nine-thirty. In another ten minutes she would turn off the heat; then it would take a while for the water to cool. In the meantime there was nothing to do but wait. “Have you thought it through April?” Never undertake to do a thing until you’ve –“ But she needed no more advice and no more instruction. She was calm and quiet now with knowing what she had always known, what neither her parents not Aunt Claire not Frank nor anyone else had ever had to teach her: that if you wanted to do something absolutely honest, something true, it always turned out to be a thing that had to be done alone. - Richard Yates, Revolutionary Road "));
          return;
        case 2:
          Serial.println(F("09:30 - The body came in at nine-thirty this morning. One of Holding's men went to the house and collected it. There was nothing particularly unusual about the death. The man had had a fear of hospitals and had died at home, being cared for more than adequately by his devoted wife. - Jackie Kay, Trumpet"));
          return;
        case 3:
          Serial.println(F("09:30 - Up the welcomingly warm morning hill we trudge, side by each, bound finally for the Hall of Fame. It's 9.30, and time is in fact a-wastin'. - Richard Ford, Independence Day "));
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
          Serial.println(F("09:32 - He said he couldn't say for certain of course, but that he rather thought he was. Anyhow, if he wasn't the 11.5 for Kingston, he said he was pretty confident he was the 9.32 for Virginia Water, or the 10 a.m. express for the Isle of Wight, or somewhere in that direction, and we should all know when we got there. - Jerome K Jerome, Three Men in a Boat"));
          return;
        case 1:
          Serial.println(F("09:32 - Sandy barely made the nine-thirty-two and found a seat in no-smoking. She'd been looking forward to this visit with Lisbeth. They hadn't seen each other in months, not since January, when Sandy had returned from Jamaica. And on that day Sandy was sporting a full-blown herpes virus on her lower lip. - Judy Blume, Wifey "));
          return;
      } // end switch (option)

    // Codegen for 09:33 for 1 quotations:
    case 573:
      Serial.println(F("Only one option for 09:33:"));
    Serial.println(F("09:33 - Next, he remembered that the morrow of Christmas would be the twenty-seventh day of the moon, and that consequently high water would be at twenty-one minutes past three, the half-ebb at a quarter past seven, low water at thirty-three minutes past nine, and half flood at thirty-nine minutes past twelve. - Victor Hugo, The Toilers of the Sea"));
      return;

    // Codegen for 09:34 for 0 quotations:
    case 574:
      Serial.println(F("No quotes for 09:34"));
      return;

    // Codegen for 09:35 for 2 quotations:
    case 575:
      option = random(0, 2);
      Serial.print(F("2 options for 09:35. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:35 - Nine-thirty-five. He really must be gone. The bird is no longer feeding but sitting at the apex of a curl of razor wire. - Aminatta Forna, The Memory of Love"));
          return;
        case 1:
          Serial.println(F("09:35 - Nine-thirty-five. He really must be gone. The bird is no longer feeding but sitting at the apex of a curl of razor wire. - Aminatta Forna, The Memory of Love "));
          return;
      } // end switch (option)

    // Codegen for 09:36 for 2 quotations:
    case 576:
      option = random(0, 2);
      Serial.print(F("2 options for 09:36. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:36 - I grab a pen and the pad of paper by the phone and start scribbling a list for the day. I have an image of myself moving smoothly from task to task, brush in one hand, duster in the other, bringing order to everything. Like Mary Poppins. 9:30-9:36 Make Geigers' bed 9:36-9:42 Take laundry out of machine and put in dryer 9:42-10:00 Clean bathrooms I get to the end and read it over with a fresh surge of optimism. At this rate I should be done easily by lunchtime. 9:36 Fuck. I cannot make this bed. Why won't this sheet lie flat? 9:42 And why do they make mattresses so heavy? - Sophie Kinsella, The Undomestic Goddess "));
          return;
        case 1:
          Serial.println(F("09:36 - Monday February 6th. '9.36am. Oh god, Oh god. Maybe he's fallen in love in New York and stayed there'. - Helen Fielding, Bridget Jones Diary"));
          return;
      } // end switch (option)

    // Codegen for 09:37 for 1 quotations:
    case 577:
      Serial.println(F("Only one option for 09:37:"));
    Serial.println(F("09:37 - It comprised all that was required of the servant, from eight in the morning, exactly at which hour Phileas Fogg rose, till half-past eleven, when he left the house for the Reform Club - all the details of service, the tea and toast at twenty-three minutes past eight, the shaving-water at thirty-seven minutes past nine, and the toilet at twenty minutes before ten. - Jules Verne, Around the World in 80 days"));
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
          Serial.println(F("09:40 - It comprised all that was required of the servant, from eight in the morning, exactly at which hour Phileas Fogg rose, till half-past eleven, when he left the house for the Reform Club—all the details of service, the tea and toast at twenty-three minutes past eight, the shaving-water at thirty-seven minutes past nine, and the toilet at twenty minutes before ten. - Jules Verne, Around the World in 80 days"));
          return;
        case 1:
          Serial.println(F("09:40 - Must have the phone disconnected. Some contractor keeps calling me up about payment for 50 bags of cement he claims I collected ten days ago. Says he helped me load them onto a truck himself. I did drive Whitby's pick-up into town but only to get some lead screening. What does he think I'd do with all that cement? Just the sort of irritating thing you don't expect to hang over your final exit. (Moral: don't try too hard to forget Eniwetok.) Woke 9:40. To sleep 4:15. - JG Ballard, The Voices of Time "));
          return;
      } // end switch (option)

    // Codegen for 09:41 for 0 quotations:
    case 581:
      Serial.println(F("No quotes for 09:41"));
      return;

    // Codegen for 09:42 for 1 quotations:
    case 582:
      Serial.println(F("Only one option for 09:42:"));
    Serial.println(F("09:42 - I grab a pen and the pad of paper by the phone and start scribbling a list for the day. I have an image of myself moving smoothly from task to task, brush in one hand, duster in the other, bringing order to everything. Like Mary Poppins. 9:30-9:36 Make Geigers' bed 9:36-9:42 Take laundry out of machine and put in dryer 9:42-10:00 Clean bathrooms I get to the end and read it over with a fresh surge of optimism. At this rate I should be done easily by lunchtime. 9:36 Fuck. I cannot make this bed. Why won't this sheet lie flat? 9:42 And why do they make mattresses so heavy? - Sophie Kinsella, The Undomestic Goddess "));
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
      return;

    // Codegen for 09:46 for 0 quotations:
    case 586:
      Serial.println(F("No quotes for 09:46"));
      return;

    // Codegen for 09:47 for 1 quotations:
    case 587:
      Serial.println(F("Only one option for 09:47:"));
    Serial.println(F("09:47 - Monday February 6th. '9.47am. Or gone to Las Vegas and got married'. - Helen Fielding, Bridget Jones Diary"));
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
          return;
        case 1:
          Serial.println(F("09:50 - Ten minutes to ten. \"I had just time to hide the bottle (after the nurse had left me) when you came into my room.\" - Wilkie Collins, The Law and the Lady "));
          return;
      } // end switch (option)

    // Codegen for 09:51 for 0 quotations:
    case 591:
      Serial.println(F("No quotes for 09:51"));
      return;

    // Codegen for 09:52 for 1 quotations:
    case 592:
      Serial.println(F("Only one option for 09:52:"));
    Serial.println(F("09:52 - \"She caught the 9:52 to Victoria. I kept well clear of her on the train and picked her up as she went through the barrier. Then she took a taxi to Hammersmith.\" \"A taxi?\" Smiley interjected. \"She must be out of her mind.\" - John le Carre, Call for the Dead"));
      return;

    // Codegen for 09:53 for 1 quotations:
    case 593:
      Serial.println(F("Only one option for 09:53:"));
    Serial.println(F("09:53 - Miss Pettigrew went to the bus-stop to await a bus. She could not afford the fare, but she could still less afford to lose a possible situation by being late. The bus deposited her about five minutes' walk from Onslow Mansions, an at seven minutes to ten precisely she was outside her destination. - Winifred Watson, Miss Pettigrew Lives for a Day "));
      return;

    // Codegen for 09:54 for 1 quotations:
    case 594:
      Serial.println(F("Only one option for 09:54:"));
    Serial.println(F("09:54 - 9:54 This is sheer torture. My arms have never ached so much in my entire life. The blankets weigh a ton, and the sheets won't go straight and I have no idea how to do the wretched corners. How do chambermaids do it? - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 09:55 for 2 quotations:
    case 595:
      option = random(0, 2);
      Serial.print(F("2 options for 09:55. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("09:55 - At five to ten I'm ready in the hall. Nathaniel's mother's house is nearby but apparently tricky to find, so the plan is to meet here and he'll walk me over. I check my reflection in the hall mirror and wince. The streak of bleach in my hair is as obvious as ever. Am I really going out in public like this? - Sophie Kinsella, The Undomestic Goddess "));
          return;
        case 1:
          Serial.println(F("09:55 - Good-morning, Lucien, good-morning, said Albert; \"your punctuality really alarms me. What do I say? punctuality! You, whom I expected last, you arrive at five minutes to ten, when the time fixed was half-past! Has the ministry resigned?\" - Alexandre Dumas, The Count of Monte Cristo"));
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
    Serial.println(F("09:58 - I didn't sleep too long, because I think it was only around ten o'clock when I woke up. I felt pretty hungry as soon as I had a cigarette. The last time I'd eaten was those two hamburgers I had with Brossard and Ackley when we went in to Agerstown to the movies. That was a long time ago. It seemed like fifty years ago. - J.D. Salinger, Catcher in the Rye "));
      return;

    // Codegen for 09:59 for 1 quotations:
    case 599:
      Serial.println(F("Only one option for 09:59:"));
    Serial.println(F("09:59 - One minute to ten. With a heavy heart Bert watched the clock. His legs were still aching very badly. He could not see the hands of the clock moving, but they were creeping on all the same. - Robert Tressell, The Ragged Trouserred Philanthropists"));
      return;

    // Codegen for 10:00 for 15 quotations:
    case 600:
      option = random(0, 15);
      Serial.print(F("15 options for 10:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:00 - ––In assaying to put on his regimental coat and waistcoat, my uncle Toby found the same objection in his wig, ––so that went off too: ––So that with one thing and what with another, as always falls out when a man is in the most haste, ––'twas ten o'clock, which was half an hour later than his usual time before my uncle Toby sallied out. - Laurence Sterne, Tristram Shandy "));
          return;
        case 1:
          Serial.println(F("10:00 - ’Tis but an hour ago since it was nine, And after one hour more ‘twill be eleven. - William Shakespeare, As You Like It"));
          return;
        case 2:
          Serial.println(F("10:00 - For some seconds the light went on becoming brighter and brighter, and she saw everything more and more clearly and the clock ticked louder and louder until there was a terrific explosion right in her ear. Orlando leapt as if she had been violently struck on the head. Ten times she was struck. In fact it was ten o'clock in the morning. It was the eleventh of October. It was 1928. It was the present moment. - Virginia Woolf, Orlando "));
          return;
        case 3:
          Serial.println(F("10:00 - The trial was irretrievably over; everything that could be said had been said, but he had never doubted that he would lose. The written verdict was handed down at 10:00 on Friday morning, and all that remained was a summing up from the reporters waiting in the corridor outside the district court. - Stieg Larsson, The Girl with the Dragon Tattoo "));
          return;
        case 4:
          Serial.println(F("10:00 - According to military records no US bombers or any other kind of aircraft were flying over that region at the time, that is around 10 am on November 7,1944. - Haruki Murakami, Kafka on the shore "));
          return;
        case 5:
          Serial.println(F("10:00 - At about ten o'clock in the morning the sun threw a bright dust-laden bar through one of the side windows, and in and out of the beam flies shot like rushing stars. - John Steinbeck, Of Mice And Men "));
          return;
        case 6:
          Serial.println(F("10:00 - I went to bed and the next thing I knew I was awake again and it was getting on for ten o' clock in the morning. Ring, ring, said the telephone, ring, ring. - Russell Hoban, The Medusa Frequency "));
          return;
        case 7:
          Serial.println(F("10:00 - If Wednesday should ever come! It did come, and exactly when it might be reasonably looked for. It came - it was fine - and Catherine trod on air. By ten o'clock, the chaise and four conveyed the two from the abbey; and, after an agreeable drive of almost twenty miles, they entered Woodston, a large and populous village, in a situation not unpleasant. - Jane Austen, Northanger Abbey "));
          return;
        case 8:
          Serial.println(F("10:00 - King Richard: Well, but what's o'clock? Buckingham: Upon the stroke of ten. - William Shakespeare, Richard III "));
          return;
        case 9:
          Serial.println(F("10:00 - Monday 30 March 1668 Up betimes, and so to the office, there to do business till about 10 o’clock - Samuel Pepys, The Diary of Samuel Pepys "));
          return;
        case 10:
          Serial.println(F("10:00 - On July 25th, 8:30 a.m. the bitch Novaya dies whelping. At 10 o'clock she is lowered into her cool grave, at 7:30 that same evening we see our first floes and greet them wishing they were the last. - Christoph Ransmayr, The Terrors of Ice and Darkness "));
          return;
        case 11:
          Serial.println(F("10:00 - The pundit sighed. 'Only a fool like me would leave his door open when a riot can occur at any moment, and only a fool like me would say yes to you,' he said. 'What time?' Just his head was sticking out of the partially opened door. The money from blessing the ice-cream factory must have dulled his desire for work, I thought. 'Ten.' 'Ten-thirty.' Without another word, he closed the door. - Akhil Sharma, An Obedient Father "));
          return;
        case 12:
          Serial.println(F("10:00 - The Saturday immediately preceding the examinations was a very busy day for Kennedy. At ten o' clock he was entering Willey's room; the latter had given him a key and left the room vacant by previous arrangement - in fact he had taken Olivia on another house hunting trip. - Barry Unsworth, The Greeks have a word for it "));
          return;
        case 13:
          Serial.println(F("10:00 - The summer holidays were near at hand when I made up my mind to break out of the weariness of school-life for one day at least. With Leo Dillon and a boy named Mahoney I planned a day's mitching. Each of us saved up sixpence. We were to meet at ten in the morning on the Canal Bridge. - James Joyce, Dubliners "));
          return;
        case 14:
          Serial.println(F("10:00 - The written verdict was handed down at 10:00 on Friday morning, and allthat remained was a summing up from the reporters waiting in the corridor outside the district court. - Stieg Larsson, The girl with the dragon tattoo "));
          return;
      } // end switch (option)

    // Codegen for 10:01 for 1 quotations:
    case 601:
      Serial.println(F("Only one option for 10:01:"));
    Serial.println(F("10:01 - At about ten o'clock in the morning the sun threw a bright dust-laden bar through one of the side windows, and in and out of the beam flies shot like rushing stars.' - John Steinbeck, Of Mice And Men"));
      return;

    // Codegen for 10:02 for 1 quotations:
    case 602:
      Serial.println(F("Only one option for 10:02:"));
    Serial.println(F("10:02 - It was two minutes after ten; she was not satisfied with her clothes, her face, her apartment. She heated the coffee again and sat down in the chair by the window. Can't do anything more now, she thought, no sense trying to improve anything the last minute. - Shirley Jackson, The Daemon Lover"));
      return;

    // Codegen for 10:03 for 2 quotations:
    case 603:
      option = random(0, 2);
      Serial.print(F("2 options for 10:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:03 - It's 10.03 according to his watch, and he is travelling down through the Scottish highlands to Inverness, tired and ever-so-slightly anxious in case he falls asleep between now and when the train reaches the station, and misses his cue to say to Alice, Drew and Aleesha: 'OK, this is Inverness, let's move it.' - Michel Faber, “Vanilla-Bright like Eminem” from The Farenheit Twins "));
          return;
        case 1:
          Serial.println(F("10:03 - The date was the 14th of May and the clock on his desk said the time was twenty three minutes past ten, so he tapped in the numbers 10.23. At least, that's what he meant to do. In fact he typed in the numbers 10.03. - Andrew Norriss, Ctrl-Z"));
          return;
      } // end switch (option)

    // Codegen for 10:04 for 0 quotations:
    case 604:
      Serial.println(F("No quotes for 10:04"));
      return;

    // Codegen for 10:05 for 1 quotations:
    case 605:
      Serial.println(F("Only one option for 10:05:"));
    Serial.println(F("10:05 - We both watch as a pair of swans sail regally under the little bridge. Then I glance at my watch. It's already five past ten. “We should get going,” I say with a little start. Your mother will be waiting.” “There's no rush,” Nathaniel calls as I hasten down the other side of the bridge. “We've got all day.” He lopes down the bridge. “It's OK. You can slow down.” I try to match his relaxed pace. But I'm not used to this easy rhythm. I'm used to striding along crowded pavements, fighting my way, pushing and elbowing. - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 10:06 for 0 quotations:
    case 606:
      Serial.println(F("No quotes for 10:06"));
      return;

    // Codegen for 10:07 for 1 quotations:
    case 607:
      Serial.println(F("Only one option for 10:07:"));
    Serial.println(F("10:07 - 10.07 am: In a meeting with Rod, Momo and Guy. We are rehearsing the final for the third time, with Rod and Guy taking the parts of the clients, when Rod's secretary, Lorraine, bursts in. - Allison Pearson, I Don't Know How She Does It"));
      return;

    // Codegen for 10:08 for 0 quotations:
    case 608:
      Serial.println(F("No quotes for 10:08"));
      return;

    // Codegen for 10:09 for 1 quotations:
    case 609:
      Serial.println(F("Only one option for 10:09:"));
    Serial.println(F("10:09 - He followed the squeals down a hallway. A wall clock read 8:09-10:09 Dallas time. - James Ellroy, American Tabloid"));
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
          return;
        case 1:
          Serial.println(F("10:10 - Saturday morning was bright and sunny, and at ten minutes past 10 Donald arrived at the Embankment entrance of Charing Cross Underground Station, carrying a small suitcase full of clothes suitable for outdoor sports and pastimes. - AG Macdonell, England, Their England"));
          return;
      } // end switch (option)

    // Codegen for 10:11 for 1 quotations:
    case 611:
      Serial.println(F("Only one option for 10:11:"));
    Serial.println(F("10:11 - Through the curtained windows of the furnished apartment which Mrs. Horace Hignett had rented for her stay in New York rays of golden sunlight peeped in like the foremost spies of some advancing army. It was a fine summer morning. The hands of the Dutch clock in the hall pointed to thirteen minutes past nine; those of the ormolu clock in the sitting-room to eleven minutes past ten; those of the carriage clock on the bookshelf to fourteen minutes to six. In other words, it was exactly eight; and Mrs. Hignett acknowledged the fact by moving her head on the pillow, opening her eyes, and sitting up in bed. She always woke at eight precisely. - P.G. Wodehouse, Three Men and a Maid "));
      return;

    // Codegen for 10:12 for 2 quotations:
    case 612:
      option = random(0, 2);
      Serial.print(F("2 options for 10:12. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:12 - “I'll take the coffee tray out,” I suggest humbly. As I pick it up I glance again at my watch. Ten twelve. I wonder if they've started the meeting. - Sophie Kinsella, The Undomestic Goddess "));
          return;
        case 1:
          Serial.println(F("10:12 - He stood up once, early on, to lock his office door, and then he was reading the last page, and it was exactly 10:12 a.m., and the sun beating on his office windows was a different sun from the one he'd always known. - Jonathan Franzen, Freedom"));
          return;
      } // end switch (option)

    // Codegen for 10:13 for 1 quotations:
    case 613:
      Serial.println(F("Only one option for 10:13:"));
    Serial.println(F("10:13 - \"By the bye,\" said the first, \"I was able this morning to telegraph the very words of the order to my cousin at seventeen minutes past ten.\" \"And I sent it to the Daily Telegraph at thirteen minutes past ten.\" \"Bravo, Mr. Blount!\" \"Very good, M. Jolivet.\" - Jules Verne, Michel Strogoff"));
      return;

    // Codegen for 10:14 for 1 quotations:
    case 614:
      Serial.println(F("Only one option for 10:14:"));
    Serial.println(F("10:14 - “Okay. Ten fourteen: Mrs. Narada reports that her cat has been attacked by a large dog. Now I send all the boys out looking, but they don't find anything until eleven. Then one of them calls in that a big dog has just bitten holes in the tires on his golf cart and run off. Eleven thirty: Dr. Epstein makes his first lost-nap call: dog howling. Eleven thirty-five: Mrs. Norcross is putting the kids out on the deck for some burgers when a big dog jumps over the rail, eats the burgers, growls at the kids, runs off. First mention of lawsuit.” - Christopher Moore, Coyote Blue "));
      return;

    // Codegen for 10:15 for 1 quotations:
    case 615:
      Serial.println(F("Only one option for 10:15:"));
    Serial.println(F("10:15 - At 10.15 Arlena departed from her rondezvous, a minute or two later Patrick Redfern came down and registered surprise, annoyance, etc. Christine's task was easy enough. Keeping her own watch concealed she asked she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the sun "));
      return;

    // Codegen for 10:16 for 1 quotations:
    case 616:
      Serial.println(F("Only one option for 10:16:"));
    Serial.println(F("10:16 - 10:16 At last. Forty minutes of hard work and I have made precisely one bed. I'm way behind. But never mind. Just keep moving. Laundry next. - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 10:17 for 1 quotations:
    case 617:
      Serial.println(F("Only one option for 10:17:"));
    Serial.println(F("10:17 - \"By the bye,\" said the first, \"I was able this morning to telegraph the very words of the order to my cousin at seventeen minutes past ten.\" \"And I sent it to the Daily Telegraph at thirteen minutes past ten.\"n \"Bravo, Mr. Blount!\" \"Very good, M. Jolivet.\" \"I will try and match that!\" - Jules Verne, Michel Strogoff"));
      return;

    // Codegen for 10:18 for 1 quotations:
    case 618:
      Serial.println(F("Only one option for 10:18:"));
    Serial.println(F("10:18 - I know that it was 10:18 when I got home because I look at my watch a lot. - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
      return;

    // Codegen for 10:19 for 0 quotations:
    case 619:
      Serial.println(F("No quotes for 10:19"));
      return;

    // Codegen for 10:20 for 1 quotations:
    case 620:
      Serial.println(F("Only one option for 10:20:"));
    Serial.println(F("10:20 - How much is the clock fast now? His mother straightened the battered alarm clock that was lying on its side in the middle of the mantelpiece until its dial showed a quarter to twelve and then laid it once more on its side. An hour and twenty-five minutes, she said. The right time now is twenty past ten. - James Joyce, A Portrait of the Artist as a Young Man"));
      return;

    // Codegen for 10:21 for 1 quotations:
    case 621:
      Serial.println(F("Only one option for 10:21:"));
    Serial.println(F("10:21 - Liz Headleand stares into the mirror, as though entranced. She does not see herself or the objects on her dressing-table. The clock abruptly jerks to 10.21. - Margaret Drabble, The Radiant Way"));
      return;

    // Codegen for 10:22 for 1 quotations:
    case 622:
      Serial.println(F("Only one option for 10:22:"));
    Serial.println(F("10:22 - I listened to them, and listened to them again, and then before I had time to figure out what to do, or even what to think or feel, the phone started ringing. It was 10:22:27. I looked at the caller ID and saw that it was him. - Jonathan Safran Foer, Extremely Loud and Incredibly Close"));
      return;

    // Codegen for 10:23 for 1 quotations:
    case 623:
      Serial.println(F("Only one option for 10:23:"));
    Serial.println(F("10:23 - The date was the 14th of May and the clock on his desk said the time was twenty three minutes past ten, so he tapped in the numbers 10.23. At least, that's what he meant to do. In fact he typed in the numbers 10.03 - Andrew Norriss, Ctrl-Z"));
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
          return;
        case 1:
          Serial.println(F("10:25 - One meal is enough now, topped up with a glucose shot. Sleep is still 'black', completely unrefreshing. Last night I took a 16 mm. film of the first three hours, screened it this morning at the lab. The first true-horror movie. I looked like a half-animated corpse. Woke 10:25. To sleep 3:45. - JG Ballard, The Voices of Time "));
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
          Serial.println(F("10:26 - 10:26 No. Please, no. I can hardly bear to look. It's a total disaster. Everything in the washing machine has gone pink. Every single thing. What happened? With trembling fingers I pick out a damp cashmere cardigan. It was a cream when I put it in. It's now a sickly shade of candy floss. I knew K3 was bad news. I knew it - - Sophie Kinsella, The Undomestic Goddess "));
          return;
        case 1:
          Serial.println(F("10:26 - In the exact centre of my visual field was the alarm clock, hands pointing to ten-twenty-six. An alarm clock I received as a memento of somebody's wedding. - Haruki Murakami, Hard-boiled Wonderland and The End of the World"));
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
          return;
        case 1:
          Serial.println(F("10:27 - She is on holiday in Norfolk. The substandard clock radio says 10:27 a.m. The noise is Katrina the Cleaner thumping the hoover against the skirting boards and the bedroom doors. Her hand is asleep. It is still hooked through the handstrap of the camera. She unhooks it and shakes it to get the blood back into it. She puts her feet on top of her trainers and slides them across the substandard carpet. It has the bare naked feet of who knows how many hundreds of dead or old people on it. - Ali Smith, The Accidental "));
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

    // Codegen for 10:30 for 3 quotations:
    case 630:
      option = random(0, 3);
      Serial.print(F("3 options for 10:30. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("10:30 - 10.30 a.m. Break - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 1:
          Serial.println(F("10:30 - according to the clock on the wall, it is barely ten thirty. - Michael Cunningham, The Hours "));
          return;
        case 2:
          Serial.println(F("10:30 - At ten-thirty I'm cleaned up, shaved and dressed in my Easter best - a two-piece seersucker Palm Beach I've had since college. - Richard Ford, The Sportswriter"));
          return;
      } // end switch (option)

    // Codegen for 10:31 for 1 quotations:
    case 631:
      Serial.println(F("Only one option for 10:31:"));
    Serial.println(F("10:31 - \"If you please. You went to bed at what time, Madame?\" \"Just after half past ten.\" - Agatha Christie, Death on the Nile"));
      return;

    // Codegen for 10:32 for 1 quotations:
    case 632:
      Serial.println(F("Only one option for 10:32:"));
    Serial.println(F("10:32 - \"If you please. You went to bed at what time, Madame?\" \"Just after half past ten.\" - Agatha Christie, Death on the Nile"));
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
      return;

    // Codegen for 10:36 for 1 quotations:
    case 636:
      Serial.println(F("Only one option for 10:36:"));
    Serial.println(F("10:36 - \"Strand post mark and dispatched ten thirty-six\" said Holmes reading it over and over. \"Mr Overton was evidently considerably excited when he sent it over and somewhat incoherent in consequence.\" - Arthur Conan Doyle, The Adventure of the Missing Three-Quarter"));
      return;

    // Codegen for 10:37 for 1 quotations:
    case 637:
      Serial.println(F("Only one option for 10:37:"));
    Serial.println(F("10:37 - I quite agree with you,' said Mr Murbles. 'It is a most awkward situation. Lady Dormer died at precisely 10.37 a.m. on November 11th.' - Dorothy L. Sayers, The Unpleasantness at the Bellona Club"));
      return;

    // Codegen for 10:38 for 1 quotations:
    case 638:
      Serial.println(F("Only one option for 10:38:"));
    Serial.println(F("10:38 - There must be a solution, there must be. Frantically I scan the cans of products stacked on the shelves. Stain Away. Vanish. There has to be a remedy. ... I just need to think. ... 10:38 OK, I have the answer. It may not totally work—but it's my best shot. - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 10:39 for 0 quotations:
    case 639:
      Serial.println(F("No quotes for 10:39"));
      return;

    // Codegen for 10:40 for 1 quotations:
    case 640:
      Serial.println(F("Only one option for 10:40:"));
    Serial.println(F("10:40 - 10:40: Call from Katharina asking me whether I had really said what was in the News. - Heinrich Böll, The Lost Honour of Katharina Blum"));
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
          Serial.println(F("10:45 - If this is so, we have now to determine what Barker and Mrs. Douglas, presuming they are not the actual murderers, would have been doing from quarter to eleven, when the sound of the shot brought them down, until quarter past eleven, when they rang for the bell and summoned the servants'. - Arthur Conan Doyle, The Valley of Fear"));
          return;
        case 1:
          Serial.println(F("10:45 - They reached King's Cross at a quarter to eleven. Mr Weasley dashed across the road to get trolleys for their trunks and they all hurried into the station. - J.K.Rowling, Harry Potter and the Chamber of Secrets "));
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
      return;

    // Codegen for 10:48 for 1 quotations:
    case 648:
      Serial.println(F("Only one option for 10:48:"));
    Serial.println(F("10:48 - At 10.48am, I closed my folder but didn't bother putting it back in my bag, so you knew I was on my way to a committee or meeting room nearby. Before I stood up, I folded my paper napkin and put it and the spoon into my coffee cup, a neat sort of person, you thought. - Louise Doughty, Apple Tree Yard"));
      return;

    // Codegen for 10:49 for 1 quotations:
    case 649:
      Serial.println(F("Only one option for 10:49:"));
    Serial.println(F("10:49 - By forty-nine minutes past ten, we fall in again with a fine portion of the ancient road, which the modern track constantly follows, and descend by some steep windings, hewn in the side of a precipitous cliff, to the place where the Ouad-el-Haoud commences. - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
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
          return;
        case 1:
          Serial.println(F("10:50 - As he walked back to the flight office, airmen were forming a line to await the arrival of the NAAFI van with morning tea and cakes. Lambert looked at his watch; it was ten to eleven. - Len Deighton, Bomber"));
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
          return;
        case 1:
          Serial.println(F("10:53 - I gaze and gaze again at that face, which seems to me both strange and familiar, said Austerlitz, I run the tape back repeatedly, looking at the time indicator in the top left-hand corner of the screen, where the figures covering part of her forehead show the minutes and seconds, from 10:53 to 10:57, while the hundredths of a second flash by so fast that you cannot read and capture them. - W.G. Sebald, Austerlitz "));
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
      return;

    // Codegen for 10:56 for 0 quotations:
    case 656:
      Serial.println(F("No quotes for 10:56"));
      return;

    // Codegen for 10:57 for 1 quotations:
    case 657:
      Serial.println(F("Only one option for 10:57:"));
    Serial.println(F("10:57 - I run the tape back repeatedly, looking at the time indicator in the top left-hand corner of the screen, where the figures covering part of her forehead show the minutes and seconds, from 10.53 to 10.57. - W. G. Sebald, Austerlitz"));
      return;

    // Codegen for 10:58 for 1 quotations:
    case 658:
      Serial.println(F("Only one option for 10:58:"));
    Serial.println(F("10:58 - One day Joe was sitting in the office waiting for his 11 o'clock appointment, and at 10:58 this black gal came in. - Helen DeWitt, Lightning Rods"));
      return;

    // Codegen for 10:59 for 1 quotations:
    case 659:
      Serial.println(F("Only one option for 10:59:"));
    Serial.println(F("10:59 - Harry grunted in his sleep and his face slid down the window an inch or so, making his glasses still more lopsided, but he did not wake up. An alarm clock, repaired by Harry several years ago, ticked loudly on the sill, showing one minute to eleven. - J. K. Rowling, Harry Potter and the Half-Blood Prince"));
      return;

    // Codegen for 11:00 for 16 quotations:
    case 660:
      option = random(0, 16);
      Serial.print(F("16 options for 11:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:00 - 'Who can - what can -” asked Mrs Dalloway (thinking it was outrageous to be interrupted at eleven o'clock on the morning of the day she was giving a party), hearing a step on the stairs. - Virginia Woolf, Mrs Dalloway "));
          return;
        case 1:
          Serial.println(F("11:00 - \"By 11 o'clock I have finished the first chapter of Mr Y. The winter sun is peeping meekly through the thin curtains and I decide to get up\" - Scarlett Thomas, The End of Mr Y "));
          return;
        case 2:
          Serial.println(F("11:00 - He was rather a long time, and I began to feel muffled, weighed down by thick stuffs and silence. I thought: He'll never come back; and when he did his figure seemed to come at me from very far away, dream-like and dwindled, making his way back along a tunnel...I dare say it was champagne at eleven in the morning. - Rosamond Lehmann, The Weather in the Streets "));
          return;
        case 3:
          Serial.println(F("11:00 - As her husband had told him, she was still in bed although it was past 11 o'clock. Her normally mobile face was encased in clay, rigid and menacing as an Aztec mask. - Evelyn Waugh, Scoop "));
          return;
        case 4:
          Serial.println(F("11:00 - As they looked the whole world became perfectly silent, and a flight of gulls crossed the sky, first one gull leading, then another, and in this extraordinary silence and peace, in this pallor, in this purity, bells struck eleven times the sound fading up there among the gulls. - Virginia Woolf, Mrs. Dalloway "));
          return;
        case 5:
          Serial.println(F("11:00 - At eleven o'clock in the morning, large flakes had appeared from a colourless sky and invaded the fields, gardens and lawns of Romerike like an armada from outer space. - Jo Nesbo, The Snowman "));
          return;
        case 6:
          Serial.println(F("11:00 - At eleven o'clock the phone rang, and still the figure did not respond, any more than it had responded when the phone had rung at twenty-five to seven, and again for ten minutes continuously starting at five to seven... - Douglas Adams, The Long Dark Tea-Time of the Soul"));
          return;
        case 7:
          Serial.println(F("11:00 - Big Ben was striking as she stepped out into the street. It was eleven o'clock and the unused hour was fresh as if issued to children on a beach. - Virginia Woolf, Mrs Dalloway "));
          return;
        case 8:
          Serial.println(F("11:00 - It was about eleven o'clock in the morning, mid October, with the sun not shining and a look of hard wet rain in the clearness of the foothills. I was wearing my powder-blue suit, with dark blue shirt, tie and display handkerchief, black brogues, black wool socks with dark blue clocks on them. I was neat, clean, shaved and sober, and I didn't care who knew it. I was everything the well-dressed private detective ought to be. I was calling on four millon dollars. - Raymond Chandler, The big sleep "));
          return;
        case 9:
          Serial.println(F("11:00 - My sister is terrified that I might write and tell all the family secrets. Why do I feel like a rebel, like an iconoclast? I am only trying to do a writing class, what is wrong with that? I keep telling myself that once in the car I will be fine, I can listen to Radio Four Woman’s Hour and that will take me till eleven o’clock when the class starts. - Patsy Hickman, The Saints "));
          return;
        case 10:
          Serial.println(F("11:00 - ON the morning following the events just narrated, Mrs. Arlington was seated at breakfast in a sweet little parlour of the splendid mansion which the Earl of Warrington had taken and fitted up for her in Dover Street, Piccadilly. It was about eleven o'clock; and the Enchantress was attired in a delicious deshabillé. With her little feet upon an ottoman near the fender, and her fine form reclining in a luxurious large arm-chair, she divided her attention between her chocolate and the columns of the Morning Herald. She invariably prolonged the morning's repast as much as possible, limply because it served to wile away the time until the hour for dressing arrived. - G.W.M. Reynolds, The Mysteries of London "));
          return;
        case 11:
          Serial.println(F("11:00 - Quiet as I am, I become at Eleven o'Clock in the Morning on every day of the week save Sunday a raving, ranting maniac -- a dangerous lunatic, panting with insane desires to do, not only myself but other people, a mischief, and possessed less by hallucination than by rabies. - George Augustus Sala, Twice Around the Clock "));
          return;
        case 12:
          Serial.println(F("11:00 - Though perhaps' – but here the bracket clock whirred and then hectically struck eleven, its weights spooling downwards at the sudden expense of energy. She had to sit for a moment, when the echo had vanished, to repossess her thoughts. - Alan Hollinghurst, The Stranger's Child "));
          return;
        case 13:
          Serial.println(F("11:00 - We got to Waterloo at eleven, and asked where the eleven-five started from. Of course nobody knew; nobody at Waterloo ever does know where a train is going to start from, or where a train when it does start is going to, or anything about it. - Jerome K Jerome, Three Men in a Boat "));
          return;
        case 14:
          Serial.println(F("11:00 - We got to Waterloo at eleven, and asked where the eleven-five started from.Of course nobody knew; nobody at Waterloo ever does know where a train is going to start from, or where a train when it does start is going to, or anything about it. - Jerome K Jerome, Three Men in a Boat "));
          return;
        case 15:
          Serial.println(F("11:00 - We passed a few sad hours until eleven o'clock, when the trial was to commence. My father and the rest of the family being obliged to attend as witnesses, I accompanied them to the court. During the whole of this wretched mockery of justice I suffered living torture. - Mary Shelley, Frankenstein "));
          return;
      } // end switch (option)

    // Codegen for 11:01 for 1 quotations:
    case 661:
      Serial.println(F("Only one option for 11:01:"));
    Serial.println(F("11:01 - O'Neil rises and takes the tray. He has finished the tea, but the muffins are still here in a wicker basket covered with a blue napkin. The clock above the stove says that it is just past eleven, and guests will be arriving at the house now. - Justin Cronin, Mary and O'Neil"));
      return;

    // Codegen for 11:02 for 1 quotations:
    case 662:
      Serial.println(F("Only one option for 11:02:"));
    Serial.println(F("11:02 - On August 9th, three days later, at 11.02am, another B−29 dropped the second bomb on the industrial section of the city of Nagasaki, totally destroying 1 1/2 square miles of the city, killing 39,000 persons and injuring 25,000 more. - The Manhattan Engineer District, The Atomic Bombings of Hiroshima and Nagasaki"));
      return;

    // Codegen for 11:03 for 2 quotations:
    case 663:
      option = random(0, 2);
      Serial.print(F("2 options for 11:03. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:03 - \"What makes you think it's for real?\" \"Just a hunch, really. He sounded for real. Sometimes you can just tell about people\"-he smiled-\"even if you're a dull old WASP.\" \"I think it's a setup.\" \"Why?\" \"I just do. Why would someone from the government want to help you?\" \"Good question. Guess I'll find out.\" She went back into the kitchen.\"What time are you meeting him?\" she called out. \"Eleven oh-three,\" he said. \"That made me think he's for real. Military and intelligence types set precise appointment times to eliminate confusion and ambiguity. Nothing ambiguous about eleven oh-three.\" - Christopher Buckley, Little Green Men "));
          return;
        case 1:
          Serial.println(F("11:03 - On the fourth, at 11.03am, the editor of the Yidische Zaitung put in a call to him; Doctor Yarmolinsky did not answer. He was found in his room, his face already a little dark, nearly nude beneath a large, anachronistic cape. - Jorge Luis Borges, Death and the Compass"));
          return;
      } // end switch (option)

    // Codegen for 11:04 for 1 quotations:
    case 664:
      Serial.println(F("Only one option for 11:04:"));
    Serial.println(F("11:04 - As her husband had told him, she was still in bed although it was past 11 o'clock. Her normally mobile face was encased in clay, rigid and menacing as an Aztec mask. - Evelyn Waugh, Scoop "));
      return;

    // Codegen for 11:05 for 2 quotations:
    case 665:
      option = random(0, 2);
      Serial.print(F("2 options for 11:05. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:05 - July 3: 5 3/4 hours. Little done today. Deepening lethargy, dragged myself over to the lab, nearly left the road twice. Concentrated enough to feed the zoo and get the log up to date. Read through the operating manuals Whitby left for the last time, decided on a delivery rate of 40 rontgens/min., target distance of 530 cm. Everything is ready now. Woke 11:05. To sleep 3:15. - JG Ballard, The Voices of Time "));
          return;
        case 1:
          Serial.println(F("11:05 - Sansom arrived in a Town Car at five past eleven. Local plates, which meant he had ridden up most of the way on the train. Less convenient for him, but a smaller carbon footprint than driving all the way, or flying. Every detail mattered, in a campaign. - Lee Child, Gone Tomorrow"));
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
          return;
        case 1:
          Serial.println(F("11:06 - Despite the remaking of the BookWorld, some books remained tantalisingly out of reach [...] It was entirely possible that they didn't know there was a BookWorld, and still they thought they were real. A fantastic notion, until you consider that up until 11.06am on 12 April 1948, everyone else had thought the same. - Jasper Fforde, One of Our Thursdays is Missing"));
          return;
      } // end switch (option)

    // Codegen for 11:07 for 1 quotations:
    case 667:
      Serial.println(F("Only one option for 11:07:"));
    Serial.println(F("11:07 - At exactly seven minutes past eleven by the ship's clock the Adventurer gave a prolonged screech and, moorings cast off, edged her way out of the basin and dipped her nose in the laughing waters of the bay, embarked at last on a voyage that was destined to fully vindicate her new name. - Ralph Henry Barbour, The Adventure Club Afloat "));
      return;

    // Codegen for 11:08 for 1 quotations:
    case 668:
      Serial.println(F("Only one option for 11:08:"));
    Serial.println(F("11:08 - The bursar was standing in the hall with his arms folded across his chest and when he caught sight of the fat young man he looked significantly at the clock. It was eight minutes past eleven. - James Joyce, Stephen Hero"));
      return;

    // Codegen for 11:09 for 1 quotations:
    case 669:
      Serial.println(F("Only one option for 11:09:"));
    Serial.println(F("11:09 - The first time I saw them it was around eleven, eleven-fifteen, a Saturday morning, I was about two thirds through my route when I turned onto their block and noticed a '56 Ford sedan pulled up in the yard with a big open U-Haul behind. - Raymond Carver, Where I'm Calling From "));
      return;

    // Codegen for 11:10 for 1 quotations:
    case 670:
      Serial.println(F("Only one option for 11:10:"));
    Serial.println(F("11:10 - Ten minutes after eleven in Archie McCue's room on the third floor of the extension to the Robert Matthews' soaring sixties' tower - The Queen's Tower, although no queen was ever likely to live in it. - Kate Atkinson, Emotionally Weird"));
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
          return;
        case 1:
          Serial.println(F("11:12 - I squinted down the street at the bank clock: 11:12, 87 degrees. \"It's only a block and a half and it's not that hot, Daddy. The walk will do you good.\" This conversation made me breathless, as if I were wearing a girdle with tight stays. - Jane Smiley, A Thousand Acres"));
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
      return;

    // Codegen for 11:15 for 2 quotations:
    case 675:
      option = random(0, 2);
      Serial.print(F("2 options for 11:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:15 - \"Have you a couple of days to spare? Have just been wired for from the west of England in connection with Boscombe Valley tragedy. Shall be glad if you will come with me. Air and scenery perfect. Leave Paddington by the 11:15.\" - Sir Arthur Conan Doyle, The Adventures of Sherlock Holmes"));
          return;
        case 1:
          Serial.println(F("11:15 - The first time I saw them it was around eleven, eleven-fifteen, a Saturday morning, I was about two thirds through my route when I turned onto their block and noticed a '56 Ford sedan pulled up in the yard with a big open U-Haul behind. There are only three houses on Pine, and theirs was the last house,the others being the Murchisons, who'd been in Arcata a little less than a year, and the Grants, who'd been here about two years. Murchison worked at Simpson Redwood, and Gene Grant was a cook on the morning shift at Denny's. Those two, then a vacant lot, then the house on the end that used to belong to the Coles. - Raymond Carver, Where I'm Calling From "));
          return;
      } // end switch (option)

    // Codegen for 11:16 for 0 quotations:
    case 676:
      Serial.println(F("No quotes for 11:16"));
      return;

    // Codegen for 11:17 for 1 quotations:
    case 677:
      Serial.println(F("Only one option for 11:17:"));
    Serial.println(F("11:17 - Mrs. Mooney glanced instinctively at the little gilt clock on the mantelpiece as soon as she had become aware through her revery that the bells of George's Church had stopped ringing. It was seventeen minutes past eleven: she would have lots of time to have the matter out with Mr. Doran and then catch short twelve at Marlborough Street. She was sure she would win. - James Joyce, Dubliners "));
      return;

    // Codegen for 11:18 for 1 quotations:
    case 678:
      Serial.println(F("Only one option for 11:18:"));
    Serial.println(F("11:18 - It is 11.18. A row of bungalows in a round with a clump of larch tree in the middle. - Jackie Kay, Trumpet"));
      return;

    // Codegen for 11:19 for 1 quotations:
    case 679:
      Serial.println(F("Only one option for 11:19:"));
    Serial.println(F("11:19 - A whistle cut sharply across his words. Peter got onto his knees to look out the window, and Miss Fuller glared at him. Polly looked down at her watch: 11:19. The train. But the stationmaster had said it was always late. - Connie Willis, Blackout"));
      return;

    // Codegen for 11:20 for 2 quotations:
    case 680:
      option = random(0, 2);
      Serial.print(F("2 options for 11:20. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:20 - OFFICER'S NOTES Disruption alert logged 11h20 from Stones' Pool Hall (Premises ID 33CBD-Long181). Officer and Aito /379 responded. On arrival found subject shouting threats and acting in aggressive manner. A scan of the subject's SIM ID register revealed that the subject has recent priors including previous public disruptions and a juvenile record. - Lauren Beukes, Moxyland "));
          return;
        case 1:
          Serial.println(F("11:20 - Sweeney pointed to the clock above the bar, held in the massive and indifferent jaws of a stuffed alligator head. The time was 11.20. - Neil Gaiman, American Gods"));
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
          Serial.println(F("11:25 - At 10.15 Arlena departed from her rondezvous, a minute or two later Patrick Redfern came down and registered surprise, annoyance, etc. Christine's task was easy enough. Keeping her own watch concealed she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the Sun "));
          return;
        case 1:
          Serial.println(F("11:25 - When, at about 11.25am, Katharina Blum was finally taken from her apartment for questioning, it was decided not to handcuff her at all. - Heinrich Böll, The Lost Honour of Katharina Blum"));
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
      return;

    // Codegen for 11:28 for 1 quotations:
    case 688:
      Serial.println(F("Only one option for 11:28:"));
    Serial.println(F("11:28 - From twenty minutes past nine until twenty-seven minutes past nine, from twenty-five minutes past eleven until twenty-eight minutes past eleven, from ten minutes to three until two minutes to three the heroes of the school met in a large familiarity whose Olympian laughter awed the fearful small boy that flitted uneasily past and chilled the slouching senior that rashly paused to examine the notices in assertion of an unearned right. - Compton Mackenzie, Sinister Street"));
      return;

    // Codegen for 11:29 for 1 quotations:
    case 689:
      Serial.println(F("Only one option for 11:29:"));
    Serial.println(F("11:29 - You are four minutes too slow. No matter; it's enough to mention the error. Now from this moment, twenty-nine minutes after eleven, a.m., this Wednesday, 2nd October, you are in my service. - Jules Verne, Around the World in Eighty Days"));
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
          return;
        case 1:
          Serial.println(F("11:30 - \"O, Frank - I made a mistake! - I thought that church with the spire was All Saints', and I was at the door at half-past eleven to a minute as you said...\" - Thomas Hardy, Far from the madding crowd "));
          return;
        case 2:
          Serial.println(F("11:30 - \"Thank-you,\" said C.B. quietly; but as he hung up his face was grim. In a few minutes he would have to break it to John that, although they had braved such dredful perils dring the earlier part of the night they had, after all, failed to save Christina. Beddows had abjured Satan at a little after half-past eleven. By about eighteen minutes the Canon had beaten them to it again.\" - Dennis Wheatley, To the Devil a Daughter "));
          return;
        case 3:
          Serial.println(F("11:30 - This time it was Kumiko. The wall clock said 11.30. - Haruki Murakami, The Wind-up Bird Chronicle "));
          return;
      } // end switch (option)

    // Codegen for 11:31 for 1 quotations:
    case 691:
      Serial.println(F("Only one option for 11:31:"));
    Serial.println(F("11:31 - Albatross 8 passed over Pamlico Sound at 1131 local time. Its on-board programming was designed to trace thermal receptors over the entire visible horizon, interrogating everything in sight and locking on any signature that fit its acquisition parameters. - Tom Clancy, The Hunt for Red October "));
      return;

    // Codegen for 11:32 for 1 quotations:
    case 692:
      Serial.println(F("Only one option for 11:32:"));
    Serial.println(F("11:32 - And after that, not forgetting, there was the Flemish armada, all scattered, and all officially drowned, there and then, on a lovely morning, after the universal flood, at about eleven thirty two was it? Off the coast of Cominghome... - James Joyce, Finnegans Wake"));
      return;

    // Codegen for 11:33 for 0 quotations:
    case 693:
      Serial.println(F("No quotes for 11:33"));
      return;

    // Codegen for 11:34 for 1 quotations:
    case 694:
      Serial.println(F("Only one option for 11:34:"));
    Serial.println(F("11:34 - Christmas Eve 1995. 11.34am. The first time, Almasa says it slowly and softly, as if she is really looking for an answer, \"Are you talking to me?\" She peers into the small, grimy mirror in a train toilet. - Adnan Mahmutovic, How to Fare Well and Stay Fair"));
      return;

    // Codegen for 11:35 for 1 quotations:
    case 695:
      Serial.println(F("Only one option for 11:35:"));
    Serial.println(F("11:35 - At 11.35 the Colonel came out; he looked hot and angry as he strode towards the lift. There goes a hanging judge, thought Wormold. - Graham Greene, Our Man in Havana"));
      return;

    // Codegen for 11:36 for 1 quotations:
    case 696:
      Serial.println(F("Only one option for 11:36:"));
    Serial.println(F("11:36 - I ran up the stairs, away from the heat and the noise, the mess and the confusion. I saw the clock radio by my bed. Eleven thirty-six. - Nicci French, Losing You"));
      return;

    // Codegen for 11:37 for 0 quotations:
    case 697:
      Serial.println(F("No quotes for 11:37"));
      return;

    // Codegen for 11:38 for 1 quotations:
    case 698:
      Serial.println(F("Only one option for 11:38:"));
    Serial.println(F("11:38 - At 11:38, she left her desk and walked to the side door of the auditorium, arriving ten minutes before noon. - Dave Eggers, The Circle"));
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
          Serial.println(F("11:40 - Did escape occur to him? … But the door was locked, and the window heavily barred with iron rods. He sat down again, and drew his journal from his pocket. On the line where these words were written, \"21st December, Saturday, Liverpool,\" he added, \"80th day, 11.40am,\" and waited. - Jules Verne, Around the World in Eighty Days"));
          return;
        case 1:
          Serial.println(F("11:40 - During the sessions at Ito he read the Lotus Sutra on mornings of play, and he now seemed to be bringing himself to order through silent meditation. Then, quickly, there came a rap of stone on board. It was twenty minutes before noon. - Yusunari Kawabata, The Master of Go "));
          return;
      } // end switch (option)

    // Codegen for 11:41 for 1 quotations:
    case 701:
      Serial.println(F("Only one option for 11:41:"));
    Serial.println(F("11:41 - Spagnola took a deep breath and started into the log again. \"Eleven forty-one: large dog craps in Dr. Yamata's Aston Martin. Twelve oh-three: dog eats two, count 'em, two of Mrs. Wittingham's Siamese cats. She just lost her husband last week; this sort of put her over the edge. We had to call Dr. Yamata in off the putting green to give her a sedative. The personal-injury lawyer in the unit next to hers was home for lunch and he came over to help. He was talking class action then, and we didn't even know who owned the dog yet.\" - Christopher Moore, Coyote Blue "));
      return;

    // Codegen for 11:42 for 1 quotations:
    case 702:
      Serial.println(F("Only one option for 11:42:"));
    Serial.println(F("11:42 - 11:42 I'm doing fine. I'm doing well. I've got the Hoover on, I'm cruising along nicely- What was that? What just went up the Hoover? Why is it making that grinding noise? Have I broken it? - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 11:43 for 0 quotations:
    case 703:
      Serial.println(F("No quotes for 11:43"));
      return;

    // Codegen for 11:44 for 1 quotations:
    case 704:
      Serial.println(F("Only one option for 11:44:"));
    Serial.println(F("11:44 - At 10.15 Arlena departed from her rondezvous, a minute or two later Patrick Redfern came down and registered surprise, annoyance, etc. Christine's task was easy enough. Keeping her own watch concealed she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the Sun "));
      return;

    // Codegen for 11:45 for 5 quotations:
    case 705:
      option = random(0, 5);
      Serial.print(F("5 options for 11:45. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("11:45 - \"...I waited till a quarter to twelve, and found then that I was in All Souls'. But I wasn't much frightened, for I thought it could be tomorrow as well.\" - Thomas Hardy, Far from the madding crowd "));
          return;
        case 1:
          Serial.println(F("11:45 - \"I will tell you the time,\" said Septimus, very slowly, very drowsily, smiling mysteriously. As he sat smiling at the dead man in the grey suit the quarter struck, the quarter to twelve. - Virginia Woolf, Mrs. Dalloway "));
          return;
        case 2:
          Serial.println(F("11:45 - As he sat smiling, the quarter struck - the quarter to twelve. - Virginia Woolf, Mrs Dalloway "));
          return;
        case 3:
          Serial.println(F("11:45 - I arrived at St. Gatien from Nice on Tuesday, the 14th of August. I was arrested at 11.45am on Thursday, the 16th by an agent de police and an inspector in plain clothes and taken to the Commissariat. - Eric Ambler, Epitaph for a Spy"));
          return;
        case 4:
          Serial.println(F("11:45 - She tucked the phone in the crook of her neck and thumbed hurriedly through her pink messages. .... Dr. Provetto, at 11:45 A.M. - Lisa Scottoline, Mistaken Identity "));
          return;
      } // end switch (option)

    // Codegen for 11:46 for 1 quotations:
    case 706:
      Serial.println(F("Only one option for 11:46:"));
    Serial.println(F("11:46 - At 10.15 Arlena departed from her rondezvous, a minute or two later Patrick Redfern came down and registered surprise, annoyance, etc. Christine's task was easy enough. Keeping her own watch concealed she asked Linda at twenty-five past eleven what time it was. Linda looked at her watch and replied that it was a quarter to twelve. - Agatha Christie, Evil under the Sun "));
      return;

    // Codegen for 11:47 for 1 quotations:
    case 707:
      Serial.println(F("Only one option for 11:47:"));
    Serial.println(F("11:47 - It was a vast plain with no one on it, neither living on the earth nor dead beneath it; and I walked a long time beneath a colourless sky, which didn't let me judge the time (my watch, set like all military watches to Berlin time, hadn't stood up to the swim and showed an eternal thirteen minutes to noon). - Jonathan Littell, The Kindly Ones"));
      return;

    // Codegen for 11:48 for 1 quotations:
    case 708:
      Serial.println(F("Only one option for 11:48:"));
    Serial.println(F("11:48 - At 11:38, she left her desk and walked to the side door of the auditorium, arriving ten minutes before noon. - Dave Eggers, The Circle"));
      return;

    // Codegen for 11:49 for 0 quotations:
    case 709:
      Serial.println(F("No quotes for 11:49"));
      return;

    // Codegen for 11:50 for 1 quotations:
    case 710:
      Serial.println(F("Only one option for 11:50:"));
    Serial.println(F("11:50 - The man who gave them to him handed him a ten-shilling note and promised him another if it were delivered at exactly ten minutes to twelve. - Agatha Christie, The Adventure of Johnnie Waverley: A Hercule Poirot Story"));
      return;

    // Codegen for 11:51 for 1 quotations:
    case 711:
      Serial.println(F("Only one option for 11:51:"));
    Serial.println(F("11:51 - The next day, at nine minutes to twelve o'clock noon, the last clock ran down and stopped. It was then placed in the town museum, as a collector's item, or museum piece, with proper ceremonies, addresses, and the like. - James Thurber, Lanterns & Lances"));
      return;

    // Codegen for 11:52 for 1 quotations:
    case 712:
      Serial.println(F("Only one option for 11:52:"));
    Serial.println(F("11:52 - At any rate, we whirled into the station with many more, just as the great clock pointed to eight minutes to twelve o'clock. \"Thank God! We are in time,\" said the young man, \"and thank you, too, my friend, and your good horse...\" - Anna Sewell, Black Beauty"));
      return;

    // Codegen for 11:53 for 0 quotations:
    case 713:
      Serial.println(F("No quotes for 11:53"));
      return;

    // Codegen for 11:54 for 1 quotations:
    case 714:
      Serial.println(F("Only one option for 11:54:"));
    Serial.println(F("11:54 - He swilled off the remains of [his beer] and looked at the clock. It was six minutes to twelve. - Patrick Hamilton, Hangover Square"));
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
          return;
        case 1:
          Serial.println(F("11:55 - It was 11:55 a.m. on April 30. - Bernstein & Woodward, All the President's Men "));
          return;
        case 2:
          Serial.println(F("11:55 - What time did you arrive at the site? It was 11:55. I remember since I happened to glance at my watch when we got there. We rode our bicycles to the bottom of the hill, as far as we could go, then climbed the rest of the way on foot. - Haruki Murakami, Kafka on the Shore"));
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
          return;
        case 1:
          Serial.println(F("11:56 - I wondered what the time is?' said the latter after a pause'. 'I don't know exactly', replied Easton, 'but it can't be far-off twelve.' - Robert Tressell, The Ragged Trousered Philanthropists"));
          return;
      } // end switch (option)

    // Codegen for 11:57 for 1 quotations:
    case 717:
      Serial.println(F("Only one option for 11:57:"));
    Serial.println(F("11:57 - I wondered what the time is?' said the latter after a pause'. 'I don't know exactly', replied Easton, 'but it can't be far-off twelve.' - Robert Tressell, The Ragged Trousered Philanthropists"));
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
          return;
        case 1:
          Serial.println(F("11:58 - Two minutes before the clock struck noon, the savage baron was on the platform to inspect the preparation for the frightful ceremony of mid-day. The block was laid forth-the hideous minister of vengeance, masked and in black, with the flaming glaive in his hand, was ready. The baron tried the edge of the blade with his finger, and asked the dreadful swordsman if his hand was sure? A nod was the reply of the man of blood. The weeping garrison and domestics shuddered and shrank from him. There was not one there but loved and pitied the gentle lady. - William Makepeace Thackeray, Burlesques "));
          return;
      } // end switch (option)

    // Codegen for 11:59 for 1 quotations:
    case 719:
      Serial.println(F("Only one option for 11:59:"));
    Serial.println(F("11:59 - There is a big grandfather clock there, and as the hands drew near to twelve I don't mind confessing I was as nervous as a cat. - Agatha Christie, The Adventure of Johnnie Waverley: A Hercule Poirot Story"));
      return;

    // Codegen for 12:00 for 14 quotations:
    case 720:
      option = random(0, 14);
      Serial.print(F("14 options for 12:00. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:00 - 'It will soon be an hour and a half,' said the girl who kept the records. The noonday siren blew. 'Exactly a minute,' she said, looking at the stopwatch of which she was so proud. - Yasunari Kawabata, The Master of Go "));
          return;
        case 1:
          Serial.println(F("12:00 - 'There's nobody here!' I insisted. 'It was yourself, Mrs. Linton: you knew it a while since.' 'Myself!' she gasped, 'and the clock is striking twelve! - Emily Brontë, Wuthering Heights "));
          return;
        case 2:
          Serial.println(F("12:00 - A cheap little clock on the wall struck twelve hurriedly, and served to begin the conversation. - Fyodor Dostoyevsky, The Brothers Karamazov "));
          return;
        case 3:
          Serial.println(F("12:00 - He had saved [the republic] and it was now in the present, alive now and everywhere in the present, and the hovering faces brightened and blurred about him, became the sound of a canal in the morning, the look of some roofs in the noon sun, and the fragrance of a certain evening flower. Here he was, home at last. Behind him were the mountains and the Sleeping Woman in the sky, and before him, like smoky flames in the sunset, the whole beautiful beloved city. - Nick Joaquin, The Woman Who Had Two Navels "));
          return;
        case 4:
          Serial.println(F("12:00 - It was precisely twelve o'clock; twelve by Big Ben; whose stroke was wafted over the northern part of London; blent with that of other clocks, mixed in a thin ethereal way with the clouds and wisps of smoke and died up there among the seagulls, twelve o'clock struck as Clarissa Dalloway laid her green dress on her bed and the Warren Smiths walked down Harley Street. Twelve was the hour of their appointment. - Virginia Woolf, Mrs Dalloway "));
          return;
        case 5:
          Serial.println(F("12:00 - It was precisely twelve o'clock; twelve by Big Ben; whose stroke was wafted over the northern part of London; blent with that of other clocks, mixed in a thin ethereal way wth the clouds and wisps of smoke and died up there among the seagulls - twelve o'clock struck as Clarissa Dalloway laid her green dress on the bed, and the Warren Smiths walked down Harley Street. - Virginia Woolf, Mrs Dalloway "));
          return;
        case 6:
          Serial.println(F("12:00 - It was precisely twelve o’clock; twelve by Big Ben; whose stroke was wafted over the northern part of London; blent with that of other clocks, mixed in a thin ethereal way with the clouds and wisps of smoke and died up there among the seagulls—twelve o’clock struck as Clarissa Dalloway laid her green dress on her bed, and the Warren Smiths walked down Harley Street - Virginia Woolf, Mrs Dalloway "));
          return;
        case 7:
          Serial.println(F("12:00 - It was precisely twelve o’clock; twelve by Big Ben; whose stroke was wafted over the northern part of London; blent with that of other clocks, mixed in a thin ethereal way with the clouds and wisps of smoke, and died up there among the seagulls. - Virginia Woolf, Mrs Dalloway"));
          return;
        case 8:
          Serial.println(F("12:00 - Noon found him momentarily alone, while the family prepared lunch in the kitchen. The cracks in the ceiling widened into gaps. The locked wheels of his bed sank into new fault lines opening in the oak floor beneath the rug. At any moment the floor was going to give. - Paul Harding, tinkers "));
          return;
        case 9:
          Serial.println(F("12:00 - On Friday noon, July the twentieth, 1714, the finest bridge in all Peru broke and precipitated five travellers into the gulf below. - Thornton Wilder, The Bridge of San Luis Rey "));
          return;
        case 10:
          Serial.println(F("12:00 - Roaring noon. In a well-fanned Forty-second Street cellar I met Gatsby for lunch. - F. Scott Fitzgerald, The Great Gatsby "));
          return;
        case 11:
          Serial.println(F("12:00 - The Birds begun at Four o'clock — Their period for Dawn — A Music numerous as space — But neighboring as Noon — - Emily Dickinson, The Birds begun at Four o'clock"));
          return;
        case 12:
          Serial.println(F("12:00 - The Oxen Christmas Eve, and twelve of the clock. \"Now they are all on their knees,\" An elder said as we sat in a flock By the embers in hearthside ease. We pictured the meek mild creatures where They dwelt in their strawy pen, Nor did it occur to one of us there To doubt they were kneeling then. So fair a fancy few would weave In these years! Yet, I feel, If someone said on Christmas Eve, \"Come; see the oxen kneel \"In the lonely barton by yonder coomb Our childhood used to know,\" I should go with him in the gloom, Hoping it might be so. - Thomas Hardy, The Oxen "));
          return;
        case 13:
          Serial.println(F("12:00 - Then came the stroke of noon, and all these working and professional people dispersed like a trampled anthill into all the streets and directions. The white bridge was swarming with nimble dots. And when you considered that each dot had a mouth with which it was now planning to eat lunch, you couldn't help bursting into laughter. - Robert Walser, The Tanners "));
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
          Serial.println(F("12:01 - And on all sides there were the clocks. Conrad noticed them immediately, at every street corner, over every archway, three quarters of the way up the sides of buildings, covering every conceivable angle of approach. Most of them were too high off the ground to be reached by anything less than a fireman's ladder and still retained their hands. All registered the same time: 12:01. Conrad looked at his wristwatch, noted that it was just 2:45. ‘‘They were driven by a master dock’’ Stacey told him. ‘‘When that stopped, they all ceased at the same moment. One minute after midnight, thirty-seven years ago.’’ - J.G. Ballard, Chronopolis "));
          return;
        case 1:
          Serial.println(F("12:01 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. - Jonathan Trigell, Boy A"));
          return;
        case 2:
          Serial.println(F("12:01 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. A was waiting for it to read 12:12, he hoped there would be some sense of cosmic rightness when it did. - Jonathan Trigell, Boy A "));
          return;
      } // end switch (option)

    // Codegen for 12:02 for 1 quotations:
    case 722:
      Serial.println(F("Only one option for 12:02:"));
    Serial.println(F("12:02 - It had struck twelve o'clock two minutes and a quarter. The Baron's footman hastily seized a large goblet, and gasped with terror as he filled it with hot, spiced wine. \"Tis past the hour, 'tis past,\" he groaned in anguish, \"and surely I shall now get the red hot poker the Baron hath so often promised me, oh! Woe is me! Would that I had prepared the Baron's lunch before!\" - Lewis Carroll, Crundle Castle"));
      return;

    // Codegen for 12:03 for 1 quotations:
    case 723:
      Serial.println(F("Only one option for 12:03:"));
    Serial.println(F("12:03 - At 12.03 the sun has already punched its ticket. Sinking, it stains the cobbles and stucco of the platz in a violin-coloured throb of light that you would have to be a stone not to find poignant. - Michael Chabon, The Yiddish Policemen's Union"));
      return;

    // Codegen for 12:04 for 1 quotations:
    case 724:
      Serial.println(F("Only one option for 12:04:"));
    Serial.println(F("12:04 - Though by then it was by Tina's own desk clock 12.04pm I was always touched when, out of a morning's worth of repetition, secretaries continued to answer with good mornings for an hour or so into the afternoon, just as people often date things with the previous year well into February; sometimes they caught their mistake and went into a \"This is not my day\" or \"Where is my head?\" escape routine; but in a way they were right, since the true tone of afternoons does not take over in offices until nearly two. - Nicholson Baker, The Mezzanine"));
      return;

    // Codegen for 12:05 for 1 quotations:
    case 725:
      Serial.println(F("Only one option for 12:05:"));
    Serial.println(F("12:05 - A few minutes' light around noon is all that you need to discover the error, and re-set the clock – provide that you bother to go up and make the observation. - Neal Stephenson, Odalisque: The Baroque Cycle #3 "));
      return;

    // Codegen for 12:06 for 1 quotations:
    case 726:
      Serial.println(F("Only one option for 12:06:"));
    Serial.println(F("12:06 - A few minutes' light around noon is all that you need to discover the error, and re-set the clock – provide that you bother to go up and make the observation. - Neal Stephenson, Odalisque: The Baroque Cycle #3 "));
      return;

    // Codegen for 12:07 for 1 quotations:
    case 727:
      Serial.println(F("Only one option for 12:07:"));
    Serial.println(F("12:07 - On a Monday Simon Hirsch was going to break his leg at seven minutes after 12, noon, and as soon as Satan told us the day before, Seppi went to betting with me that it would not happen, and soon they got excited and went to betting with me themselves. - Mark Twain, The Chronicle of Young Satan"));
      return;

    // Codegen for 12:08 for 1 quotations:
    case 728:
      Serial.println(F("Only one option for 12:08:"));
    Serial.println(F("12:08 - When a clock struck noon in Washington, D.C., the time was 12:08 in Philadephia, 12:12 in new York, and 12:24 in Boston. - Matthew Goodman, Eighty Days"));
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
          return;
        case 1:
          Serial.println(F("12:10 - They paid for only one room and kept Einstein with them because they were not going to need privacy for lovemaking. Exhausted, Travis barely managed to kiss Nora before falling into a deep sleep. He dreamed of things with yellow eyes, misshapen heads, and crocodile mouths full of sharks’ teeth. He woke five hours later, at twelve-ten Thursday afternoon. - Dean Koontz, Watchers "));
          return;
      } // end switch (option)

    // Codegen for 12:11 for 1 quotations:
    case 731:
      Serial.println(F("Only one option for 12:11:"));
    Serial.println(F("12:11 - At 12:11 there was a knock on the door. It was Terry, A could tell. He hadn't known Terry long, but there was something calmer, more patient, that separated Terry's knocks from the rest of the staff. He knocked from genuine politeness, not formality. \"Come in,\" A said, although the lock was on the other side. Terry did. \"It's your mother,\" he said. \"There's no easy way to say this.\" Though he had just used the easiest, because A now knew the rest. A’s face froze, as it tried to catch up, as it tried to register the news. Then it crumpled, and while he considered this fresh blow, the tears came. - Jonathan Trigell, Boy A "));
      return;

    // Codegen for 12:12 for 1 quotations:
    case 732:
      Serial.println(F("Only one option for 12:12:"));
    Serial.println(F("12:12 - It was the twelfth of December, the twelfth month. A was twelve. The electric clock/radio by his bedside table said 12:01. A was waiting for it to read 12:12, he hoped there would be some sense of cosmic rightness when it did. - Jonathan Trigell, Boy A"));
      return;

    // Codegen for 12:13 for 0 quotations:
    case 733:
      Serial.println(F("No quotes for 12:13"));
      return;

    // Codegen for 12:14 for 1 quotations:
    case 734:
      Serial.println(F("Only one option for 12:14:"));
    Serial.println(F("12:14 - She left London on the twelve-fourteen from Paddington, arriving at Bristol (where she had to change) at two-fifty. - Agatha Christie, The Plymouth Express"));
      return;

    // Codegen for 12:15 for 2 quotations:
    case 735:
      option = random(0, 2);
      Serial.print(F("2 options for 12:15. Picking option "));
      Serial.print(option);
      Serial.println(":");
      switch (option) {
        case 0:
          Serial.println(F("12:15 - Very well, dear,' she said. 'I caught the 10.20 to Eastnor, which isn't a bad train, if you ever want to go down there. I arrived at a quarter past twelve, and went straight up to the house--you've never seen the house, of course? It's quite charming--and told the butler that I wanted to see Mr Ford on business. I had taken the precaution to find out that he was not there. He is at Droitwich.' - P.G. Wodehouse, The Little Nugget "));
          return;
        case 1:
          Serial.println(F("12:15 - What shall I think of that's liberating and refreshing? I'm in the mood when I open my window at night and look at the stars. Unfortunately it's 12.15 on a grey dull day, the aeroplanes are active - Virginia Woolf, A Writer's Diary: Being Extracts from the Diary of Virgina Woolf"));
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
          Serial.println(F("12:20 - By twelve-twenty in the afternoon, Vince was seated in a rattan chair with comfortable yellow and green cushions at a table by the windows in that same restaurant. He’d spotted Haines on entering. The doctor was at another window table, three away from Vince, half-screened by a potted palm. Haines was eating shrimp and drinking margaritas with a stunning blonde. She was wearing white slacks and a gaily striped tube-top, and half the men in the place were staring at her. - Dean Koontz, Watchers "));
          return;
        case 1:
          Serial.println(F("12:20 - It is 12:20 in New York a Friday three days after Bastille day, yes it is 1959 and I go get a shoeshine because I will get off the 4:19 in Easthampton at 7:15 and then go straight to dinner and I don’t know the people who will feed me - Frank O'Hara, The Day Lady Died"));
          return;
      } // end switch (option)

    // Codegen for 12:21 for 1 quotations:
    case 741:
      Serial.println(F("Only one option for 12:21:"));
    Serial.println(F("12:21 - Jake think of something. PLEASE! Twelve twenty-one. - Stephen King, 11/22/63"));
      return;

    // Codegen for 12:22 for 1 quotations:
    case 742:
      Serial.println(F("Only one option for 12:22:"));
    Serial.println(F("12:22 - By twenty-two minutes past twelve we leave, much too soon for our desires, this delightful spot, where the pilgrims are in the habit of bathing who come to visit the Jordan. - Félicien de Saulcy, Narrative of a Journey round the Dead Sea and in the Bible lands in 1850 and 1851"));
      return;

    // Codegen for 12:23 for 0 quotations:
    case 743:
      Serial.println(F("No quotes for 12:23"));
      return;

    // Codegen for 12:24 for 1 quotations:
    case 744:
      Serial.println(F("Only one option for 12:24:"));
    Serial.println(F("12:24 - 12:24 My legs are in total agony. I've been kneeling on hard tiles, cleaning the bath, for what seems like hours. There are little ridges where the tiles have dug into my knees, and I'm boiling hot and the cleaning chemicals are making me cough. All I want is a rest. But I can't stop for a moment. I am so behind ... - Sophie Kinsella, The Undomestic Goddess "));
      return;

    // Codegen for 12:25 for 1 quotations:
    case 745:
      Serial.println(F("Only one option for 12:25:"));
    Serial.println(F("12:25 - Boys, do it now. God's time is 12.25. - James Joyce, Ulysses"));
      return;

    // Codegen for 12:26 for 1 quotations:
    case 746:
      Serial.println(F("Only one option for 12:26:"));
    Serial.println(F("12:26 - 12.25pm. 26. 27. Every time Billy saved a shot he looked heartbroken - Barry Hines, A Kestrel For a Knave"));
      return;

    // Codegen for 12:27 for 1 quotations:
    case 747:
      Serial.println(F("Only one option for 12:27:"));
    Serial.println(F("12:27 - 12.25pm. 26. 27. Every time Billy saved a shot he looked heartbroken - Barry Hines, A Kestrel For a Knave"));
      return;

    // Codegen for 12:28 for 1 quotations:
    case 748:
      Serial.println(F("Only one option for 12:28:"));
    Serial.println(F("12:28 - The DRINK CHEER-UP COFFEE wall clock read 12.28. - Stephen King, 11/22/63"));
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
          Serial.println(F("12:30 - \"You'll never believe this but (in Spain) they are two hours late for ever meal - two hours Fanny - (can we lunch at half-past twelve today?)\" - Nancy Mitford, Love in a Cold Climate "));
          return;
        case 1:
          Serial.println(F("12:30 - 12.30 p.m. Lunch - Mark Haddon, The Curious Incident of the Dog in the Night-time "));
          return;
        case 2:
          Serial.println(F("12:30 - At half past twelve, when Catherine’s anxious attention to the weather was over and she could no longer claim any merit from its amendment, the sky began voluntarily to clear. A gleam of sunshine took her quite by surprise; she looked round; the clouds were parting, and she instantly returned to the window to watch over and encourage the happy appearance. Ten minutes more made it certain that a bright afternoon would succeed, and justified the opinion of Mrs. Allen, who had “always thought it would clear up.” - Jane Austen, Northanger Abbey "));
          return;
        case 3:
          Serial.println(F("12:30 - Tuesday, 12.30pm… Baker, California… Into the Ballantine Ale now, zombie drunk and nervous. I recognize this feeling: three or four days of booze, drugs, sun, no sleep and burned out adrenalin reserves – a giddy, quavering sort of high that means the crash is coming. But when? How much longer? - Hunter S. Thompson, Fear and Loathing in Las Vegas"));
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
          Serial.println(F("12:32 - 12:30 What is wrong with this bleach bottle? Which way is the nozzle pointing, anyway? I'm turning it round in confusion, peering at the arrows on the plastic ... Why won't anything come out? OK, I'm going to squeeze it really, really hard- That nearly got my eye. 12:32 FUCK. What has it done to my HAIR? - Sophie Kinsella, The Undomestic Goddess "));
          return;
        case 1:
          Serial.println(F("12:32 - A chutney-biting brigadier named Boyd-Boyd fixed an appointment on the 'phone with Oxted, at Hornborough Station, for the twelve thirty-two. He was to deliver the goods. - Stacy Aumonier, Extremely Entertaining Short Stories"));
          return;
      } // end switch (option)

    // Codegen for 12:33 for 1 quotations:
    case 753:
      Serial.println(F("Only one option for 12:33:"));
    Serial.println(F("12:33 - It's 12.33 now and I could do it, the station is just down that side road there. - Dorothy L. Sayers, Five Red Herrings"));
      return;

    // Codegen for 12:34 for 0 quotations:
    case 754:
      Serial.println(F("No quotes for 12:34"));
      return;

    // Codegen for 12:35 for 1 quotations:
    case 755:
      Serial.println(F("Only one option for 12:35:"));
    Serial.println(F("12:35 - As surely as Apthorpe was marked for early promotion, Trimmer was marked for ignominy. That morning he had appeared at the precise time stated in orders. Everyone else had been waiting five minutes and Colour Sergeant Cork called out the marker just as Trimmer appeared. So it was twelve-thirty-five when they were dismissed. - Evelyn Waugh, Men At Arms"));
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
    Serial.println(F("12:39 - Next, he remembered that the morrow of Christmas would be the twenty-seventh day of the moon, and that consequently high water would be at twenty-one minutes past three, the half-ebb at a quarter past seven, low water at thirty-three minutes past nine, and half flood at thirty-nine minutes past twelve. - Victor Hugo, The Toilers of the Sea"));
      return;

    // Codegen for 12:40 for 1 quotations:
    case 760:
      Serial.println(F("Only one option for 12:40:"));
    Serial.println(F("12:40 - A little ormolu clock in the outer corridor indicated twenty minutes to one. The car was due at one-fifteen. Thirty-five minutes: oh, to escape for only that brief period! - Stacy Aumonier, Extremely Entertaining Short Stories (The Octave of Jealousy)"));
      return;

    // Codegen for 12:41 for 0 quotations:
    case 761:
      Serial.println(F("No quotes for 12:41"));
      return;

    // Codegen for 12:42 for 1 quotations:
    case 762:
      Serial.println(F("Only one option for 12:42:"));
    Serial.println(F("12:42 - The butt had been growing warm in her fingers; now the glowing end stung her skin. She crushed the cigarette out and stood, brushing ash from her black skirt. It was eighteen minutes to one. She went to the house phone and called his room. The telephone rang and rang, but there was no answer. - Herman Wouk, Marjorie Morningstar"));
      return;

    // Codegen for 12:43 for 1 quotations:
    case 763:
      Serial.println(F("Only one option for 12:43:"));
    Serial.println(F("12:43 - Died five minutes ago, you say? he asked. His eye went to the watch on his wrist. Twelve-forty-three, he wrote on the blotter. - Agatha Christie, A Pocket Full of Rye"));
      return;

    // Codegen for 12:44 for 1 quotations:
    case 764:
      Serial.println(F("Only one option for 12:44:"));
    Serial.println(F("12:44 - It is around quarter to one. No sunlight comes into the room now through the windows at right. Outside the day is fine but increasingly sultry, with a faint haziness in the air which softens the glare of the sun. - Eugene O'Neil, Long Day's Journey Into Night "));
      return;

    // Codegen for 12:45 for 1 quotations:
    case 765:
      Serial.println(F("Only one option for 12:45:"));
    Serial.println(F("12:45 - The boy handed in a dispatch. The Professor closed the door again, and after looking at the direction, opened it and read aloud. \"Look out for D. He has just now, 12:45, come from Carfax hurriedly and hastened towards the South. He seems to be going the round and may want to see you: Mina\" - Bram Stoker, Dracula "));
      return;

    // Codegen for 12:46 for 1 quotations:
    case 766:
      Serial.println(F("Only one option for 12:46:"));
    Serial.println(F("12:46 - It is around quarter to one. No sunlight comes into the room now through the windows at right. Outside the day is fine but increasingly sultry, with a faint haziness in the air which softens the glare of the sun. - Eugene O'Neil, Long Day's Journey Into Night "));
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
      return;

    // Codegen for 12:50 for 1 quotations:
    case 770:
      Serial.println(F("Only one option for 12:50:"));
    Serial.println(F("12:50 - So presently Bert was sent up to the top of the house to look at a church clock which was visible therefrom, and when he came down he reported that it was ten minutes to one. - Robert Tressell, The Ragged Trousered Philanthropists"));
      return;

    // Codegen for 12:51 for 0 quotations:
    case 771:
      Serial.println(F("No quotes for 12:51"));
      return;

    // Codegen for 12:52 for 1 quotations:
    case 772:
      Serial.println(F("Only one option for 12:52:"));
    Serial.println(F("12:52 - The nightclub stood on the junction, flamboyant, still. It was 12.52. - Rupert Thomson, Dreams of Leaving"));
      return;

    // Codegen for 12:53 for 1 quotations:
    case 773:
      Serial.println(F("Only one option for 12:53:"));
    Serial.println(F("12:53 - Aboot twelve miles. We ought tae pass her at Pinmore. She's due there at 12:53. - Dorothy L. Sayers, Five Red Herrings"));
      return;

    // Codegen for 12:54 for 1 quotations:
    case 774:
      Serial.println(F("Only one option for 12:54:"));
    Serial.println(F("12:54 - I listen to the different boats' horns, hoping to learn what kind of boat I'm hearing and what the signal means: is the boat leaving or entering the harbor; is it the ferry, or a whale-watching boat, or a fishing boat? At 5:33 pm there is a blast of two deep, resonant notes a major third apart. On another day there is the same blast at 12:54 pm. On another, exactly 8:00 am. - Lydia Davis, Varieties of Disturbance"));
      return;

    // Codegen for 12:55 for 1 quotations:
    case 775:
      Serial.println(F("Only one option for 12:55:"));
    Serial.println(F("12:55 - The inspector glanced at the clock. Five to one. A busy morning. - Ngaio Marsh, A Man Lay Dead"));
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
      return;

    // Codegen for 12:59 for 1 quotations:
    case 779:
      Serial.println(F("Only one option for 12:59:"));
    Serial.println(F("12:59 - And I had been looking at my watch since the train had started at 12.59pm - Mark Haddon, The Curious Incident of the Dog in the Night-Time"));
      return;

  } // end switch (minute)

} // end print_minute()
