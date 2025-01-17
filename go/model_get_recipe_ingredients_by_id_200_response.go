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

// GetRecipeIngredientsByID200Response 
type GetRecipeIngredientsByID200Response struct {
	Ingredients []GetRecipeIngredientsByID200ResponseIngredientsInner `json:"ingredients"`
}

// NewGetRecipeIngredientsByID200Response instantiates a new GetRecipeIngredientsByID200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetRecipeIngredientsByID200Response(ingredients []GetRecipeIngredientsByID200ResponseIngredientsInner) *GetRecipeIngredientsByID200Response {
	this := GetRecipeIngredientsByID200Response{}
	this.Ingredients = ingredients
	return &this
}

// NewGetRecipeIngredientsByID200ResponseWithDefaults instantiates a new GetRecipeIngredientsByID200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetRecipeIngredientsByID200ResponseWithDefaults() *GetRecipeIngredientsByID200Response {
	this := GetRecipeIngredientsByID200Response{}
	return &this
}

// GetIngredients returns the Ingredients field value
func (o *GetRecipeIngredientsByID200Response) GetIngredients() []GetRecipeIngredientsByID200ResponseIngredientsInner {
	if o == nil {
		var ret []GetRecipeIngredientsByID200ResponseIngredientsInner
		return ret
	}

	return o.Ingredients
}

// GetIngredientsOk returns a tuple with the Ingredients field value
// and a boolean to check if the value has been set.
func (o *GetRecipeIngredientsByID200Response) GetIngredientsOk() ([]GetRecipeIngredientsByID200ResponseIngredientsInner, bool) {
	if o == nil {
		return nil, false
	}
	return o.Ingredients, true
}

// SetIngredients sets field value
func (o *GetRecipeIngredientsByID200Response) SetIngredients(v []GetRecipeIngredientsByID200ResponseIngredientsInner) {
	o.Ingredients = v
}

func (o GetRecipeIngredientsByID200Response) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["ingredients"] = o.Ingredients
	}
	return json.Marshal(toSerialize)
}

type NullableGetRecipeIngredientsByID200Response struct {
	value *GetRecipeIngredientsByID200Response
	isSet bool
}

func (v NullableGetRecipeIngredientsByID200Response) Get() *GetRecipeIngredientsByID200Response {
	return v.value
}

func (v *NullableGetRecipeIngredientsByID200Response) Set(val *GetRecipeIngredientsByID200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableGetRecipeIngredientsByID200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableGetRecipeIngredientsByID200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetRecipeIngredientsByID200Response(val *GetRecipeIngredientsByID200Response) *NullableGetRecipeIngredientsByID200Response {
	return &NullableGetRecipeIngredientsByID200Response{value: val, isSet: true}
}

func (v NullableGetRecipeIngredientsByID200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetRecipeIngredientsByID200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


