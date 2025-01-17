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

// ComputeIngredientAmount200Response 
type ComputeIngredientAmount200Response struct {
	Amount float32 `json:"amount"`
	Unit string `json:"unit"`
}

// NewComputeIngredientAmount200Response instantiates a new ComputeIngredientAmount200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewComputeIngredientAmount200Response(amount float32, unit string) *ComputeIngredientAmount200Response {
	this := ComputeIngredientAmount200Response{}
	this.Amount = amount
	this.Unit = unit
	return &this
}

// NewComputeIngredientAmount200ResponseWithDefaults instantiates a new ComputeIngredientAmount200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewComputeIngredientAmount200ResponseWithDefaults() *ComputeIngredientAmount200Response {
	this := ComputeIngredientAmount200Response{}
	return &this
}

// GetAmount returns the Amount field value
func (o *ComputeIngredientAmount200Response) GetAmount() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Amount
}

// GetAmountOk returns a tuple with the Amount field value
// and a boolean to check if the value has been set.
func (o *ComputeIngredientAmount200Response) GetAmountOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Amount, true
}

// SetAmount sets field value
func (o *ComputeIngredientAmount200Response) SetAmount(v float32) {
	o.Amount = v
}

// GetUnit returns the Unit field value
func (o *ComputeIngredientAmount200Response) GetUnit() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Unit
}

// GetUnitOk returns a tuple with the Unit field value
// and a boolean to check if the value has been set.
func (o *ComputeIngredientAmount200Response) GetUnitOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Unit, true
}

// SetUnit sets field value
func (o *ComputeIngredientAmount200Response) SetUnit(v string) {
	o.Unit = v
}

func (o ComputeIngredientAmount200Response) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["amount"] = o.Amount
	}
	if true {
		toSerialize["unit"] = o.Unit
	}
	return json.Marshal(toSerialize)
}

type NullableComputeIngredientAmount200Response struct {
	value *ComputeIngredientAmount200Response
	isSet bool
}

func (v NullableComputeIngredientAmount200Response) Get() *ComputeIngredientAmount200Response {
	return v.value
}

func (v *NullableComputeIngredientAmount200Response) Set(val *ComputeIngredientAmount200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableComputeIngredientAmount200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableComputeIngredientAmount200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableComputeIngredientAmount200Response(val *ComputeIngredientAmount200Response) *NullableComputeIngredientAmount200Response {
	return &NullableComputeIngredientAmount200Response{value: val, isSet: true}
}

func (v NullableComputeIngredientAmount200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableComputeIngredientAmount200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


