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

// SearchGroceryProductsByUPC200ResponseServings struct for SearchGroceryProductsByUPC200ResponseServings
type SearchGroceryProductsByUPC200ResponseServings struct {
	Number float32 `json:"number"`
	Size float32 `json:"size"`
	Unit string `json:"unit"`
}

// NewSearchGroceryProductsByUPC200ResponseServings instantiates a new SearchGroceryProductsByUPC200ResponseServings object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSearchGroceryProductsByUPC200ResponseServings(number float32, size float32, unit string) *SearchGroceryProductsByUPC200ResponseServings {
	this := SearchGroceryProductsByUPC200ResponseServings{}
	this.Number = number
	this.Size = size
	this.Unit = unit
	return &this
}

// NewSearchGroceryProductsByUPC200ResponseServingsWithDefaults instantiates a new SearchGroceryProductsByUPC200ResponseServings object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSearchGroceryProductsByUPC200ResponseServingsWithDefaults() *SearchGroceryProductsByUPC200ResponseServings {
	this := SearchGroceryProductsByUPC200ResponseServings{}
	return &this
}

// GetNumber returns the Number field value
func (o *SearchGroceryProductsByUPC200ResponseServings) GetNumber() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Number
}

// GetNumberOk returns a tuple with the Number field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseServings) GetNumberOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Number, true
}

// SetNumber sets field value
func (o *SearchGroceryProductsByUPC200ResponseServings) SetNumber(v float32) {
	o.Number = v
}

// GetSize returns the Size field value
func (o *SearchGroceryProductsByUPC200ResponseServings) GetSize() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Size
}

// GetSizeOk returns a tuple with the Size field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseServings) GetSizeOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Size, true
}

// SetSize sets field value
func (o *SearchGroceryProductsByUPC200ResponseServings) SetSize(v float32) {
	o.Size = v
}

// GetUnit returns the Unit field value
func (o *SearchGroceryProductsByUPC200ResponseServings) GetUnit() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Unit
}

// GetUnitOk returns a tuple with the Unit field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseServings) GetUnitOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Unit, true
}

// SetUnit sets field value
func (o *SearchGroceryProductsByUPC200ResponseServings) SetUnit(v string) {
	o.Unit = v
}

func (o SearchGroceryProductsByUPC200ResponseServings) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["number"] = o.Number
	}
	if true {
		toSerialize["size"] = o.Size
	}
	if true {
		toSerialize["unit"] = o.Unit
	}
	return json.Marshal(toSerialize)
}

type NullableSearchGroceryProductsByUPC200ResponseServings struct {
	value *SearchGroceryProductsByUPC200ResponseServings
	isSet bool
}

func (v NullableSearchGroceryProductsByUPC200ResponseServings) Get() *SearchGroceryProductsByUPC200ResponseServings {
	return v.value
}

func (v *NullableSearchGroceryProductsByUPC200ResponseServings) Set(val *SearchGroceryProductsByUPC200ResponseServings) {
	v.value = val
	v.isSet = true
}

func (v NullableSearchGroceryProductsByUPC200ResponseServings) IsSet() bool {
	return v.isSet
}

func (v *NullableSearchGroceryProductsByUPC200ResponseServings) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSearchGroceryProductsByUPC200ResponseServings(val *SearchGroceryProductsByUPC200ResponseServings) *NullableSearchGroceryProductsByUPC200ResponseServings {
	return &NullableSearchGroceryProductsByUPC200ResponseServings{value: val, isSet: true}
}

func (v NullableSearchGroceryProductsByUPC200ResponseServings) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSearchGroceryProductsByUPC200ResponseServings) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


