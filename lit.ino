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
          paint.Paint_DrawString_EN(130, 10, "As", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(142, 22, "was striking", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(154, 34, "blows upon the", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(190, 46, "air, Dorian Gray,", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 58, "commonly, and with", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(178, 70, "muffler wrapped", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(190, 82, "his throat, crept", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(34, 10, "midnight", &Font12, BLACK, WHTIE);
          paint.Paint_DrawString_EN(34, 10, "- Oscar Wilde, The Picture of Dorian Gray ", &Font12, WHTIE, BLACK);
          return;
        case 1:
          Serial.println(F("00:00 - \"But wait till I tell you,\" he said. :We had a midnight lunch too after all the jollification and when we sallied forth it was blue o'clock the morning after the night before\" - James Joyce, Ulysses "));
          paint.Paint_DrawString_EN(178, 10, "\"But wait till I", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 22, "you,\" he said. :We", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(118, 34, "a", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 46, "lunch too after all", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 58, "jollification and", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 70, "we sallied forth it", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(178, 82, "blue o'clock the", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(166, 94, "after the night", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(22, 34, "midnight", &Font12, BLACK, WHTIE);
          paint.Paint_DrawString_EN(22, 34, "- James Joyce, Ulysses ", &Font12, WHTIE, BLACK);
          return;
        case 2:
          Serial.println(F("00:00 - \"Midnight,\" you said. What is midnight to the young? And suddenly a festive blaze was flung Across five cedar trunks, snow patches showed, And a patrol car on our bumpy road Came to a crunching stop. Retake, retake! - Vladimir Nabokov, Pale Fire "));
          paint.Paint_DrawString_EN(202, 10, "\"Midnight,\" you", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(178, 22, "What is", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(178, 34, "to the young? And", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 46, "a festive blaze was", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(190, 58, "Across five cedar", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(142, 70, "snow patches", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(190, 82, "And a patrol car on", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(202, 94, "bumpy road Came to a", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(154, 106, "stop. Retake,", &Font12, WHITE, BLACK);
          paint.Paint_DrawString_EN(82, 22, "midnight", &Font12, BLACK, WHTIE);
          paint.Paint_DrawString_EN(82, 22, "- Vladimir Nabokov, Pale Fire ", &Font12, WHTIE, BLACK);
          return;
        case 3:
          Serial.println(F("00:00 - That a man who could hardly see anything more than two feet away from him could be employed as a security guard suggested to me that our job was not to secure anything but to report for work every night, fill the bulky ledger with cryptic remarks like 'Patrolled perimeter 12.00 pm, No Incident' and go to the office every fortnight for our wages and listen to the talkative Ms Elgassier. - Ike Oguine, A Squatter's Tale "));
