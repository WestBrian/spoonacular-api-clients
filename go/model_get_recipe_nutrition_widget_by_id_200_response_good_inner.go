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

// GetRecipeNutritionWidgetByID200ResponseGoodInner struct for GetRecipeNutritionWidgetByID200ResponseGoodInner
type GetRecipeNutritionWidgetByID200ResponseGoodInner struct {
	Amount string `json:"amount"`
	Indented bool `json:"indented"`
	PercentOfDailyNeeds float32 `json:"percentOfDailyNeeds"`
	Name string `json:"name"`
}

// NewGetRecipeNutritionWidgetByID200ResponseGoodInner instantiates a new GetRecipeNutritionWidgetByID200ResponseGoodInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetRecipeNutritionWidgetByID200ResponseGoodInner(amount string, indented bool, percentOfDailyNeeds float32, name string) *GetRecipeNutritionWidgetByID200ResponseGoodInner {
	this := GetRecipeNutritionWidgetByID200ResponseGoodInner{}
	this.Amount = amount
	this.Indented = indented
	this.PercentOfDailyNeeds = percentOfDailyNeeds
	this.Name = name
	return &this
}

// NewGetRecipeNutritionWidgetByID200ResponseGoodInnerWithDefaults instantiates a new GetRecipeNutritionWidgetByID200ResponseGoodInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetRecipeNutritionWidgetByID200ResponseGoodInnerWithDefaults() *GetRecipeNutritionWidgetByID200ResponseGoodInner {
	this := GetRecipeNutritionWidgetByID200ResponseGoodInner{}
	return &this
}

// GetAmount returns the Amount field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetAmount() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Amount
}

// GetAmountOk returns a tuple with the Amount field value
// and a boolean to check if the value has been set.
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetAmountOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Amount, true
}

// SetAmount sets field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) SetAmount(v string) {
	o.Amount = v
}

// GetIndented returns the Indented field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetIndented() bool {
	if o == nil {
		var ret bool
		return ret
	}

	return o.Indented
}

// GetIndentedOk returns a tuple with the Indented field value
// and a boolean to check if the value has been set.
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetIndentedOk() (*bool, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Indented, true
}

// SetIndented sets field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) SetIndented(v bool) {
	o.Indented = v
}

// GetPercentOfDailyNeeds returns the PercentOfDailyNeeds field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetPercentOfDailyNeeds() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.PercentOfDailyNeeds
}

// GetPercentOfDailyNeedsOk returns a tuple with the PercentOfDailyNeeds field value
// and a boolean to check if the value has been set.
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetPercentOfDailyNeedsOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.PercentOfDailyNeeds, true
}

// SetPercentOfDailyNeeds sets field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) SetPercentOfDailyNeeds(v float32) {
	o.PercentOfDailyNeeds = v
}

// GetName returns the Name field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) GetNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *GetRecipeNutritionWidgetByID200ResponseGoodInner) SetName(v string) {
	o.Name = v
}

func (o GetRecipeNutritionWidgetByID200ResponseGoodInner) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["amount"] = o.Amount
	}
	if true {
		toSerialize["indented"] = o.Indented
	}
	if true {
		toSerialize["percentOfDailyNeeds"] = o.PercentOfDailyNeeds
	}
	if true {
		toSerialize["name"] = o.Name
	}
	return json.Marshal(toSerialize)
}

type NullableGetRecipeNutritionWidgetByID200ResponseGoodInner struct {
	value *GetRecipeNutritionWidgetByID200ResponseGoodInner
	isSet bool
}

func (v NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) Get() *GetRecipeNutritionWidgetByID200ResponseGoodInner {
	return v.value
}

func (v *NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) Set(val *GetRecipeNutritionWidgetByID200ResponseGoodInner) {
	v.value = val
	v.isSet = true
}

func (v NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) IsSet() bool {
	return v.isSet
}

func (v *NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetRecipeNutritionWidgetByID200ResponseGoodInner(val *GetRecipeNutritionWidgetByID200ResponseGoodInner) *NullableGetRecipeNutritionWidgetByID200ResponseGoodInner {
	return &NullableGetRecipeNutritionWidgetByID200ResponseGoodInner{value: val, isSet: true}
}

func (v NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetRecipeNutritionWidgetByID200ResponseGoodInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


