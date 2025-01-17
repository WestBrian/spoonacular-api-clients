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

// ParseIngredients200ResponseInnerEstimatedCost struct for ParseIngredients200ResponseInnerEstimatedCost
type ParseIngredients200ResponseInnerEstimatedCost struct {
	Value float32 `json:"value"`
	Unit string `json:"unit"`
}

// NewParseIngredients200ResponseInnerEstimatedCost instantiates a new ParseIngredients200ResponseInnerEstimatedCost object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewParseIngredients200ResponseInnerEstimatedCost(value float32, unit string) *ParseIngredients200ResponseInnerEstimatedCost {
	this := ParseIngredients200ResponseInnerEstimatedCost{}
	this.Value = value
	this.Unit = unit
	return &this
}

// NewParseIngredients200ResponseInnerEstimatedCostWithDefaults instantiates a new ParseIngredients200ResponseInnerEstimatedCost object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewParseIngredients200ResponseInnerEstimatedCostWithDefaults() *ParseIngredients200ResponseInnerEstimatedCost {
	this := ParseIngredients200ResponseInnerEstimatedCost{}
	return &this
}

// GetValue returns the Value field value
func (o *ParseIngredients200ResponseInnerEstimatedCost) GetValue() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Value
}

// GetValueOk returns a tuple with the Value field value
// and a boolean to check if the value has been set.
func (o *ParseIngredients200ResponseInnerEstimatedCost) GetValueOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Value, true
}

// SetValue sets field value
func (o *ParseIngredients200ResponseInnerEstimatedCost) SetValue(v float32) {
	o.Value = v
}

// GetUnit returns the Unit field value
func (o *ParseIngredients200ResponseInnerEstimatedCost) GetUnit() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Unit
}

// GetUnitOk returns a tuple with the Unit field value
// and a boolean to check if the value has been set.
func (o *ParseIngredients200ResponseInnerEstimatedCost) GetUnitOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Unit, true
}

// SetUnit sets field value
func (o *ParseIngredients200ResponseInnerEstimatedCost) SetUnit(v string) {
	o.Unit = v
}

func (o ParseIngredients200ResponseInnerEstimatedCost) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["value"] = o.Value
	}
	if true {
		toSerialize["unit"] = o.Unit
	}
	return json.Marshal(toSerialize)
}

type NullableParseIngredients200ResponseInnerEstimatedCost struct {
	value *ParseIngredients200ResponseInnerEstimatedCost
	isSet bool
}

func (v NullableParseIngredients200ResponseInnerEstimatedCost) Get() *ParseIngredients200ResponseInnerEstimatedCost {
	return v.value
}

func (v *NullableParseIngredients200ResponseInnerEstimatedCost) Set(val *ParseIngredients200ResponseInnerEstimatedCost) {
	v.value = val
	v.isSet = true
}

func (v NullableParseIngredients200ResponseInnerEstimatedCost) IsSet() bool {
	return v.isSet
}

func (v *NullableParseIngredients200ResponseInnerEstimatedCost) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableParseIngredients200ResponseInnerEstimatedCost(val *ParseIngredients200ResponseInnerEstimatedCost) *NullableParseIngredients200ResponseInnerEstimatedCost {
	return &NullableParseIngredients200ResponseInnerEstimatedCost{value: val, isSet: true}
}

func (v NullableParseIngredients200ResponseInnerEstimatedCost) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableParseIngredients200ResponseInnerEstimatedCost) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


