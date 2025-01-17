/*
spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

API version: 1.1
Contact: mail@spoonacular.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// TalkToChatbot200Response 
type TalkToChatbot200Response struct {
	AnswerText string `json:"answerText"`
	Media []interface{} `json:"media"`
}

// NewTalkToChatbot200Response instantiates a new TalkToChatbot200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTalkToChatbot200Response(answerText string, media []interface{}) *TalkToChatbot200Response {
	this := TalkToChatbot200Response{}
	this.AnswerText = answerText
	this.Media = media
	return &this
}

// NewTalkToChatbot200ResponseWithDefaults instantiates a new TalkToChatbot200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTalkToChatbot200ResponseWithDefaults() *TalkToChatbot200Response {
	this := TalkToChatbot200Response{}
	return &this
}

// GetAnswerText returns the AnswerText field value
func (o *TalkToChatbot200Response) GetAnswerText() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.AnswerText
}

// GetAnswerTextOk returns a tuple with the AnswerText field value
// and a boolean to check if the value has been set.
func (o *TalkToChatbot200Response) GetAnswerTextOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.AnswerText, true
}

// SetAnswerText sets field value
func (o *TalkToChatbot200Response) SetAnswerText(v string) {
	o.AnswerText = v
}

// GetMedia returns the Media field value
func (o *TalkToChatbot200Response) GetMedia() []interface{} {
	if o == nil {
		var ret []interface{}
		return ret
	}

	return o.Media
}

// GetMediaOk returns a tuple with the Media field value
// and a boolean to check if the value has been set.
func (o *TalkToChatbot200Response) GetMediaOk() ([]interface{}, bool) {
	if o == nil {
		return nil, false
	}
	return o.Media, true
}

// SetMedia sets field value
func (o *TalkToChatbot200Response) SetMedia(v []interface{}) {
	o.Media = v
}

func (o TalkToChatbot200Response) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["answerText"] = o.AnswerText
	}
	if true {
		toSerialize["media"] = o.Media
	}
	return json.Marshal(toSerialize)
}

type NullableTalkToChatbot200Response struct {
	value *TalkToChatbot200Response
	isSet bool
}

func (v NullableTalkToChatbot200Response) Get() *TalkToChatbot200Response {
	return v.value
}

func (v *NullableTalkToChatbot200Response) Set(val *TalkToChatbot200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableTalkToChatbot200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableTalkToChatbot200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTalkToChatbot200Response(val *TalkToChatbot200Response) *NullableTalkToChatbot200Response {
	return &NullableTalkToChatbot200Response{value: val, isSet: true}
}

func (v NullableTalkToChatbot200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTalkToChatbot200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


