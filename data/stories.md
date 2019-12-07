## story_001
* greet
   - utter_greet
* inform
   - utter_ask_location
* inform{"location":"London"}
   - slot{"location": "London"}
   - action_weather
* goodbye
   - utter_goodbye

## story_002
* greet
   - utter_greet
* inform{"location":"Paris"}
   - slot{"location": "Paris"}
   - action_weather
* goodbye
   - utter_goodbye

## story_003
* greet
   - utter_greet
* inform
   - utter_ask_location
* inform{"location":"Vilnius"}
   - slot{"location": "Vilnius"}
   - action_weather
* goodbye
   - utter_goodbye

## story_004
* greet
   - utter_greet
* inform{"location":"Italy"}
   - slot{"location": "Italy"}
   - action_weather
* goodbye
   - utter_goodbye

## story_005
* greet
   - utter_greet
* inform
   - utter_ask_location
* inform{"location":"Lithuania"}
   - slot{"location": "Lithuania"}
   - action_weather
* goodbye
   - utter_goodbye

## interactive_story_1
* greet
    - utter_greet
* inform{"location": "dubai"}
    - slot{"location": "dubai"}
    - action_weather
    - slot{"location": "dubai"}
* greet
    - utter_greet
* inform{"location": "seoul"}
    - slot{"location": "seoul"}
    - action_weather
    - slot{"location": "seoul"}
* greet
    - utter_greet
* inform{"location": "kathmandu"}
    - slot{"location": "kathmandu"}
    - action_weather
    - slot{"location": "kathmandu"}
* inform{"location": "doha"}
    - slot{"location": "doha"}
    - action_weather
    - slot{"location": "doha"}
* greet
    - utter_greet
* greet
    - utter_greet
* inform{"location": "tokyo"}
    - slot{"location": "tokyo"}
    - action_weather
    - slot{"location": "tokyo"}
* inform{"location": "tokyo"}
    - slot{"location": "tokyo"}
    - action_weather
    - slot{"location": "tokyo"}
* goodbye
    - utter_goodbye
    - action_restart

## interactive_story_1
* greet
    - utter_greet
* greet
    - utter_greet
* goodbye
    - utter_goodbye
    - action_restart

## interactive_story_1
* inform{"location": "london"}
    - slot{"location": "london"}
    - action_weather
    - slot{"location": "london"}
* greet
    - utter_greet
* inform{"location": "congo"}
    - slot{"location": "congo"}
    - action_weather
    - slot{"location": "congo"}
* goodbye
    - utter_goodbye

## interactive_story_1
* greet{"greet": "hola"}
    - utter_greet
* greet
    - utter_greet
* inform
    - utter_ask_location
* inform
    - action_weather
    - slot{"location": null}
* inform{"location": "noida"}
    - slot{"location": "noida"}
    - action_weather
    - slot{"location": "noida"}
* inform{"location": "mumbai"}
    - slot{"location": "mumbai"}
    - action_weather
    - slot{"location": "mumbai"}
* goodbye
    - utter_goodbye
    - action_restart

## interactive_story_1
* greet
    - utter_greet
* inform
    - utter_ask_location
* inform{"location": "delhi"}
    - slot{"location": "delhi"}
    - action_weather
    - slot{"location": "delhi"}
* goodbye
    - utter_goodbye
    - action_restart

## interactive_story_1
* greet
    - utter_greet
* inform
    - utter_ask_location
* inform{"location": "jabalpur"}
    - slot{"location": "jabalpur"}
    - action_weather
    - slot{"location": "jabalpur"}
* inform
    - utter_ask_location
* inform{"location": "dhaka"}
    - slot{"location": "dhaka"}
    - action_weather
    - slot{"location": "dhaka"}

## interactive_story_1
* inform{"location": "dhaka"}
    - slot{"location": "dhaka"}
    - action_weather
    - slot{"location": "dhaka"}

## interactive_story_1
* greet
    - utter_greet
* inform
    - utter_ask_location
* inform{"location": "jabalpur"}
    - slot{"location": "jabalpur"}
    - action_weather
    - slot{"location": "jabalpur"}

## interactive_story_1
* inform
    - utter_ask_location
* inform{"location": "jaipur"}
    - slot{"location": "jaipur"}
    - action_weather
    - slot{"location": "jaipur"}

## interactive_story_1
* inform
    - utter_ask_location
* inform{"location": "jammu"}
    - slot{"location": "jammu"}
    - action_weather
    - slot{"location": "jammu"}
* inform{"location": "serbia"}
    - slot{"location": "serbia"}
    - action_weather
    - slot{"location": "serbia"}

## New Story

* greet
    - utter_greet
* inform
    - utter_ask_location
* inform
