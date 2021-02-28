-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND street = "Chamberlin Street"; -- Select the crime who ocurred on july 28 on Chamberlin StreetJ

id | year | month | day | street
295 | 2020 | 7 | 28 | Chamberlin Street |
| description

ENG:
Theft of the CS50 duck took place at 10:15am at the Chamberlin Street courthouse.
Interviews were conducted today with three witnesses who were present at the time — each of their interview transcripts mentions the courthouse.

PORT:
O roubo do pato CS50 ocorreu às 10h15 no tribunal da Chamberlin Street.
As entrevistas foram realizadas hoje com três testemunhas que estavam presentes no momento - cada uma das transcrições das entrevistas menciona o tribunal.

SELECT * FROM courthouse_security_logs WHERE day = 28 AND month = 7; -- Select security logs from courthouse

id | year | month | day | hour | minute | activity | license_plate
219 | 2020 | 7 | 28 | 8 | 2 | entrance | 1M92998
220 | 2020 | 7 | 28 | 8 | 2 | entrance | N507616
221 | 2020 | 7 | 28 | 8 | 2 | exit | 1M92998
222 | 2020 | 7 | 28 | 8 | 2 | exit | N507616
223 | 2020 | 7 | 28 | 8 | 7 | entrance | 7Z8B130
224 | 2020 | 7 | 28 | 8 | 7 | exit | 7Z8B130
225 | 2020 | 7 | 28 | 8 | 13 | entrance | 47MEFVA
226 | 2020 | 7 | 28 | 8 | 13 | exit | 47MEFVA
227 | 2020 | 7 | 28 | 8 | 15 | entrance | D965M59
228 | 2020 | 7 | 28 | 8 | 15 | entrance | HW0488P
229 | 2020 | 7 | 28 | 8 | 15 | exit | D965M59
230 | 2020 | 7 | 28 | 8 | 15 | exit | HW0488P
231 | 2020 | 7 | 28 | 8 | 18 | entrance | L93JTIZ
232 | 2020 | 7 | 28 | 8 | 23 | entrance | 94KL13X
233 | 2020 | 7 | 28 | 8 | 25 | entrance | L68E5I0
234 | 2020 | 7 | 28 | 8 | 25 | entrance | HOD8639
235 | 2020 | 7 | 28 | 8 | 25 | exit | HOD8639
236 | 2020 | 7 | 28 | 8 | 34 | exit | L68E5I0
237 | 2020 | 7 | 28 | 8 | 34 | entrance | 1106N58
238 | 2020 | 7 | 28 | 8 | 34 | entrance | W2CT78U
239 | 2020 | 7 | 28 | 8 | 34 | exit | W2CT78U
240 | 2020 | 7 | 28 | 8 | 36 | entrance | 322W7JE
241 | 2020 | 7 | 28 | 8 | 38 | entrance | 3933NUH
242 | 2020 | 7 | 28 | 8 | 38 | exit | 3933NUH
243 | 2020 | 7 | 28 | 8 | 42 | entrance | 0NTHK55
244 | 2020 | 7 | 28 | 8 | 44 | entrance | 1FBL6TH
245 | 2020 | 7 | 28 | 8 | 44 | exit | 1FBL6TH
246 | 2020 | 7 | 28 | 8 | 49 | entrance | P14PE2Q
247 | 2020 | 7 | 28 | 8 | 49 | exit | P14PE2Q
248 | 2020 | 7 | 28 | 8 | 50 | entrance | 4V16VO0
249 | 2020 | 7 | 28 | 8 | 50 | exit | 4V16VO0
250 | 2020 | 7 | 28 | 8 | 57 | entrance | 8LLB02B
251 | 2020 | 7 | 28 | 8 | 57 | exit | 8LLB02B
252 | 2020 | 7 | 28 | 8 | 59 | entrance | O784M2U
253 | 2020 | 7 | 28 | 8 | 59 | exit | O784M2U
254 | 2020 | 7 | 28 | 9 | 14 | entrance | 4328GD8
255 | 2020 | 7 | 28 | 9 | 15 | entrance | 5P2BI95
256 | 2020 | 7 | 28 | 9 | 20 | entrance | 6P58WS2
257 | 2020 | 7 | 28 | 9 | 28 | entrance | G412CB7
258 | 2020 | 7 | 28 | 10 | 8 | entrance | R3G7486
259 | 2020 | 7 | 28 | 10 | 14 | entrance | 13FNH73
260 | 2020 | 7 | 28 | 10 | 16 | exit | 5P2BI95
261 | 2020 | 7 | 28 | 10 | 18 | exit | 94KL13X
262 | 2020 | 7 | 28 | 10 | 18 | exit | 6P58WS2
263 | 2020 | 7 | 28 | 10 | 19 | exit | 4328GD8
264 | 2020 | 7 | 28 | 10 | 20 | exit | G412CB7
265 | 2020 | 7 | 28 | 10 | 21 | exit | L93JTIZ
266 | 2020 | 7 | 28 | 10 | 23 | exit | 322W7JE
267 | 2020 | 7 | 28 | 10 | 23 | exit | 0NTHK55
268 | 2020 | 7 | 28 | 10 | 35 | exit | 1106N58
269 | 2020 | 7 | 28 | 10 | 42 | entrance | NRYN856
270 | 2020 | 7 | 28 | 10 | 44 | entrance | WD5M8I6
271 | 2020 | 7 | 28 | 10 | 55 | entrance | V47T75I
272 | 2020 | 7 | 28 | 11 | 6 | entrance | 4963D92
273 | 2020 | 7 | 28 | 11 | 13 | entrance | C194752
274 | 2020 | 7 | 28 | 11 | 52 | entrance | 94MV71O
275 | 2020 | 7 | 28 | 12 | 20 | entrance | FLFN3W0
276 | 2020 | 7 | 28 | 12 | 49 | entrance | 207W38T
277 | 2020 | 7 | 28 | 13 | 8 | entrance | RS7I6A0
278 | 2020 | 7 | 28 | 13 | 30 | entrance | 4468KVT
279 | 2020 | 7 | 28 | 13 | 42 | entrance | NAW9653
280 | 2020 | 7 | 28 | 14 | 18 | exit | NAW9653
281 | 2020 | 7 | 28 | 15 | 6 | exit | RS7I6A0
282 | 2020 | 7 | 28 | 15 | 16 | exit | 94MV71O
283 | 2020 | 7 | 28 | 16 | 6 | exit | WD5M8I6
284 | 2020 | 7 | 28 | 16 | 38 | exit | 4468KVT
285 | 2020 | 7 | 28 | 16 | 42 | exit | 207W38T
286 | 2020 | 7 | 28 | 16 | 47 | exit | C194752
287 | 2020 | 7 | 28 | 17 | 11 | exit | NRYN856
288 | 2020 | 7 | 28 | 17 | 15 | exit | 13FNH73
289 | 2020 | 7 | 28 | 17 | 16 | exit | V47T75I
290 | 2020 | 7 | 28 | 17 | 18 | exit | R3G7486
291 | 2020 | 7 | 28 | 17 | 36 | exit | FLFN3W0
292 | 2020 | 7 | 28 | 17 | 47 | exit | 4963D92

SELECT * FROM interviews WHERE day = 28 AND month = 7;

id | name | year | month | day | transcript
158 | Jose | 2020 | 7 | 28 | “Ah,” said he, “I forgot that I had not seen you for some weeks. It is a little souvenir from the King of Bohemia in return for my assistance in the case of the Irene Adler papers.”
159 | Eugene | 2020 | 7 | 28 | “I suppose,” said Holmes, “that when Mr. Windibank came back from France he was very annoyed at your having gone to the ball.”
160 | Barbara | 2020 | 7 | 28 | “You had my note?” he asked with a deep harsh voice and a strongly marked German accent. “I told you that I would call.” He looked from one to the other of us, as if uncertain which to address.
161 | Ruth | 2020 | 7 | 28 | Sometime within ten minutes of the theft, I saw the thief get into a car in the courthouse parking lot and drive away. If you have security footage from the courthouse parking lot, you might want to look for cars that left the parking lot in that time frame.
--important--
162 | Eugene | 2020 | 7 | 28 | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at the courthouse, I was walking by the ATM on Fifer Street and saw the thief there withdrawing some money.
--important--
163 | Raymond | 2020 | 7 | 28 | As the thief was leaving the courthouse, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket.

SELECT * FROM atm_transactions WHERE day = 28 AND month = 7 AND atm_location = "Fifer Street";

id | account_number | year | month | day | atm_location | transaction_type | amount
246 | 28500762 | 2020 | 7 | 28 | Fifer Street | withdraw | 48
264 | 28296815 | 2020 | 7 | 28 | Fifer Street | withdraw | 20
266 | 76054385 | 2020 | 7 | 28 | Fifer Street | withdraw | 60
267 | 49610011 | 2020 | 7 | 28 | Fifer Street | withdraw | 50
269 | 16153065 | 2020 | 7 | 28 | Fifer Street | withdraw | 80
275 | 86363979 | 2020 | 7 | 28 | Fifer Street | deposit | 10
288 | 25506511 | 2020 | 7 | 28 | Fifer Street | withdraw | 20
313 | 81061156 | 2020 | 7 | 28 | Fifer Street | withdraw | 30
336 | 26013199 | 2020 | 7 | 28 | Fifer Street | withdraw | 35

SELECT * FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND atm_location = "Fifer Street");

account_number | person_id | creation_year
49610011 | 686048 | 2010
86363979 | 948985 | 2010
26013199 | 514354 | 2012
16153065 | 458378 | 2012
28296815 | 395717 | 2014
25506511 | 396669 | 2014
28500762 | 467400 | 2014
76054385 | 449774 | 2015
81061156 | 438727 | 2018

SELECT * FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND atm_location = "Fifer Street");

id | name | phone_number | passport_number | license_plate
395717 | Bobby | (826) 555-1652 | 9878712108 | 30G67EN
396669 | Elizabeth | (829) 555-5269 | 7049073643 | L93JTIZ
438727 | Victoria | (338) 555-6650 | 9586786673 | 8X428L0
449774 | Madison | (286) 555-6063 | 1988161715 | 1106N58
458378 | Roy | (122) 555-4581 | 4408372428 | QX4YZN3
467400 | Danielle | (389) 555-5198 | 8496433585 | 4328GD8
514354 | Russell | (770) 555-1861 | 3592750733 | 322W7JE
686048 | Ernest | (367) 555-5533 | 5773159633 | 94KL13X
948985 | Robert | (098) 555-1164 | 8304650265 | I449449

POSSIBLE NAMES
Bobby
Elizabeth,
Victoria
Madison
Roy
Danielle
Russell
Ernest
Robert

SELECT * FROM phone_calls WHERE day = 28 AND month = 7 AND duration < 60; --Because of the Raymond interview

id | caller | receiver | year | month | day | duration
221 | (130) 555-0289 | (996) 555-8899 | 2020 | 7 | 28 | 51
224 | (499) 555-9472 | (892) 555-8872 | 2020 | 7 | 28 | 36
233 | (367) 555-5533 | (375) 555-8161 | 2020 | 7 | 28 | 45 
251 | (499) 555-9472 | (717) 555-1342 | 2020 | 7 | 28 | 50
254 | (286) 555-6063 | (676) 555-6554 | 2020 | 7 | 28 | 43
255 | (770) 555-1861 | (725) 555-3243 | 2020 | 7 | 28 | 49
261 | (031) 555-6622 | (910) 555-3251 | 2020 | 7 | 28 | 38
279 | (826) 555-1652 | (066) 555-9701 | 2020 | 7 | 28 | 55
281 | (338) 555-6650 | (704) 555-2131 | 2020 | 7 | 28 | 54

SELECT * FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE day = 28 AND month = 7 AND duration < 60);

id | name | phone_number | passport_number | license_plate
395717 | Bobby | (826) 555-1652 | 9878712108 | 30G67EN
398010 | Roger | (130) 555-0289 | 1695452385 | G412CB7
438727 | Victoria | (338) 555-6650 | 9586786673 | 8X428L0
449774 | Madison | (286) 555-6063 | 1988161715 | 1106N58
514354 | Russell | (770) 555-1861 | 3592750733 | 322W7JE
560886 | Evelyn | (499) 555-9472 | 8294398571 | 0NTHK55
686048 | Ernest | (367) 555-5533 | 5773159633 | 94KL13X
907148 | Kimberly | (031) 555-6622 | 9628244268 | Q12B3Z3

POSSIBLE NAMES ATT:
Ernest
Bobby
Madison
Russel

SELECT * FROM flights WHERE day = 29 and month = 7;

id | origin_airport_id | destination_airport_id | year | month | day | hour | minute
18 | 8 | 6 | 2020 | 7 | 29 | 16 | 0
23 | 8 | 11 | 2020 | 7 | 29 | 12 | 15
36 | 8 | 4 | 2020 | 7 | 29 | 8 | 20
43 | 8 | 1 | 2020 | 7 | 29 | 9 | 30
53 | 8 | 9 | 2020 | 7 | 29 | 15 | 20

EARLIEST = 36 | 8 | 4 | 2020 | 7 | 29 | 8 | 20

SELECT * FROM passengers WHERE flight_id = 36;

flight_id | passport_number | seat
36 | 7214083635 | 2A
36 | 1695452385 | 3B
36 | 5773159633 | 4A
36 | 1540955065 | 5C
36 | 8294398571 | 6C
36 | 1988161715 | 6D
36 | 9878712108 | 7A
36 | 8496433585 | 7B

SELECT name FROM people WHERE passport_number IN (SELECT passport_number FROM passengers WHERE flight_id = 36);

name
Bobby
Roger
Madison
Danielle
Evelyn
Edward
Ernest
Doris

POSSIBLE NAMES ATT:
Ernest
Bobby
Madison

SELECT name FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND atm_location = "Fifer Street"));

name
Bobby
Elizabeth
Victoria
Madison
Roy
Danielle
Russell
Ernest
Robert

POSSIBLE NAMES ATT
Ernest id 686048 license plate = 94KL13X bank account = 49610011
Madison id 449774 license plate = 1106N58 bank account = 76054385

SELECT * FROM courthouse_security_logs WHERE day = 28 AND month = 7 AND (license_plate = "94KL13X" OR license_plate = "1106N58");

id | year | month | day | hour | minute | activity | license_plate
232 | 2020 | 7 | 28 | 8 | 23 | entrance | 94KL13X
237 | 2020 | 7 | 28 | 8 | 34 | entrance | 1106N58
261 | 2020 | 7 | 28 | 10 | 18 | exit | 94KL13X
268 | 2020 | 7 | 28 | 10 | 35 | exit | 1106N58

Ruth said the theft leave from the courthouse about 10 minutos after the theft so Ernest is the Theft

SELECT * FROM airports WHERE id = (SELECT destination_airport_id FROM flights WHERE id = 36);

id | abbreviation | full_name | city
4 | LHR | Heathrow Airport | London

The thieft scaped to LONDON

(375) 555-8161 Accomplice phone

SELECT name FROM people WHERE phone_number = "(375) 555-8161";

name
Berthold

Accomplice name = Berthold